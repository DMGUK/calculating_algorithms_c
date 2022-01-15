// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<stdio.h>
#include <windows.h>
#define i0 100
using namespace std;

int main()
{
	double a[i0];
	double a_min, a_max, sum, avg_sum, mult, avg_mult;
	int i;
	int i_min, i_max;
	int select;
	printf("Enter the elements of the array, please\n");
	for (i = 0; i < i0; i++)
	{
		printf("a[%d] = ", i);
		cin >> a[i];
		printf("\n");
	}
	cout << "Choose the menu option : " << endl
		<< "1. Show all the elements of the array" << endl
		<< "2. Show the smallest and the biggest elements of the array" << endl
		<< "3. Show the sum and its average meaning of all the elements of the array" << endl
		<< "4. Show the multiplication and its average meaning of all the elements in the array" << endl;
	cin >> select;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	switch (select) {
	case 1:
		printf("The array is : \n");
		for (i = 0; i < i0; i++) {
			printf("a[%i]=%lf\n", i, a[i]);
		}
		break;
	case 2:
		a_min = a_max = a[1];
		i_min = i_max = 1;
		for (i = 0; i < i0; i++)
		{
			if (a_min < a[i]) {
				a_min = a[i];
				i_min = i;
			}
			if (a_max > a[i]) {
				a_max = a[i];
				i_max = i;
			}
		}
		printf("\nMin and Max numbers are : \n");
		printf("a[%i] = %lf\n", i_min, a_min);
		printf("a[%i] = %lf\n", i_max, a_max);
		break;
	case 3:
		sum = 0;
		for (i = 0; i < i0; i++) {
			sum += a[i];
		}
		avg_sum = sum / i0;
		printf("The sum is : %lf\n", sum);
		printf("The average meaning (sum) is : %lf\n", avg_sum);
		break;
	case 4:
		mult = 1;
		for (i = 0; i < i0; i++) {
			mult *= a[i];
		}
		avg_mult = mult / i0;
		printf("The multiplication is : %lf\n", mult);
		printf("The average meaning (mult) is : %lf\n", avg_mult);
		break;
	default: printf("Error !!! You have written the wrong menu option !!! \n");
		break;
	}
	return 1;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
