#include <iostream>
using namespace std;


int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	cout << "Determining the highest and lowest #'s using only if's\n";
	cout << "------------------------------------------------------\n";

	cout << "Enter first number ==> ";
	cin >> num1;
	cout << "Enter second number ==> ";
	cin >> num2;
	cout << "Enter third number ==> ";
	cin >> num3;	
	cout << "Enter fourth number ==>";
	cin >> num4;
	cout << "Enter fifth number ==>";
	cin >> num5;

	int lowest = num1;
	int highest = num1;

	if (num1 < lowest)
	{
		lowest = num1;
	}
	if (num2 < lowest)
	{
		lowest = num2;
	}
	if (num3 < lowest)
	{
		lowest = num3;
	}
	if (num4 < lowest)
	{
		lowest = num4;
	}
	if (num5 < lowest)
	{
		lowest = num5;
	}
	cout << "The lowest number is ==> " << lowest << endl;
	if (num1 > highest)
	{
		highest = num1;
	}
	if (num2 > highest)
	{
		highest = num2;
	}
	if (num3 > highest)
	{
		highest = num3;
	}
	if (num4 > highest)
	{
		highest = num4;
	}
	if (num5 > highest)
	{
		highest = num5;
	}
	cout << "The highest number is ==> " << highest << endl;

}