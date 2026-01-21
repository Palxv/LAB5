#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int n, i, sign;
    double sum, limit;
    cout << "n = ";
    cin >> n;
    sum = 0.0;
    sign = 1; 
    limit = 10.0;
    for (i = 1; i <= n; i++) {
        if (i == limit) {
            sign = -sign;
            limit = limit * 10;
        }
        sum = sum + (1.0 * sign) / i;
    }
    cout << "Результат: " << sum << endl;
    return 0;
}