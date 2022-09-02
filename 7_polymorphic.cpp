#include <iostream>
#include "7_polymorphic.h"
#include <cstring>

using namespace std;

void allTalk(Bird * birds[], int length) {
    for(int i = 0; i < length; i++) {
        birds[i]->talk();
    }
};

int main() {
    Duck b("bob");
    b.babyDucklings();
    b.talk();
    Chicken c("Mike");
    c.haveBirthday();
    c.haveBirthday();
    Eagle d("ridge");
    d.prey();

    cout << c.getAge() << endl;
    Bird *birds[3] = {&b, &c, &d};
    allTalk(birds, 3);
    //Bird birds[2] = {c,d};
    //allTalk(birds, 2);
    
    //c+ use static variable as default
    //simple and fast

    //virtual functions
    //c++ uses dynamic binding when you declare a member function as virtual
}

