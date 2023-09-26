#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdexcept>
double calculateHarmonicMean(const std::vector<double>& arr) {
 if (arr.empty()) {
 throw std::runtime_error("Массив пустой");
 }
 double sum = 0.0;
 int count = 0;
 for (double element : arr) {
 if (element <= 0) {
 // Игнорируем отрицательные и нулевые элементы
 continue;
 }
 sum += 1.0 / element;
 count++;
 }
 if (count == 0) {
 throw std::runtime_error("Нет положительных элементов в
массиве");
 }
 return static_cast<double>(count) / sum;
}
int main() {
 setlocale(LC_ALL, "Russian");
 std::cout << std::fixed << std::setprecision(5); //
Установка точности вывода
 // Тест 1: Нормальный случай
 std::vector<double> arr1 = { 2.0, 3.0, 4.0 };
 double expected_result1 = 2.76923; // Ожидаемый результат с
точностью до пяти знаков после запятой
 double result1 = calculateHarmonicMean(arr1);
 std::cout << "Тест 1: Ожидаемый результат = " <<
expected_result1 << ", Фактический результат = " << result1 <<
std::endl;
 // Тест 2: Пустой массив
 std::vector<double> arr2;
 double result2 = 0;
8
 try {
 result2 = calculateHarmonicMean(arr2);
 }
 catch (const std::runtime_error& e) {
 // Обработка ошибки, если она произошла
 std::cout << "Тест 2: Ожидаемый результат = Массив
пустой, ";
 std::cerr << "Фактический результат = " << e.what() <<
std::endl;
 }

 // Тест 3: Массив с отрицательными элементами
 std::vector<double> arr3 = { 2.0, -3.0, 4.0 };
 double expected_result3 = 2.66667; // Ожидаемый результат с
точностью до пяти знаков после запятой
 double result3 = calculateHarmonicMean(arr3);
 std::cout << "Тест 3: Ожидаемый результат = " <<
expected_result3 << ", Фактический результат = " << result3 <<
std::endl;
 // Тест 4: Нет положительных элементов
 std::vector<double> arr4 = { -2.0, -3.0, -4.0 };
 double result4 = 0;
 try {
 result4 = calculateHarmonicMean(arr4);
 }
 catch (const std::runtime_error& e) {
 // Обработка ошибки, если она произошла
 std::cout << "Тест 2: Ожидаемый результат = Нет
положительных элементов в массиве, ";
 std::cerr << "Фактический результат = " << e.what() <<
std::endl;
 }
 // Тест 5: Массив из одного элемента
 std::vector<double> arr5 = { 7.0 };
 double expected_result5 = 7.0; // Ожидаемый результат с
точностью до пяти знаков после запятой
 double result5 = calculateHarmonicMean(arr5);
 std::cout << "Тест 5: Ожидаемый результат = " <<
expected_result5 << ", Фактический результат = " << result5 <<
std::endl;
 return 0;
}
