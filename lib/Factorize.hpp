/**
 * @brief factorize (素因数分解)
 * @docs docs/factorize.md
 */
template<typename T = int>
std::map<T, T> factorize(T n) {
    std::map<T, T> mp;
    for (T i = 2; i * i <= n; i++) {
        while (!(n % i)) {
            mp[i]++; n /= i;
        }
    }
    if (n > 1) mp[n]++;
    return mp;
}