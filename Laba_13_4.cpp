using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (int j = 1; j <= N; j++) {
		cin >> A[j];
	};
	cout << "Массив после перестановки: ";
	for (int i = 1; i <= ((N / 2)); i++) {
		cout << A[i] << " " << A[N - i + 1] << " ";
	}
	if (N % 2 != 0) cout << A[N / 2 + 1];
	delete[] A;
	return 0;
}