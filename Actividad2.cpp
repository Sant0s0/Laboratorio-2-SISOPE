#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    *ptr = 20;
    cout << *ptr << " " << ptr << endl;
    int &ref = a;
    ref = 15;
    cout << ref << " " << &ref << endl;
}