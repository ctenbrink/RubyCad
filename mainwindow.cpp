#include <QtGui>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mpTextEdit = new QPlainTextEdit(this);
    setCentralWidget(mpTextEdit);

    //setUnifiedTitleAndToolBarOnMac(true);

    mpAboutAction = new QAction(tr("About &RubyCad"), this);
    mpAboutAction->setStatusTip(tr("Show RubyCad's About box"));
    connect(mpAboutAction, SIGNAL(triggered()), this, SLOT(onAbout()));

    mpHelpMenu = menuBar()->addMenu(tr("&Blah"));
    mpHelpMenu->addAction(mpAboutAction);
}

void MainWindow::onAbout()
{
    QMessageBox::about(this, tr("About Application"),
                             tr("RubyCad demonstrates how to embed a Ruby interpreter in an application."
                                "Copyright 2009, Chris Tenbrink"));
}

