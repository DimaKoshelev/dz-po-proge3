// ConsoleApplication42.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include<iostream>
using namespace std;
int main()
{
	int a, n = 0;
	cin >> a;
	int *mas = new int[a];
	int *arr = new int[a];
	for (int i = 0; i < a;i++) {
		int t;
		cin >> t;
		mas[i] = t;
	}


	for (int i = 0; i < a; i++) {
		bool  x= false;
		for (int j = 0; j < a;j++) {

			if (mas[i] == mas[j] && j != i) {
				x = true;
			}
		}
		if (x == false) {
			arr[n] = mas[i];
			n++;
		}
	}
	for (int i = 0; i < n;i++) {
		cout << arr[i] << " ";
	}
	return 0;
}