//
// Created by Amy on 2020/12/18.
//

#include "permutation.h"
#include "bits/stdc++.h"
#include "ctime"

using namespace std;

#define Swap(a, b){int temp = a;a=b;b=temp;}
int data[] = {1, 2, 3, 4, 5};
int num = 0;

int Perm(int begin, int end) {
    int i;
    if (begin == end) {
        num++;
    } else {
        for (i = begin; i <= end; i++) {
            Swap(data[begin], data[i]);
//            for (int j = 0; j < sizeof(data) / sizeof(*data); ++j) {
//                cout << data[j] << " ";
//            }
            Perm(begin + 1, end);
            Swap(data[begin], data[i]);
        }
    }
}

int main() {
    clock_t start, end;
    start = clock();
    Perm(0, 4);
    end = clock();
    cout << (double) (end - start) / CLOCKS_PER_SEC << endl;
    cout << num << endl;
}
