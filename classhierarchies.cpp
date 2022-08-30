//inheritance
//class hirarchies can avoid code duplication
//class chicken and duck have lots of things in common
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
        cout << "bawwk" << endl;
    }
};

class Duck : public Bird {
private:
    int numDucklings;

public:
    Duck(const string &name_in)
        : Bird(name_in), numDucklings(0) {
        cout << "Chicken ctor" << endl;
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
    cout << 'github develop change' << endl;
}