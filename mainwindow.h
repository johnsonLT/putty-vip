#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QProcess>
#include "qmylistwidget.h"
#include "settings.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initWindow(void);

private slots:
    //void on_ShellList_itemActivated(QListWidgetItem *item);

    void on_actionputty_triggered();
    void processError(QProcess::ProcessError error);

    //void on_ShellList_customContextMenuRequested(const QPoint &pos); //响应右键

private:
    Ui::MainWindow *ui;
    QProcess *process;

};

#endif // MAINWINDOW_H
