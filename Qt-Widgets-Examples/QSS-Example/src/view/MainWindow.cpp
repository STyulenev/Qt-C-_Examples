#include "MainWindow.h"
#include "./ui_MainWindow.h"

namespace View {

MainWindow::MainWindow(QWidget* parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


auto MainWindow::on_exitButton_clicked() -> void
{
    exit(0);
}

} // namespace View