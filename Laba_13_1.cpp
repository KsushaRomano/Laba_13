using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, j;
	cout << "Введите размер массива: ";
	cin >> N;
	j = 1;
	int* mas = new int[N];
	for (int i = 0; i < N; i++) {
		mas[i] = j;
		j += 2;
		cout << "Элемент массива под номером " << i << " - " << mas[i] << endl;
	}
	delete[] mas;
	return 0;
}