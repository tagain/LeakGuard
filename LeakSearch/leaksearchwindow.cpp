#include "leaksearchwindow.h"
#include "ui_leaksearchwindow.h"

LeakSearchWindow::LeakSearchWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LeakSearchWindow)
{
    ui->setupUi(this);
}

LeakSearchWindow::~LeakSearchWindow()
{
    delete ui;
}
