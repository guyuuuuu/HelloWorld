#include <iostream>
#include <cstring>

using namespace std;

int stren(const char *str){
    const char *ptr = str;
    while (*ptr != '\0'){
        cout << ptr << endl;
        ++ptr;
    }
    cout << &str << endl;
    cout << &ptr << endl; //ptr and str are both pointer which can be subtracted
    cout << typeid(ptr).name() << endl;
    cout << typeid(str).name() << endl;
    return ptr - str;
}

int main() {
    const char *str = "hello";
    cout << str << endl;
    //dont try to print a char* not pointing into a C-style string

    char str1[6] = "hello";
    char str2[6] = "hello";
    char str3[6] = "apple";
    //char *ptr = str1; str is a value
    char &ptr = *str1; //ptr is a reference of the underlying value of str1
    //test for equality

    ptr = *str3;

    cout << stren(str2) << endl;
}