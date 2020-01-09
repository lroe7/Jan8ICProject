//Lauren Roe
//This is my own work

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//part 1 
	/*cout << "Enter a number in pounds \n" << endl;
	double pounds;
	cin >> pounds;
	double convert = x * .454;
	cout << x << " pounds = " << convert << " kilograms" << endl;*/

	//part 2 
	/*cout << "Enter in the length of the side of a hexagon" << endl;
	double sideLen;
	cin >> sideLen;
	double area = ((3 * sqrt(3)) / 2) * (sideLen * sideLen);
	cout << "The area of the hexagon with side length " << sideLen << " is " << area << endl;*/

	//part 3 
	cout << "Enter in two different integers" << endl;
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;
	if (num1 > num2)
	{
		cout << num1 << " is greater" << endl;
	}
	else
	{
		cout << num2 << " is greater" << endl;
	}
	return 0;
}