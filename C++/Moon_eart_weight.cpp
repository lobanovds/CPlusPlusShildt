#include <iostream>
using namespace std;

int main()
{
int counter=0;
for (float earthGravityInPounds = 1.0; earthGravityInPounds <= 100.0; earthGravityInPounds++)
{
	counter++;
	cout <<"earthGravityInPounds= "<< earthGravityInPounds<<" moonGravityInPounds="<<earthGravityInPounds*0.17<<"\r\n";
	if (counter==25)
	{
		counter = 0;
		cout << "\r\n";
	}
}

cin.get();
return 0;
}