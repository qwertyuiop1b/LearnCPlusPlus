#include <iostream>

#include "Point.h"





int main() {
  /*
  Point point1(10.0, 20.0);
  point1.print_info();

  auto* point2 = new Point(30.0, 40.0);
  std::unique_ptr<Point> up_point {point2};
  delete point2; // error
  */




  // shared pointer
  /*
  std::shared_ptr<int> int_ptr1 {new int{20}};

  std::cout << "The sizeof (int*): " << sizeof(int*) << std::endl;
  std::cout << "The pointed to value is : " << *int_ptr1 << std::endl;
  std::cout << "The address of this(int_ptr1): " << &int_ptr1 << std::endl;

  *int_ptr1 = 40;
  std::cout << "The pointed to value is : " << *int_ptr1 << std::endl;
  std::cout << "Use Count: " << int_ptr1.use_count() << std::endl;


  std::shared_ptr<int> int_ptr2 = int_ptr1;
  std::cout << "The address of this(int_ptr2): " << &int_ptr2 << std::endl;
  std::cout << "The pointed to value is (through int_ptr2): " << *int_ptr2 << std::endl;
  *int_ptr2 = 70;
  std::cout << "The pointed to value is (through int_ptr2): " << *int_ptr2 << std::endl;

  std::cout << int_ptr1.use_count() << std::endl;
  std::cout << int_ptr2.use_count() << std::endl;

  std::shared_ptr<int> int_ptr3 = int_ptr2;
  std::cout << int_ptr2.use_count() << std::endl;

  int_ptr2.reset();

  std::cout << int_ptr1.use_count() << std::endl;
  std::cout << int_ptr2.use_count() << std::endl;
  */




  






  return 0;
}