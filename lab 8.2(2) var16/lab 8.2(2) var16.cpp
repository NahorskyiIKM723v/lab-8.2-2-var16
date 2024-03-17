#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    int arr[20];
    cout << "Введіть 20 цілих чисел: ";
    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
    }
        int reversedArr[20];
    for (int i = 0; i < 20; i++) {
        reversedArr[i] = arr[19 - i];
    }
    cout << "Зворотний масив: ";
    for (int i = 0; i < 20; i++) {
        cout << reversedArr[i] << " ";
    }
}
