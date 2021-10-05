/**
 * @brief Warshall-Floyd (ワーシャルフロイド法, 全点対最短経路, All Pair Shortest Path, APSP)
 * @docs docs/WarshallFloyd.md
 */
template<typename T>
struct WarshallFloyd {

    const T inf;
    const int V;
    vector<vector<T>> dist;
    vector<vector<int>> next;

    WarshallFloyd() = default;
    WarshallFloyd(const T& inf, const vector<vector<T>>& dist) : inf(inf), V((int)dist.size()), dist(dist), next(V, vector<int>(V)) {}
    
    void build() {
        for (int u = 0; u < V; u++) {
            for (int v = 0; v < V; v++) {
                next[u][v] = v;
            }
        }
        for (int k = 0; k < V; k++) {
            for (int i = 0; i < V; i++) {
                if (dist[i][k] == inf) continue;
                for (int j = 0; j < V; j++) {
                    if (dist[k][j] == inf) continue;
                    if (chmin(dist[i][j], dist[i][k] + dist[k][j])) {
                        next[i][j] = next[i][k];
                    }
                }
            }
        }
    }

    vector<int> get_path(int u, int v) const {
        vector<int> ret;
        for (int cur = u; cur != v; cur = next[cur][v]) {
            ret.push_back(cur);
        }
        ret.push_back(v);
        return ret;
    }

    bool has_negative_loop() const {
        for (int u = 0; u < V; u++) {
            if (dist[u][u] < 0) {
                return true;
            }
        }
        return false;
    }

};