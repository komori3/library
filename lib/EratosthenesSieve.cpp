/**
 * @brief Sieve of Eratosthenes (エラトステネスの篩)
 * @docs docs/EratosthenesSieve.md
 */
template<typename T>
class EratosthenesSieve {
public:
    T size;
    std::vector<bool> p;
    EratosthenesSieve(T size) : size(size), p(size + 1, true) {
        p[0] = p[1] = false;
        for (T i = 2; i * i <= size; i++) if (p[i])
            for (T j = i * i; j <= size; j += i)
                p[j] = false;
    }
    std::vector<T> get_primes() {
        std::vector<T> ret;
        for (T i = 0; i <= size; i++)
            if (p[i]) ret.push_back(i);
        return ret;
    }
};