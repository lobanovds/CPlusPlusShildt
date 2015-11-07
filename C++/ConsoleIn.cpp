#include <iostream>
using namespace std;

int main()
{
	int length;
	int width;
	cout << "Enter length:\n";
	cin >> length;
	cout << "Length is ";
	cout << length;

	cout << "\nEnter width:\n";
	cin >> width;
	cout << "Width is ";
	cout << width;

	cout << "\nArea is:\n" << length*width;
	return 0;
}