#include <QtGui>
#include <QLabel>
#include <QDockWidget>
#include <QVBoxLayout>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("RubyCad"));

    resize(1400,700);

    QLabel* pLabel = new QLabel(tr("Central Widget"));
    setCentralWidget(pLabel);
    pLabel->setAlignment(Qt::AlignCenter);

    QDockWidget* pDock = new QDockWidget(tr("Ruby Console"));
    pDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    pDock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);

    QWidget* pWidget = new QWidget(pDock);
    QVBoxLayout* pLayout = new QVBoxLayout();
    pLayout->addWidget(new QLabel(tr("Output")));
    pLayout->addWidget(new QTextEdit());
    pLayout->addWidget(new QLabel(tr("Input")));
    pLayout->addWidget(new QLineEdit());
    pWidget->setLayout(pLayout);

    pDock->setWidget(pWidget);

    addDockWidget(Qt::LeftDockWidgetArea, pDock);
}
