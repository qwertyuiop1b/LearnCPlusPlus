#include <string>
#include <iostream>
#include <string_view>

int main() {

  // std::string name {};
  // name = "alex";
  // std::cout << "My name is " << name << '\n';



  // std::cout << "Enter your full name: ";  // Jod Alex  return name: Jod, age: Alex;
  // std::string name {};
  // std::cin >> name;

  // std::cout << "Enter your age: ";
  // std::string age {};
  // std::cin >> age;

  // std::cout << "Your name is " << name << " and your age is " << age << '\n';





  std::cout << "Enter your full name: ";  
  std::string name {};
  std::getline(std::cin >> std::ws, name);  // std::ws 去除两边的whitespace

  std::cout << "Length of name: " << name.length() << '\n';

  int length = static_cast<int>(name.length());

  std::cout << "Enter your age: ";
  std::string age {};
  std::getline(std::cin >> std::ws, age);

  std::cout << "Your name is " << name << " and your age is " << age << '\n';

  using namespace std::literals;
  std::cout << "foo\n"s;
  std::cout << "bar\n"sv;
  // constexpr std::string otherName {"Alex"s}; // error;
  constexpr std::string_view otherName {"Alex"}; // correct;





  return 0;
}