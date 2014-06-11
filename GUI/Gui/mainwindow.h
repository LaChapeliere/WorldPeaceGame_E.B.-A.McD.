#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QLineEdit>
#include <QFormLayout>
#include <QMenuBar>
#include <QDialog>
#include <QLabel>
#include <QComboBox>
#include <QLayout>
#include <QPushButton>
#include "creationpays.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

signals:

public slots:
    void fenetreCreationPays();

};

#endif // MAINWINDOW_H
