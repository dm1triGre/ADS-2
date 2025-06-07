// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
  double result = 1.0;
  for (uint16_t i = 0; i < n; ++i) {
    result *= value;
  }
  return result;
}
uint64_t fact(uint16_t n) {
  uint64_t result = 1;
  for (uint16_t i = 1; i <= n; ++i) {
    result *= i;
  }
  return result;
}
double calcItem(double x, uint16_t n) {
  return pown(x, n) / static_cast<double>(fact(n));
}

double expn(double x, uint16_t count) {
  double result = 0.0;
  for (uint16_t n = 0; n <= count; ++n) {
    result += calcItem(x, n);
  }
  return result;
}
double sinn(double x, uint16_t count) {
  double result = 0.0;
  for (uint16_t n = 0; n < count; ++n) {
    result += (n % 2 == 0 ? 1 : -1) * calcItem(x, 2 * n + 1);
  }
  return result;
}
double cosn(double x, uint16_t count) {
  double result = 0.0;
  for (uint16_t n = 0; n < count; ++n) {
    result += (n % 2 == 0 ? 1 : -1) * calcItem(x, 2 * n);
  }
  return result;
}
