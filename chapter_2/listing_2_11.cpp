#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  unsigned long maximum = 0;
  unsigned long values[] = { 10, 50, 20, 40, 0 };
  for(unsigned long value : values) {
    if(value > maximum)
      maximum = value;
  }
  printf("The maximum value is %lu.\n", maximum);
  short array[] = { 104, 105, 32, 98, 105, 108, 108, 0 };
  size_t n_elements = sizeof(array) / sizeof(short);
  for(size_t i = 0; i < n_elements; i++) {
    cout << array[i] << " ";
    if (i == (n_elements -1)) cout << endl;
  }
  cout << "size of aray in bytes: " << sizeof(array) << endl;
  cout << sizeof(short) << endl;
  cout << "number of elements: " << n_elements << endl;

  return 0;
}
