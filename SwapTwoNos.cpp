#include <iostream>
#include<string>
/* Swap two nos with a new varaible*/

using namespace std;

int main()
{
 
    cout << "---------------------------------------------------\n";
	int num1, num2, temp;
	cout << " Input 1st number : ";
	cin >> num1 ;
	cout << " Input 2nd number : ";
	cin >> num2;	
	temp=num1;
	num1=num2;
	num2=temp;

    cout << " After swapping the 1st number is : "<< num1 <<"\n" ; 
    cout << " After swapping the 2nd number is : "<< num2 <<"\n\n" ; 

}
