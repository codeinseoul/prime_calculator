#include <cassert>
#include <cstdlib>
#include <iostream>

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif

int is_prime(int number) {
  if (number < 0) {
    assert(0 && "the number is not a natural number");
  } else if (number == 1) {
    return 0;
  } else if (number == 2) {
    return 1;
  } else {
    for (int i = 3; i * i < number; i++) {
      if (number % i == 0) {
        return 0;
      }
    }

    return 1;
  }
}

int main() {
  std::cout << "Prime numbers between 2 and 100:" << std::endl;

  for (int number = 2; number <= 100; number++) {
    if (is_prime(number)) {
      std::cout << number << " ";
    }
  }

  std::cout << std::endl;
}

#ifdef __cplusplus
}
#endif
