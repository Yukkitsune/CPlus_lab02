/*
Найти все нечетные числа последовательности Фибоначчи, не превышающие заданные значения a
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int F(int n) {
    if (n < 0) {
        return 0;
    }
    else if ((n == 0) || (n == 1)) {
        return 1;
    }
    else {
        return (F(n - 1) + F(n - 2));
    }

}
int main()
{   
    setlocale(LC_ALL, "russian");
    int A = 0;
    int num = 0;
    cout << "Введите границу А: ";
    cin >> A;
    if (A < 1) {
        cout << "Таких чисел не существует";
    }
    num = F(0);
    for (int i = 1;num<=A;i++) {
        if (num % 2 != 0) {
            cout << num << endl;
        }
        num = F(i);
    }
    return 0;
}

