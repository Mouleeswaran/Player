#include <iostream>
using namespace std;

int main() {
	int num,fact=1;
	cout<<"Enter the number to find factorial\n";
	cin>>num;
  if(num<=20)
  {
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
	return 0;
  }
  else
  {
  cout<<"ENter value less than 21\n";}
}
