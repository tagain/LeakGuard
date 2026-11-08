#ifndef LEAKSEARCHWINDOW_H
#define LEAKSEARCHWINDOW_H

#include <QWidget>

namespace Ui {
class LeakSearchWindow;
}

class LeakSearchWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LeakSearchWindow(QWidget *parent = nullptr);
    ~LeakSearchWindow();

private:
    Ui::LeakSearchWindow *ui;
};

#endif // LEAKSEARCHWINDOW_H
