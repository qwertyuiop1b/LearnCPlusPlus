#ifndef _DOG_H_
#define _DOG_H_


#include <string>
#include <iostream>



class Dog {
public:
  explicit Dog(std::string name_param);
  Dog(std::string name_param, int age_param);
  Dog() = default;
  ~Dog();

  void print_dog() const {
    std::cout << "Print dog: " << dog_name << std::endl;
  }

  std::string get_name() const {
    return dog_name;
  }

  void set_dog_name(const std::string& name) {
    dog_name = name;
  }


private:
  std::string dog_name {"Puffy"};
  int age;
};



#endif // _DOG_H_
