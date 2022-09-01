#include <iostream>
#include <cstring>

using namespace std;


int main() {
    char str1[6] = "hello";
    char str2[6] = "hello";
    char str3[6] = "apple";
    //char *ptr = str1; str is a value
    char &ptr = *str1; //ptr is a reference of the underlying value of str1
    char *ptr2 = str1; //ptr2 is a pointer to str1
    cout << "&str1: " << &str1 << endl; //0x20c7ffb82 address of str1
    cout << "str1: " << str1 << endl; //hello value of str1
    cout << "*str1: " << str1 << endl; //value of str1
    cout << "&ptr: " << &ptr << endl; //hello reference of underlying of str1
    cout << "ptr: " << ptr << endl; //h reference of first underlying value of str1
    cout << "*ptr2: " << *ptr2 << endl; //h dereference; first value point to str1
    ++ptr2;
    cout << "ptr2: " << ptr2 << endl; //hello dereference of second element of str1
}