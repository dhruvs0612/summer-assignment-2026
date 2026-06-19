#include<iostream>
using namespaces std;
int main ()
{
  int n , temp , digit , reverse = 0;
cout<<"enter a number :";
cin>>n;
temp = n;
while (n ! = 0)
{
digit = n % 10;
reverse = reverse*10 + digit;
n = n/10;
}
 if (temp ==vreverse)
   cout<<"number is palindrome ";
else
   cout<<"number is not palindrome ";
return 0;
}
