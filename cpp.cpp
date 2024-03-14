#include <iostream>
#include <vector>
#include <locale> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); 

    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Введите " << n << " целых чисел через пробел: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // а) a1 — a2 + a3 — ...
    int result_a = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            result_a += numbers[i];
        }
        else {
            result_a -= numbers[i];
        }
    }
    cout << "Результат а): " << result_a << endl;

    // б) a1 + an
    int result_b = numbers[0] + numbers[n - 1];
    cout << "Результат б): " << result_b << endl;

    // в) a1 — a2
    int result_c = numbers[0] - numbers[1];
    cout << "Результат в): " << result_c << endl;

    return 0;
}
