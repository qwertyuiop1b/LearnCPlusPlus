#include "dog.h"

Dog::Dog(std::string name_param): dog_name(name_param) {
  std::cout << "Constructor for dog: " << dog_name << " called." << std::endl;
}

Dog::Dog(std::string name_param, int age_param): dog_name(name_param), age(age_param) {
  std::cout << "Constructor for dog: " << dog_name << " age is " << age  << " called." << std::endl;
}

Dog::~Dog() {
  std::cout << "Destructor for dog: " << dog_name << " called" << std::endl;
}