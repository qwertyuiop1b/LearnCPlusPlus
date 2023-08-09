#include "Point.h"


Point::Point(double x_param, double y_param) {
  x = std::move(std::make_unique<double>(x_param));
  y = std::move(std::make_unique<double>(y_param));
}

void Point::print_info() const {
  std::cout << "Point [x: " << *x << ", y: " << *y <<"]" << std::endl;
}

Point::~Point() {
  std::cout << "Point::~Point(" << *x <<", "<< *y <<") Called" << std::endl;
}