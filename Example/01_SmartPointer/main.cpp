#include <iostream>
#include <memory>
#include "dog.h"
#include "person.h"


void do_something_with_dog_v1(std::unique_ptr<Dog> d) {
  d->print_dog();
}

void do_something_with_dog_v2(const std::unique_ptr<Dog>& d) {
  d->set_dog_name("Rior");
  d->print_dog();
  // d.reset();  // const &
}


std::unique_ptr<Dog> get_unique_ptr() {
  std::unique_ptr<Dog> p_dog = std::make_unique<Dog>("Function Local");
  std::cout << "unique_ptr address(in): " << &p_dog << std::endl;
  return p_dog;
}



int main() {
  // {
  //   Dog dog_array[3] {Dog("Dog1"), Dog("Dog2"), Dog("Dog3")};
  //   for (size_t i {}; i < 3; ++i) {
  //     dog_array[i].print_dog();
  //   }
  // }

  {
    Dog* p_dog_array_raw = new Dog[3]{Dog("dog4"), Dog("dog5"), Dog("dog6")};
    for (size_t i {0}; i < 3; ++i) {
      p_dog_array_raw[i].print_dog();
    }

    // delete[] p_dog_array_raw;

  }

  {
    auto arr_ptr = std::unique_ptr<Dog[]>(new Dog[3] {
      Dog("Dog7"), Dog("Dog8"), Dog("Dog9"), // 这个不用new可以自动删

    }); 
    /*
    auto arr_ptr2 = std::unique_ptr<std::unique_ptr<Dog>[]>(
      new std::unique_ptr<Dog>[3] {
        std::make_unique<Dog>(new Dog("dog10-1")) ,
        std::make_unique<Dog>(new Dog("dog10-2")) ,
        std::make_unique<Dog>(new Dog("dog10-3")) , // 用这个智能指针包一下,变异错误
      }
    );
    */

    // for (size_t i {0}; i < 3; ++i) {
    //   arr_ptr2[i]->print_dog();
    // }

    auto arr_ptr3 = std::unique_ptr<Dog*[]>(
      new Dog*[3] {
        new Dog("Dog11"),
        new Dog("Dog12"),
        new Dog("Dog13"), // 用了new没有自动掉析构
      }
    ); // 怎么删内存，   想自动删


    for (size_t i {}; i< 3; i++) {
      arr_ptr3[i]->print_dog();
    }

    // auto arr_ptr = std::make_unique<Dog[]>(3);

  }



  return 0;
}