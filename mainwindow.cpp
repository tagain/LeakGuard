#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AttackSimulation/attacksimulationwindow.h"
#include "ReferenceMaterials/referencematerialswindow.h"
#include "LeakSearch/leaksearchwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Инициализация всех трех вкладок
    attackSimulationWindow = new AttackSimulationWindow(this);
    ui->stackedWidget->addWidget(attackSimulationWindow);

    referenceMaterialsWindow = new ReferenceMaterialsWindow(this);
    ui->stackedWidget->addWidget(referenceMaterialsWindow);

    leakSearchWindow = new LeakSearchWindow(this);
    ui->stackedWidget->addWidget(leakSearchWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_leakSearchBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(leakSearchWindow);
}


void MainWindow::on_referenceMaterialsBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(referenceMaterialsWindow);
}


void MainWindow::on_attackSimulationBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(attackSimulationWindow);
}

