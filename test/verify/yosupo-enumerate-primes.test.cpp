#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"

#include "../../template/template.hpp"

#include "../../lib/eratosthenes-sieve.hpp"

int main() {
    using std::cin, std::cout, std::endl, std::ios;
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, A, B;
    cin >> N >> A >> B;

    auto primes = EratosthenesSieve(N).get_primes();

    int P = (int)primes.size(), X = (P - B) / A;

    cout << format("%d %d\n", P, X);
    for (int i = 0; A * i + B < (int)primes.size(); i++) {
        if (i) cout << ' ';
        cout << primes[A * i + B];
    }
    cout << '\n';

    return 0;
}