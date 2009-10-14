#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

class QPlainTextEdit;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

public slots:
    void onAbout();

private:

    QPlainTextEdit* mpTextEdit;
    QAction* mpAboutAction;
    QMenu* mpHelpMenu;
};

#endif // MAINWINDOW_H
