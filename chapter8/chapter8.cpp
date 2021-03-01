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

/**
 * 判断素数
 * @param n
 * @return
 */
bool is_prime(int n) {
    if (n <= 1)return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)return false;
    }
    return true;
}

/**
 * 埃式筛法统计[2,n]中的素数个数
 * @param n
 * @return
 */
int E_sieve(int n) {
    const int MAXN = 1e7;
    int prime[MAXN + 1]
    bool not_prime[MAXN + 1]
    int k = 0;
    for (int i = 0; i <= n; ++i) {
        not_prime[i] = false;
    }
    //标记
    for (int i = 2; i * i <= n; ++i) {
        if (!not_prime[i]) {
            // 2 * i可优化为 i * i
            for (int j = 2 * i; j <= n; j += i) {
                not_prime[j] = true;
            }
        }
    }
    //统计个数
    for (int i = 2; i <= n; ++i) {
        if (!not_prime[i])prime[k++] = i;
    }
    return k;
}
