#include <iostream>

using namespace std;

void power(int base, int exponent)
{
	//Change the name of the function to be called power and have it take an int base and an int exponent.Print the base number raised to the exponent power.
	int retval = pow((double)base, exponent);
	cout << base << "^" << exponent << " is: " << retval << endl;
}

int main()
{
	power(2, 3);

	system("pause");
	return 0;
}