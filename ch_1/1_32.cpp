#include <iostream>

/*
Write a function to perform integer division without using either the / or *
operators.
*/

int integer_division(int numerator, int denominator) {
  int counter = 0;

  if (denominator == 1) {
    return numerator;
  }

  if (denominator == 0) {
    return -1;
  }

  while (numerator > 1) {
    numerator -= denominator;
    counter += 1;
  }

  return counter;
}

int main() {
  auto i = 7;
  auto j = 2;
  std::cout << "7 / 2 = " << integer_division(i, j) << '\n';

  i = 8;
  j = 2;
  std::cout << "8 / 2 = " << integer_division(i, j) << '\n';

  i = 0;
  j = 2;
  std::cout << "0 / 2 = " << integer_division(i, j) << '\n';

  i = 3;
  j = 1;
  std::cout << "3 / 1 = " << integer_division(i, j) << '\n';
}