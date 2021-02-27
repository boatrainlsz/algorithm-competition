#include <iostream>
#include <algorithm>

int main2() {
    int A[] = {1, 3, 2};
    do {
        std::cout << A[0] << " " << A[1] << " " << A[2] << std::endl;
    } while (std::next_permutation(A, A + 3));
    return 0;
}
