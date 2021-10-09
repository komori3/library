/**
 * @brief modpow 
 * @docs docs/modpow.md
 */
template<typename T = int64_t>
T modpow(T n, T power, T mod) {
    T res = 1;
    while (power > 0) {
        if (power & 1) res = res * n % mod;
        power >>= 1;
        n = n * n % mod;
    }
    return res;
}