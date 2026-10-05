#include <iostream>
using namespace std;

int main(){
    int rc = 4;
    int** matriz = new int*[rc];
    for(int i = 0; i< rc; i++){
        matriz[i] = new int[rc];
    }
    int acc = 0;
    for(int **ptr = matriz; ptr != matriz+rc; ptr++){
        for(int *ptr2 = *ptr; ptr2 != *ptr+rc; ptr2++){
            *ptr2 = acc;
            acc++;
        }
    }
    for(int **ptr = matriz; ptr != matriz+rc; ptr++){
        for(int *ptr2 = *ptr; ptr2 != *ptr+rc; ptr2++){
            cout << *ptr2 << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < rc; i++) {
        delete[] matriz[i];
    }

delete[] matriz;
}