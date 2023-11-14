// tayota.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i * 17;


    }

    cout << "Ответ: " << sum << endl;

    return 0;
}