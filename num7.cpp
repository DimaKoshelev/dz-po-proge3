#include "pch.h"
#include<iostream>
using namespace std;
int main()
{
	int a, n;
	cin >> a >> n;
	int *mas = new int[a];
	int *arr = new int[a];
	for (int i = 0; i < a;i++) {
		int t;
		cin >> t;
		mas[i] = t;
		arr[i] = t;
	}

	if (n > 0) {

		for (int i = 0; i < a; i++) {
			mas[(n + i) % a] = arr[i];

		}
	}
	else {
		for (int i = 0; i < a; i++) {
			mas[i] = arr[(i - n) % a];
		}
	}








	for (int i = 0; i < a; i++) {
		cout << mas[i] << " ";

	}

	return 0;
}
