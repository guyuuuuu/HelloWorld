#include <iostream>
#include <cassert>

using namespace std;

class Triangle {
private:
    double a;
    double b;
    double c;

    void check_invariants() {
        assert(0 < a && 0 < b && 0 < c);
        assert(a + b > c && 
            b + c > a && 
            a + c > b);
    }

public:
    Triangle() : a(1), b(1), c(1) {
        check_invariants();
    };

    Triangle(double side)
        : a(side), b(side), c(side) {
            check_invariants();
        };

    Triangle(double a_in, double b_in, double c_in)
        : a(a_in), b(b_in), c(c_in) {
            check_invariants();
        };

    double perimeter() const {
        return this->a + this-> b + this->c;
    }

    void scale(double s) {
        this-> a *= s;
        this-> b *= s;
        this-> c *= s;
    }
};

int main() {
    Triangle t1(3, 4, 5);
    t1.scale(2);
    cout << t1.perimeter();
}
