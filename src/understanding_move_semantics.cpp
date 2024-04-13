#include <iostream>
#include <iterator>
#include <utility>
#include <vector>

void print_array(int a[], int length_array) {
  /// Rvalues are values which are not stored in memory ,
  /// is &a a rvalue
  int *b[length_array];

  for (int i = 0; i < length_array; i++) {
    b[i] = (a + i);
    std::cout << b[i] << ", ";
  }
  std::cout << std::endl;
}

void print_vec(std::vector<int> v) {
  std::cout << "Address of Vector is " << &v << std::endl;
  std::cout << "size of Vector V is  " << sizeof(v) << std::endl;

  std::vector<int> v2{1, 2, 3, 4, 5, 6};
  std::vector<int> v3{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  std::vector<int> v4{};
  std::cout << "size of Vector v4 is  " << sizeof(v4) << std::endl;
  std::cout << "size of Vector v2 is  " << sizeof(v2) << std::endl;
  std::cout << "size of Vector v2 is  " << sizeof(v3) << std::endl;
  int a = 24;
  int *p = &a;
  std::cout << "Size of a is " << sizeof(a) << std::endl;
  std::cout << "Size of *p is " << sizeof(p) << std::endl;

  /// Vector consists of 3 integer pointers ? 1 having head, 1 having capacity
  /// and another having size?

  for (int i = 0; i < v.size(); i++) {
    std::cout << &v[i] << ", ";
  }
  std::cout << std::endl;
}

int main() {
  int a[] = {1, 2, 3, 5};
  print_array(a, 4);

  std::vector<int> b{1, 2, 3, 4};
  print_vec(b);
}
