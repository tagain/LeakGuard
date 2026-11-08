#include "referencematerialswindow.h"
#include "ui_referencematerialswindow.h"

ReferenceMaterialsWindow::ReferenceMaterialsWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReferenceMaterialsWindow)
{
    ui->setupUi(this);
}

ReferenceMaterialsWindow::~ReferenceMaterialsWindow()
{
    delete ui;
}
