#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int d=2 , i=0 , n ;
    cin>> d ;
    float num [d] ;
    for (i=0 ;i<d ; i++) {
        cin >> n ;
    }
    float x = array( d , num ) ;
    cout << x << endl;
  return 0;
}
