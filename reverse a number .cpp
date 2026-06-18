#include<iostream>
using namespaces std;
int main ()
{
  int n , digit , reverse = 0;
cout<<"enter a number : ";
cin>>n;
while ( n !=0)
{
digit = n % 10;
reverse = reverse * 10 + digit;
n = n / 10;
}
cout<<"reversed number = "<<reverse;
return 0;
}
