#include <iostream>
#include <cassert>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a  = b;
    b = temp;
    cout << &a << endl;
    cout << &temp << endl;
    cout << &b << endl;
}

void swap_p(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int *getAddress(int x){
    static int temp = x;
    return &temp;
}

void printAnInt(int someint){
    cout << someint << endl;
}

struct Person {
    int age;
    string name;
    bool isNinja;
};

int main(){
    //atomic
    //arrays
    //class-type (made up of member subobjects) struct or class

    Person Alex;

    //pass by pointer-to-const or reference-to-const
    //void func(Person const *p);
    //void func(Person const &p);

}