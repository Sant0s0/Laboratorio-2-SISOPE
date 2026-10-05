#include <iostream>
using namespace std;

int funcion() {
    return 0;
}

int main() {

    
    int variableStack1 = 10;
    int variableStack2 = 11;

    int* variableHeap1 = new int(20);
    int* variableHeap2 = new int(21);

    // CODE
    funcion();

    cout << endl;

    cout << "STACK" << endl;
    cout << "Valor: " << variableStack1 << endl;
    cout << "Direccion: " << &variableStack1 << endl;
    cout << "Valor: " << variableStack2 << endl;
    cout << "Direccion: " << &variableStack2 << endl;

    cout << endl;

    cout << "HEAP" << endl;
    cout << "Valor: " << *variableHeap1 << endl;
    cout << "Direccion: " << variableHeap1 << endl;
    cout << "Valor: " << *variableHeap2 << endl;
    cout << "Direccion: " << variableHeap2 << endl;

    cout << endl;

    cout << "CODE" << endl;
    cout << "Direccion de funcion: " << (void*)&funcion << endl;

    delete variableHeap1;
    delete variableHeap2;

    return 0;
}
