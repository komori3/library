#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include "../../template/template.hpp"

#include "../../lib/factorize-trial-division.hpp"

int main() {
    using std::cin, std::cout, std::endl, std::ios;
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    auto factor_map = factorize(n);
    std::vector<int> factors;
    for (const auto& [factor, count] : factor_map) {
        for (int i = 0; i < count; i++) {
            factors.push_back(factor);
        }
    }
    cout << n << ':';
    for (ll factor : factors) {
        cout << ' ' << factor;
    }
    cout << '\n';

    return 0;
}