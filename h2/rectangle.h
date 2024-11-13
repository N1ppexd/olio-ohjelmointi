#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width, height;
public:
    Rectangle(double width, double height);

    double getArea() const;
    double getCircum() const;
    void setWidth(double width);
    void setHeight(double height);
};

#endif // RECTANGLE_H
