// lab 4.2.cpp : lab 4.2
//

#include <iostream>
using namespace std;



int Arif_Sum(int a, int d, int n, int sum) {

	if (n == 1) return a;
	sum = a + (n - 1) * d + Arif_Sum(a, d, n - 1, sum);
	return sum;
}

int main() {
	setlocale(LC_ALL, "");
	bool check = false;
	int j = 1;
	int n = 0, a = 0, d = 0, sum = 0;
	while (j != 2)
	{
		if (check) {
			cout << "Хотите еще попробовать?\n1 - Da \n2 - Нет\n>>";
			while (!(cin >> j) || j < 1 || j > 2) {
				cout << "\nОшибка! Введите 1 или 2: ";
				cin.clear();
				fflush(stdin);
			}
		}

		if (j == 2)
			break;

		cout << "Введите первый элмент арифметической прогресии: ";

		while (!(cin >> a)) {
			cout << "\nОшибка! Введите целое число: ";
			cin.clear();
			fflush(stdin);
		}
		cout << "Введите разность: ";

		while (!(cin >> d)) {
			cout << "\nОшибка! Введите целое число: ";
			cin.clear();
			fflush(stdin);
		}
		cout << "Введите количество первых членов: ";
		while (!(cin >> n) || n <= 0) {
			cout << "\nОшибка! Введите положительное целое число: ";
			cin.clear();
			fflush(stdin);
		}
		cout << endl;
		cout << "Сумма первых " << n << " элементов = " << Arif_Sum(a, d, n, sum) << endl;
		check = true;
	}


	system("pause");
}