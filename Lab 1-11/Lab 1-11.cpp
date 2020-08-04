// Lab 1-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template<class T>
void swap_values(T& variable1, T& variable2)
{
	T temp;
	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}
template<class T>
int index_of_smallest(const T a[], int start_index, int number_used)
{
	T min = a[start_index];
	T index_of_min = start_index;
	for (int index = start_index + 1; index < number_used; index++)
		if (a[index] < min)
		{
			min = a[index];
			index_of_min = index;
		}
	return index_of_min;
}
template<class T>
void sort(T a[], int number_used)
{
	int index_of_next_smallest = 0;
	for (int index = 0; index < number_used - 1; index++)
	{
		index_of_next_smallest = index_of_smallest(a, index, number_used);
		swap_values(a[index], a[index_of_next_smallest]);
	}
}

/*
void main() {

	char arr[3] = { 'b','a','c' };
	for (int i = 0; i < 3; i++) {
		cout << "arr " << i << " = " << arr[i] << endl;
	}
	cout << index_of_smallest(arr, 0, 3) << endl;
	sort(arr, 3);

	for (int i = 0; i < 3; i++) {
		cout << "arr " << i << " = " << arr[i] << endl;
	}
	cout << index_of_smallest(arr, 0, 3) << endl;
}

*/




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
