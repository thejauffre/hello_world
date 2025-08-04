
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Simple Qt6 App");

    QPushButton *button = new QPushButton("Click Me");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(button);
    window.setLayout(layout);

    window.resize(300, 100);
    window.show();

    return app.exec();
}
