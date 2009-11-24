#include <QtGui>
#include <QLabel>
#include <QDockWidget>
#include <QVBoxLayout>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("RubyCad"));

    resize(600,400);

    QLabel* pLabel = new QLabel(tr("Central Widget"));
    setCentralWidget(pLabel);
    pLabel->setAlignment(Qt::AlignCenter);

    QDockWidget* pRubyConsoleDock = new QDockWidget(tr("Ruby Console"));
    pRubyConsoleDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    pRubyConsoleDock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);

    addDockWidget(Qt::LeftDockWidgetArea, pRubyConsoleDock);

    QVBoxLayout* pLayout = new QVBoxLayout(pRubyConsoleDock);

    QTextEdit* pEdit = new QTextEdit(pRubyConsoleDock);
    pLayout->addWidget(pEdit);

    pEdit = new QTextEdit(pRubyConsoleDock);
    pLayout->addWidget(pEdit);

    setLayout(pLayout);

//    pLabel = new QLabel(tr("Ruby Console Widget"));
//    pRubyConsoleDock->setWidget(pLabel);
//
//    pLabel->setAlignment(Qt::AlignCenter);
}
