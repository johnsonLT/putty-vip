#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initWindow()
{
   // ui->ShellList->addItem(tr("-所有会话"));
    ui->ShellList->initConnect();
}


void MainWindow::on_actionputty_triggered()
{
    process = new QProcess();
    process->start("putty.exe");
    QObject::connect(process, SIGNAL(error(QProcess::ProcessError)), this, SLOT(processError (QProcess::ProcessError)));

}

void MainWindow::processError(QProcess::ProcessError error)
{
 switch(error)
 {
  case QProcess::FailedToStart:
    QMessageBox::information(nullptr,"FailedToStart","FailedToStart");
    break;
  case QProcess::Crashed:
    QMessageBox::information(nullptr,"Crashed","Crashed");
    break;
  case QProcess::Timedout:
    QMessageBox::information(nullptr,"FailedToStart","FailedToStart");
    break;
  case QProcess::WriteError:
    QMessageBox::information(nullptr,"Timedout","Timedout");
    break;
  case QProcess::ReadError:
    QMessageBox::information(nullptr,"ReadError","ReadError");
    break;
  case QProcess::UnknownError:
    QMessageBox::information(nullptr,"UnknownError","UnknownError");
    break;
  default:
    QMessageBox::information(nullptr,"default","default");
    break;
 }
}

