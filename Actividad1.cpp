#include <iostream>
using namespace std;
int main(){
    int a = 10;
    cout << &a << endl;
    int* ptr = &a;
    *ptr = *ptr + 1;
    cout << *ptr << " " << ptr << endl;
}