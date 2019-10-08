using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (int j = 1; j <= N; j++) {
		cin >> A[j];
	};
	for (i = 1; i <= N; i += 2) {
		cout << A[i];
	};
	if (N % 2 != 0) {
		for (i = 2; i <= N; i += 2) {
			cout << A[N - i + 1];
		};
	}
	else {
		for (i = 2; i <= N; i += 2) {
			cout << A[N - i + 1];
		};
	};
}