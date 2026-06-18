#include<iostream>
using namespace std;
int main ()
{
  int n ,digit ,sum = 0;
cout<<"enter a number:";
cin >>n;
while (n !=0)
{
digit = n % 10;
sum = sum + digit ;
}
cout<<"sum of digits = "<<sum;
return 0;
}
