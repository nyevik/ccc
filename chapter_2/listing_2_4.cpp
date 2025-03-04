#include <cstdio>
#include <cstddef>
#include <iostream>
#include <cassert>
#include <utility>
#include <cstddef>
#include <bitset>

using namespace std;
std::ostream& operator<<(std::ostream& os, std::byte b)
{
  return os << std::bitset<8>(std::to_integer<int>(b));
}
int main() {
  char x = 'M';
  wchar_t y = L'Z';
  printf("Windows binaries start with %c%lc.\n", x, y);
  std::byte b {42};
  //assert(to_int(b) == 0b00101010);
  cout << b  << endl;

}
