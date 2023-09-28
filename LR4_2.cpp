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

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    if (n <= 0) {
        cout << "Размер массива должен быть больше нуля." << endl;
        return 1; // Возврат кода ошибки
    }

    int* arr = new int[n]; // Создание динамического массива

    cout << "Введите элементы массива (в отсортированном порядке): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Введите элемент для поиска: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1) {
        cout << "Элемент " << key << " найден в массиве, его индекс: " << result << endl;
    }
    else {
        cout << "Элемент " << key << " не найден в массиве." << endl;
    }

    delete[] arr; // Освобождение памяти, выделенной для массива
    return 0;
}
