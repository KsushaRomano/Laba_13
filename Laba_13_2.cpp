using namespace std;

#include <iostream>
#include <Math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, j;
	double A, D;
	cout << "Введите размер массива: ";
	cin >> N;
	cout << "Введите первый элемент массива и знаменатель геометрической прогерссии: ";
	cin >> A >> D;
	int* mas = new int[N];
	for (int i = 0; i < N; i++) {
		mas[i] = A * pow(D, i);
		cout << "Элемент массива под номером " << i << " - " << mas[i] << endl;
	}
	delete[] mas;
	return 0;
}