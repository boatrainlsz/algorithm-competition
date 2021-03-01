//
// Created by Amy on 2021/3/1.
//


/**
 * 最大公约数
 * @param a
 * @param b
 * @return
 */
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

/**
 * 最小公倍数
 * @param a
 * @param b
 * @return
 */
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}


/**
 * 快速幂
 * @param a
 * @param n
 * @return
 */
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

/**
 * 位运算，更快
 * @param a
 * @param n
 * @return
 */
int fastPow2(int a, int n) {
    int base = a;
    int res = 1;
    while (n) {
        if (n & 1) {//二进制n的最后一位是1，表示这个地方需要乘
            res *= base;
        }
        base *= base;//a^2==>a^4==>a^8
        n >>= 1;
    }
    return res;
}
