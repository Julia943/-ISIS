#include <iostream>
using namespace std;

// Функция для выполнения бинарного поиска в массиве
int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid; // Найден элемент, возвращаем его индекс
        }
        else if (arr[mid] < key) {
            left = mid + 1; // Искать в правой половине
        }
        else {
            right = mid - 1; // Искать в левой половине
        }
    }

    return -1; // Элемент не найден
}

// Функция для тестирования бинарного поиска
void runTests() {
    int testNumber = 1;

    // Тест 1: Успешный поиск элемента в массиве
    int arr1[] = { 1, 2, 3, 4, 5 };
    int n1 = 5;
    int key1 = 3;
    int expectedResult1 = 2;
    int result1 = binarySearch(arr1, n1, key1);
    if (result1 == expectedResult1) {
        cout << "Тест " << testNumber << " пройден." << endl;
    }
    else {
        cout << "Тест " << testNumber << " не пройден. Ожидаемый результат: " << expectedResult1 << ", Фактический результат: " << result1 << endl;
    }
    testNumber++;

    // Тест 2: Неуспешный поиск элемента в массиве
    int arrN[] = { 10, 20, 30, 40 };
    int nN = 4;
    int keyN = 25;
    int expectedResultN = -1;
    int resultN = binarySearch(arrN, nN, keyN);
    if (resultN == expectedResultN) {
        cout << "Тест " << testNumber << " пройден." << endl;
    }
    else {
        cout << "Тест " << testNumber << " не пройден. Ожидаемый результат: " << expectedResultN << ", Фактический результат: " << resultN << endl;
    }
    testNumber++;
}

int main() {
    setlocale(LC_ALL, "Russian");

    runTests();

    return 0;
}
