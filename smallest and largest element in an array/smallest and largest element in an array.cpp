#include<iostream>
using namespace std;

void smallest(int arr[], int n) {

	int min = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}

	}
	cout << min << endl;
}
void largest(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}

	}
	cout << max << endl;
}
int main()
{
	int arr[] = { 56,78,98,34,679,765 };

	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	cout << "The smallest element is: ";
	smallest(arr, n);
	cout << "The largest element is: ";
	largest(arr, n);
}