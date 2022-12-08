#pragma once

#include <mainwindow.h>

#include <QObject>
#include <QWidget>
#include <QTest>

class Test_MainWindow : public QObject
{
    Q_OBJECT

public:
    explicit Test_MainWindow(QObject* parent = 0);

private slots:
    auto test_nameLineEdit() -> void;
    auto test_ipAddressLineEdit() -> void;
    auto test_pushButton() -> void;

    auto test_bench() -> void;
    auto test_bench2() -> void;
    auto test_bench3() -> void;
    auto test_bench4() -> void;

private:
    MainWindow window;

};
