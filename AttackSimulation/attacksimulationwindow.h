#ifndef ATTACKSIMULATIONWINDOW_H
#define ATTACKSIMULATIONWINDOW_H

#include <QWidget>

namespace Ui {
class AttackSimulationWindow;
}

class AttackSimulationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AttackSimulationWindow(QWidget *parent = nullptr);
    ~AttackSimulationWindow();

private:
    Ui::AttackSimulationWindow *ui;
};

#endif // ATTACKSIMULATIONWINDOW_H
