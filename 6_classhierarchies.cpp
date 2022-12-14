//inheritance
//class hirarchies can avoid code duplication
//class chicken and duck have lots of things in common

//class Bird{}
//class Chicken : public Bird {}
#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

//Base Class
class Bird {
private:
    int age;
    string name;

public:
    Bird(const string &name_in)
        :age(0), name(name_in) {
        cout << "Bird ctor" << endl;
        }
    
    string getName() const {return name;}
    int getAge() const {return age;}

    void haveBirthday() {++age;}

    void talk() const {
        cout << "tweet" << endl;
    }
};

//Derived Class
class Chicken : public Bird {
private:
    int roadsCrossed;

public:
    Chicken(const string &name_in)
        : Bird(name_in), roadsCrossed(0) {
        cout << "Chicken ctor" << endl;
        }

    void crossRoad() {++roadsCrossed;}

    void talk() const {
        if (getAge() >=1) {
            cout << "bawwk" << endl;
        } else {
            Bird::talk();
        }
        
    }
};

class Duck : public Bird {
private:
    int numDucklings;

public:
    Duck(const string &name_in)
        : Bird(name_in), numDucklings(0) {
        cout << "Duck ctor" << endl;
        }

    void babyDucklings() {numDucklings+=7;}

    void talk() const {
        cout << "quack" << endl;
    }
};

int main() {
    Chicken qiqi("qiqi");
    qiqi.talk();
    qiqi.getAge();
}