#include<iostream>
using namespace std;
int main ()
{
  int n , digit ,product = 1;
cout<<'enter a number: ";
  cin>>n;
while(n != 0)
{
digit = n% 10;
product = product* digit;
n = n/10;
}
cout<<"product of digit ="<<product;
return 0;
}
