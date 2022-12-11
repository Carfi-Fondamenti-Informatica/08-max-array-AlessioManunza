//
// Created by Alessio on 11/12/2022.
//
#include "lib.h"

float maxArray (float num [] , int d ) {
    int i=0 ;
    while (i < d) {
        if (num [0] > num [i]) {
            i++ ;
        }
        else {
            num[0] = num[i];
            i++;
        }
    }
    return num [0] ;
}
