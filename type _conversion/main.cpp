#include <iostream>
using namespace std;

int main() {
  int num_int = 9;
  double num_double;

  num_double = num_int;

  double num_double2 = 9.3;
  int num_int2;

  num_int2 = num_double2;

  cout << "num_int = " << num_int << endl;
  cout << "num_double = " << num_double << endl;
  cout << "num_int2 = " << num_int2 << endl;

  return 0;
}