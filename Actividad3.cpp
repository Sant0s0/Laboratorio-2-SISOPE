#include <iostream>
using namespace std;

int main(){
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = array;
    for(int i = 0; i<10; i++){
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    *ptr = 10;
    ptr = array;
    for(int i = 0; i<10; i++){
        *ptr = *ptr + 10;
        ptr++;
    }
    ptr = array;
    for(int i = 0; i<10; i++){
        cout << *ptr << " ";
        ptr++;
    }
}