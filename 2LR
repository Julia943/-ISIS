#include <iostream>
#include <vector>
#include <iomanip>

class Integral {
private:
    int size;
    std::vector<double> argument;
    std::vector<double> function;
public:
    // Конструктор для создания экземпляра класса с заданной размерностью
    Integral(int size) : size(size), argument(size), function(size) {
        std::cout << "input= argument";
        for (int i = 0; i < size; i++) {
            std::cin >> argument[i];
            std::cout << " " << argument[i];
        }
        std::cout << "\nfunction";
        for (int i = 0; i < size; i++) {
            std::cin >> function[i];
            std::cout << " " << function[i];
        }
        std::cout << std::endl;
    }

    // Деструктор
    ~Integral() {}

    // Метод для вычисления интеграла методом левых прямоугольников
    double leftRectangleMethod() {
        double integral = 0.0;
        for (int i = 1; i < size; i++) {
            integral += (argument[i] - argument[i - 1]) * function[i - 1];
        }
        return integral;
    }

    // Метод для вычисления интеграла методом средних прямоугольников
    double middleRectangleMethod() {
        double integral = 0.0;
        for (int i = 0; i < size - 1; i++) {
            integral += 0.5 * (argument[i + 1] - argument[i]) * (function[i] + function[i + 1]);
        }
        return integral;
    }

    // Метод для вычисления интеграла методом правых прямоугольников
    double rightRectangleMethod() {
        double integral = 0.0;
        for (int i = 0; i < size - 1; i++) {
            integral += (argument[i + 1] - argument[i]) * function[i + 1];
        }
        return integral;
    }

    // Метод для вычисления интеграла методом трапеций
    double trapezoidalMethod() {
        double integral = 0.0;
        for (int i = 0; i < size - 1; i++) {
            integral += 0.5 * (argument[i + 1] - argument[i]) * (function[i] + function[i + 1]);
        }
        return integral;
    }

    // Метод для вычисления интеграла методом Симпсона
    double simpsonsMethod() {
        double integral = 0.0;
        for (int i = 0; i < size - 2; i += 2) {
            double h = (argument[i + 2] - argument[i]) / 6.0;
            integral += h * (function[i] + 4 * function[i + 1] + function[i + 2]);
        }
        return integral;
    }

    // Метод для вычисления интеграла методом Ньютона (3/8)
    double newtonMethod() {
        double integral = 0.0;
        for (int i = 0; i < size - 2; i += 3) {
            integral += (argument[i + 3] - argument[i]) / 8.0 * (function[i] + 3.0 * function[i + 1] + 3 * function[i + 2] + function[i + 3]);
        }
        return integral;
    }
};

int main() {
    int size;
   // std::cout << "Введите размерность массивов: ";
    std::cin >> size;

    Integral integral(size);

    std::cout << "lev priam= " << integral.leftRectangleMethod() << std::endl;
    std::cout << "sr priam= " << integral.middleRectangleMethod() << std::endl;
    std::cout << "prav priam= " << integral.rightRectangleMethod() << std::endl;
    std::cout << "trapeciy= " << integral.trapezoidalMethod() << std::endl;
    std::cout << "Simpson= " << integral.simpsonsMethod() << std::endl;
    std::cout << "Newton " << integral.newtonMethod() << std::endl;

    return 0;
}
