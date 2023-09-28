//Решение задачи 
#include <iostream>
#include <vector>
#include <cmath>
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
 return count / sum;
}
int main() {
 setlocale(LC_ALL, "Russian");
 int n;
 std::cout << "Введите размер массива: ";
 std::cin >> n;
 std::vector<double> arr(n);
 std::cout << "Введите элементы массива: ";
 for (int i = 0; i < n; i++) {
 std::cin >> arr[i];
 }
 try {
 double harmonicMean = calculateHarmonicMean(arr);
 std::cout << "Среднегармоническое значение положительных
элементов: " << harmonicMean << std::endl;
 }
 catch (const std::runtime_error& e) {
 std::cerr << "Ошибка: " << e.what() << std::endl;
 }
 return 0;
}
