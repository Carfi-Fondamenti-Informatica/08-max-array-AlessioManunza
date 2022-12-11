#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int d ;
    cin >> d ;
    float num [d] ;
    for (int i=0 ; i< d ; i++){
        cin >> num[i] ;
    }
    float m=maxArray (num , d)
    cout << m << endl;
    return 0;
}
