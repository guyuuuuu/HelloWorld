#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {
    Triangle t1;
    Triangle_init(&t1, 3, 4, 11);
    cout << Triangle_perimeter(&t1) << endl;

    //    Hiding the implementation details of a data structure
    //behind a set of well defined functions (i.e. an
    //interface) makes it much easier to build scalable code
    //• Easier to change
    //• Easier to understand
    Triangle_scale(&t1, 5.6);
}