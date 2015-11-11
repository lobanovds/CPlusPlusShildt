#include <iostream>
using namespace std;

int main()
{
	float inputdata;
	float summary = 0;
	const int endOfThatProgram = 5;
	for (int i=0; i<endOfThatProgram; i++)
	{
		cout << "enter value number "<<i+1<<"\n\r";
		cin >> inputdata;
		
		summary = summary + inputdata;
		cout << "inputdata = " << inputdata<<"\n\r";
		
		cout << "summary = " << summary<<"\n\r";
	}
	cout << "result = " << summary/endOfThatProgram<<"\n\r";
	
	return 0;
}