#ifndef SMART_POINTER_POINT_H
#define SMART_POINTER_POINT_H


#include <iostream>
#include <memory>

class Point {
public:
    Point() = default;

    Point(double x_param, double y_param);

    void print_info() const;

    ~Point();
private:
    std::unique_ptr<double> x {};
    std::unique_ptr<double> y {};
};


#endif //SMART_POINTER_POINT_H
