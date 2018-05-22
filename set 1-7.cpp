#include <iostream>
using namespace std;

int main() {
	char str[50];
	int i,j,temp;
	cout<<"Enter the string\n";
	cin>>str;
	i=0;
	j=i+1;
	while (str[j]!='\0')
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i+=2;
		j=i+1;
	}
	cout<<str;
	return 0;
}
