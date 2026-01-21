#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, i;
	cout << "n = "; cin >> n;
	cout << "Натуральні дільники: ";
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
}