#include "attacksimulationwindow.h"
#include "ui_attacksimulationwindow.h"

AttackSimulationWindow::AttackSimulationWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AttackSimulationWindow)
{
    ui->setupUi(this);
}

AttackSimulationWindow::~AttackSimulationWindow()
{
    delete ui;
}
