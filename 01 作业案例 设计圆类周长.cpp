#include <iostream>
using  namespace std;
const double PI=3.14;

class Circle
{
private:
    double radius;
public:
    double getRadius() const {
        return radius;
    }

    void setRadius(double radius) {
        Circle::radius = radius;
    }

    double calculateCircumference()
    {
        return PI*this->radius*2;
    }
};

void test101()
{
    Circle c1;
    c1.setRadius(10);
    cout<<"c1 的周长"<<c1.calculateCircumference()<<endl;
}

int main1() {
    test101();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}