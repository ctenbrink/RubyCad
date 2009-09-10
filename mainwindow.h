#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

class QPlainTextEdit;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

private slots:
    void onAbout();

private:
    void createActions();
    void createMenus();

    QPlainTextEdit* mpTextEdit;
    QAction* mpAboutAction;
    QMenu* mpHelpMenu;
};

#endif // MAINWINDOW_H
