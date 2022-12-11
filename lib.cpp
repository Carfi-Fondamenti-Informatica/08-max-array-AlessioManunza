//
// Created by Alessio on 11/12/2022.
//
#include "lib.h"

float array (int d , float num[d]) {
    int i=1;
    while (i < d) {
        if (num [0] > num [i]) {
            i++ ;
        }
        else {
            num[0]=num[i] ;
            i++ ;
        }
    }
    return num [0] ;
}
