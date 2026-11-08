#ifndef REFERENCEMATERIALSWINDOW_H
#define REFERENCEMATERIALSWINDOW_H

#include <QWidget>

namespace Ui {
class ReferenceMaterialsWindow;
}

class ReferenceMaterialsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ReferenceMaterialsWindow(QWidget *parent = nullptr);
    ~ReferenceMaterialsWindow();

private:
    Ui::ReferenceMaterialsWindow *ui;
};

#endif // REFERENCEMATERIALSWINDOW_H
