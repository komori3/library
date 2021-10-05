#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C"

#include "../../template/template.hpp"

#include "../../lib/warshall-floyd.hpp"

int main() {
    using std::cin, std::cout, std::endl, std::ios;
    cin.tie(0);
    ios::sync_with_stdio(false);

    constexpr ll inf = INT64_MAX / 8;

    int V, E;
    cin >> V >> E;

    auto G = make_vector<ll>(inf, V, V);
    for (int u = 0; u < V; u++) {
        G[u][u] = 0;
    }
    for (int e = 0; e < E; e++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        G[u][v] = w;
    }

    WarshallFloyd<ll> wf(inf, G);
    wf.build();

    if (wf.has_negative_loop()) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (j) cout << ' ';
            if (wf.dist[i][j] == inf) cout << "INF";
            else cout << wf.dist[i][j];
        }
        cout << endl;
    }

    return 0;
}