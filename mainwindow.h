#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class AttackSimulationWindow;
class ReferenceMaterialsWindow;
class LeakSearchWindow;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_leakSearchBtn_clicked();

    void on_referenceMaterialsBtn_clicked();

    void on_attackSimulationBtn_clicked();

private:
    Ui::MainWindow *ui;
    AttackSimulationWindow* attackSimulationWindow = nullptr;
    ReferenceMaterialsWindow* referenceMaterialsWindow = nullptr;
    LeakSearchWindow* leakSearchWindow = nullptr;
};
#endif // MAINWINDOW_H
