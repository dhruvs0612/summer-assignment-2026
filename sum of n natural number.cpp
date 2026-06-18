#include <iostream>
using namespace std;
int main ()
{
int n , NUM1, NUM2 = 0;
cout << "enter N: ";
cin >> n;
for(NUM1 = 1; NUM1 <=n; NUM1++)
{
NUM2 = NUM2+ NUM1;
}
cout << "sum = " << NUM2;
return 0;
}
