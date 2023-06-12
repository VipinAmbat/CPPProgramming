#include <iostream>
#include<string>

using namespace std;

int main()
{
    
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;//using + operator
cout << fullName<<endl; 
string name1="Sigha";
string name2=" Roy";
string newName=name1.append(name2);
cout<<newName<<endl;
cout<<"Length of name 1 (Singha) entered is"<<name1.length()<<endl;
cout<<"Length of name 2 (Roy) entered is"<<name1.size()<<endl;
cout<<"Letter i is at position in Singha is"<<name1[1];
cout<<"Ways to get string input"<<endl;
string name3;
string name4;
//cout<<"Cin the name"<<endl;
//cin>>name3;
//cout<<"Name3 entered is"<<name3<<endl;
cout<<"getline the name"<<endl;
getline(cin,name4);
cout<<"Name4 entered is"<<name4;
return 0;
}