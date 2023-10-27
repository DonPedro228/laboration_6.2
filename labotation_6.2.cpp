#include <iostream>
#include <climits>
#include <ctime>

using namespace std;

int* GenerateArray(int n)
{
	srand(static_cast<unsigned int>(time(nullptr)));

	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}

	return a;
}

void PrintArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int Average_MIN_MAX(int a[], int n) {
	if (n == 0) {
		return 0;
	}

	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
	}

	double average = ((static_cast<double>(min) + static_cast<double>(max)) / 2);
	return average;
}

int main() {
	int n;
	cout << "n = "; cin >> n;

	int* a = GenerateArray(n);
	PrintArray(a, n);


	double result = Average_MIN_MAX(a, n);

	cout << "Average = " << result << endl;

	delete[] a;
	return 0;
}