#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	//Input two strings from the user
	string str1,str2;
	cout<<"Enter the first string: ";
	cin>>str1;
	cout<<"Enter the second string: ";
	cin>>str2;
	//Check if the strings are equal
	if(str1==str2)
	{
		cout<<"The string are equal.\n";
		rotate(str2.begin(),str2.begin()+1, str2.end());
		cout<<"After rotation, the second string is: "<<str2<<"\n";
	}else{
	cout<<"The strings are not equal.\n";
	}
	return 0;
}
