#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <settings.h>

#include <QMainWindow>
#include <QTimer>

#include "task_executor.h"
#include "grep_job.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void select_dir();

private:
    Ui::MainWindow *ui;
    task_executor processor;
    std::shared_ptr<grep_job> job = nullptr;
    QTimer timer;
};

#endif // MAINWINDOW_H
