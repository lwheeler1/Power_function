#include <iostream>

using namespace std;


int power(float base, int exponent)
{
	//Change the name of the function to be called power and have it take an int base and an int exponent.Print the base number raised to the exponent power.
	int retval = pow(base, exponent);
	return retval;
}

int main()
{
	if (power(2, 3) == 8)
	{
		cout << "Yeah boi!" << endl;
	}
	else
	{
		cout << "ERROR - you are an idiot!!" << endl;
	}

	system("pause");
	return 0;
}