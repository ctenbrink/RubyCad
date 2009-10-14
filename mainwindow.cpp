#include <QtGui>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
   mpTextEdit = new QPlainTextEdit(this);
   setCentralWidget(mpTextEdit);

   createActions();
   createMenus();

   setUnifiedTitleAndToolBarOnMac(true);
}

void MainWindow::onAbout()
{
    QMessageBox::about(this, tr("About Application"),
                             tr("RubyCad demonstrates how to embed a Ruby interpreter in an application."
                                "Copyright 2009, Chris Tenbrink"));
}

void MainWindow::createActions()
{
    mpAboutAction = new QAction(tr("About &RubyCad"), this);
    mpAboutAction->setStatusTip(tr("Show RubyCad's About box"));
    connect(mpAboutAction, SIGNAL(triggered()), qApp, SLOT(onAbout()));
}

void MainWindow::createMenus()
{
    mpHelpMenu = menuBar()->addMenu(tr("&Help"));
    mpHelpMenu->addAction(mpAboutAction);
}


