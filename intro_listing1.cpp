#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>
#include <memory>
#include <utility>
#include <tuple>
#include <map>
#include <set>

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
  
int a = 99;
int & a_ref = a;
cout <<  "address of a variable " << &a << endl;
cout << "address of reference a is " << &a_ref <<endl;
cout << "value of reference a_ref is: " << a_ref << endl;

std::vector<int> v{0,1,8,13,5,2,3}; // vector of ints
v[0] = 21;  // assign 21 to the first element
v.push_back(1);
std::sort(v.begin(), v.end());
std::cout << "vector size: " << v.size() << std::endl;
std::cout << "vector capacity: " << v.capacity() << std::endl;
std::cout << "vector max_size: " << v.max_size() << std::endl;
std::cout << "vector empty: " << v.empty() << std::endl;
std::cout << "vector front: " << v.front() << std::endl;
std::cout << "vector back: " << v.back() << std::endl;
std::cout << "vector data: " << v.data() << std::endl;

for(auto number : v)
{
    std::cout << number << std::endl;
}




std::vector<int>::iterator it = v.begin(); // iterator to the beginning of the vector
std::vector<int>::iterator it_end = v.end(); // iterator to the end of the vector

return 0;
}
