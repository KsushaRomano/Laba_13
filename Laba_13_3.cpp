using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	double A, B, j;
	cout << "Введите размер массива: ";
	cin >> N;
	cout << "Введите первые элементы массива: ";
	cin >> A >> B;
	int* mas = new int[N];
	mas[0] = A;
	mas[1] = B;
	j = A + B;
	for (int i = 2; i < N; i++) {
		mas[i] = j;
		j += mas[i];
		cout << "Элемент массива под номером " << i << " - " << mas[i] << endl;
	}
	delete[] mas;
	return 0;
}