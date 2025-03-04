#include <cstdio>
#include <cstring>
#include <iostream>
#include <cwchar>

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

  char english[] = "A book holds a house of gold.";
  char16_t chinese[] = u"\u4e66\u4e2d\u81ea\u6709\u9ec4\u91d1\u5c4b";

  for(size_t i = 0; i < strlen(english); i++) {
    cout << english[i] << " ";
  }
  cout << endl;
  printf("A book holds %s\n ", english);

  /*for(size_t i = 0; i < sizeof(chinese)/sizeof(char16_t); i++) {
    wprintf(" %wchar_t",chinese[i] );
  }*/
  return 0;
}
