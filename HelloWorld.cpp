#include <iostream>
using namespace std;

void swap(int& a, int& b);

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  cout << "Hello, world!" << endl;
  int a = 1;
  int b = 2;
  int& aa = a;
  int& bb = b;
  swap(aa, bb);
  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}
