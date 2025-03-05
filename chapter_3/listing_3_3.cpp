#include <cstdio>
#include <iostream>

using namespace std;

class ClockOfTheLongNow {
public:
  explicit ClockOfTheLongNow(int year_in) {
    if (!set_year(year_in)) {
      year = 2019;
    }
  }

  /** overriding default constructor */
  ClockOfTheLongNow() {
    this->year = 2019;
  }

  void add_year() {
    year++;
  }

  bool set_year(int new_year) {
    if (new_year < 2019)
      return false;
    year = new_year;
    return true;
  }

  [[nodiscard]] int get_year() const {
    return year;
  }

private:
  int year;
}; // end class Clock

int main() {
  /** on stack*/
  ClockOfTheLongNow clock;
  ClockOfTheLongNow *clock_ptr = &clock;
  clock_ptr->set_year(2020);
  printf("Address of clock: %p\n", clock_ptr);
  printf("Value of clock's year: %d", clock_ptr->get_year());
  (*clock_ptr).add_year();
  cout << "\nValue of clock's year: " << clock_ptr->get_year() << endl;

  ClockOfTheLongNow *clock2_ptr = new ClockOfTheLongNow(2025);
  printf("Address of clock2: %p\n", clock2_ptr);
  printf("Value of clock2's year: %d", clock2_ptr->get_year());
  delete clock2_ptr;
  return 0;
}
