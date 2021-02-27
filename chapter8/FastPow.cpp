//
// Created by Amy on 2021/2/27.
//

#include "FastPow.h"

int fastPow(int a, int n) {
    if (n == 1)return a;
    int tmp = fastPow(a, n / 2);
    if (n % 2 == 1) {
        //n是奇数
        return tmp * tmp * a;
    } else {
        return tmp * tmp;
    }
}

