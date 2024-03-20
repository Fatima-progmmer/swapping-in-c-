#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "\t\tBefore swapping" << endl;
	cout << "Enter the value of a=";
	cin >>a;
	cout <<"Enter the value of b=";
	cin >>b;
	int temp=a;
	a=b;
	b=temp;
	cout << "\t\tAfter swapping"  << endl;
	cout << "The first Number is=" << a<< endl;
	cout << "The second number is=" << b;
	return 0;
}
