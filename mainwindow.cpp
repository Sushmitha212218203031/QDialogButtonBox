#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    /*
   QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly |
                                                   QFileDialog::DontResolveSymlinks);
   qDebug()<<"Your chosen Directory is:"<<dir;
   */
    /*
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/home",
                                                    tr("Images(*.png *.xpm *.jpg"));
    qDebug()<<"Your chosen file is:"<<fileName;
    */
    /*
    QStringList files = QFileDialog::getOpenFileNames(this, "Select one or more files to open",
                                                  "/home",
                                                   "Images(*.png *.xpm *.jpg);;Text files(*.txt);;XML files (*.xml)");
    qDebug()<<"Your chosen files are:"<<files;
    */
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),"/home",
                                                    tr("Images(*.png *.xpm *.jpg);;"
                                                      "Text files(*.txt);;XML files (*.xml)"));
    qDebug()<<"Your chosen file is:"<<fileName;
}
