//#include <iostream>
#include "vec.hpp"
#include <cstdlib>
#include <ctime>

using namespace pomelo;
int main() {
  int i = 0;
  std::clock_t start, end;
  start = clock();
  while (i < 1e4) {
    vec4<int> v1(1, 2, 3, 1);
    vec4<int> v2(2, 5, 6, 0);
    vec4<int> v3 = v1 + v2;
    auto v4 = v3 - v1;
    auto v6 = v4 * 3;
    auto x = v6.dot(v1);
    vec4<int> v7 = x * v6;
    auto y = v6.norm();
    auto v8 = y * v7;
    v8.unit();
    ++i;
  }
  end = clock();
  std::cout << end - start << std::endl;
  return 0;
}