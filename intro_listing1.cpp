#include <cstdio>
#include <iostream>

using namespace std;

constexpr int isqrt(int n) {
    int i{1};
    //cout << i << endl;
    while (i*i < n) ++i;
    
    return i - (i*i != n);
}

int main()
{
    constexpr int x = isqrt(1764);
    printf("%d\n", x);
  printf("Hello, world!");
  
int a = 42;
int & a_ref = a;
cout <<  "address of a variable " << &a << endl;
cout << "address of reference a is " << &a_ref <<endl;
cout << "value of reference a_ref is: " << a_ref << endl;
return 0;
}
