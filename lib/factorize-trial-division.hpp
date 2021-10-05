/**
 * @brief factorize-trial-division (試し割りによる素因数分解)
 * @docs docs/factorize-trial-division.md
 */
template<typename T = int>
std::map<T, int> factorize(T n) {
    std::map<T, int> factor_map;
    for (T i = 2; i * i <= n; i++) {
        while (!(n % i)) {
            factor_map[i]++; n /= i;
        }
    }
    if (n > 1) factor_map[n]++;
    return factor_map;
}