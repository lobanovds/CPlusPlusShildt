#include <iostream>
using namespace std;

int main()
{
	int length;
	int width;
	cout << "Enter length:\n\r";
	cin >> length;
	cout << "Length is ";
	cout << length;

	cout << "\nEnter width:\n\r";
	cin >> width;
	cout << "Width is ";
	cout << width;

	cout << "\n\rArea is:\n\r";
	cout << length*width;
	return 0;
}