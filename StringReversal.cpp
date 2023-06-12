#include <iostream>
#include<string>
/* Program to reverse string*/

using namespace std;

int main()
{
 
string text="Cool";
int i;
cout<<"program to reverse the string given"<<endl;
for(i=text.length()-1;i>=0;i--)
{
    cout<<text[i];
}
}
