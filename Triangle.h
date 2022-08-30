#include <cassert>

struct Triangle {
    double a;
    double b;
    double c;
};

void Triangle_init(Triangle* tri,
    double a, double b, double c) {
    assert(0 < a && 0 < b && 0 < c);
    assert(a + b > c && 
            b + c > a && 
            a + c > b);

        tri->a = a;
        tri->b = b;
        tri->c = c;
    }

double Triangle_perimeter(const Triangle* tri) {
    return tri->a + tri->b + tri->c;
}

void Triangle_scale(Triangle* tri1, double s) {
    tri1-> a *= s;
    tri1-> b *= s;
    tri1-> c *= s;
}