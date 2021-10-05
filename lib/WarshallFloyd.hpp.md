---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/verify/aoj-grl-1-c.test.cpp
    title: test/verify/aoj-grl-1-c.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/WarshallFloyd.md
    document_title: "Warshall-Floyd (\u30EF\u30FC\u30B7\u30E3\u30EB\u30D5\u30ED\u30A4\
      \u30C9\u6CD5, \u5168\u70B9\u5BFE\u6700\u77ED\u7D4C\u8DEF, All Pair Shortest\
      \ Path, APSP)"
    links: []
  bundledCode: "#line 1 \"lib/WarshallFloyd.hpp\"\n/**\n * @brief Warshall-Floyd (\u30EF\
    \u30FC\u30B7\u30E3\u30EB\u30D5\u30ED\u30A4\u30C9\u6CD5, \u5168\u70B9\u5BFE\u6700\
    \u77ED\u7D4C\u8DEF, All Pair Shortest Path, APSP)\n * @docs docs/WarshallFloyd.md\n\
    \ */\ntemplate<typename T>\nstruct WarshallFloyd {\n\n    const T inf;\n    const\
    \ int V;\n    vector<vector<T>> dist;\n    vector<vector<int>> next;\n\n    WarshallFloyd()\
    \ = default;\n    WarshallFloyd(const T& inf, const vector<vector<T>>& dist) :\
    \ inf(inf), V((int)dist.size()), dist(dist), next(V, vector<int>(V)) {}\n    \n\
    \    void build() {\n        for (int u = 0; u < V; u++) {\n            for (int\
    \ v = 0; v < V; v++) {\n                next[u][v] = v;\n            }\n     \
    \   }\n        for (int k = 0; k < V; k++) {\n            for (int i = 0; i <\
    \ V; i++) {\n                if (dist[i][k] == inf) continue;\n              \
    \  for (int j = 0; j < V; j++) {\n                    if (dist[k][j] == inf) continue;\n\
    \                    if (chmin(dist[i][j], dist[i][k] + dist[k][j])) {\n     \
    \                   next[i][j] = next[i][k];\n                    }\n        \
    \        }\n            }\n        }\n    }\n\n    vector<int> get_path(int u,\
    \ int v) const {\n        vector<int> ret;\n        for (int cur = u; cur != v;\
    \ cur = next[cur][v]) {\n            ret.push_back(cur);\n        }\n        ret.push_back(v);\n\
    \        return ret;\n    }\n\n    bool has_negative_loop() const {\n        for\
    \ (int u = 0; u < V; u++) {\n            if (dist[u][u] < 0) {\n             \
    \   return true;\n            }\n        }\n        return false;\n    }\n\n};\n"
  code: "/**\n * @brief Warshall-Floyd (\u30EF\u30FC\u30B7\u30E3\u30EB\u30D5\u30ED\
    \u30A4\u30C9\u6CD5, \u5168\u70B9\u5BFE\u6700\u77ED\u7D4C\u8DEF, All Pair Shortest\
    \ Path, APSP)\n * @docs docs/WarshallFloyd.md\n */\ntemplate<typename T>\nstruct\
    \ WarshallFloyd {\n\n    const T inf;\n    const int V;\n    vector<vector<T>>\
    \ dist;\n    vector<vector<int>> next;\n\n    WarshallFloyd() = default;\n   \
    \ WarshallFloyd(const T& inf, const vector<vector<T>>& dist) : inf(inf), V((int)dist.size()),\
    \ dist(dist), next(V, vector<int>(V)) {}\n    \n    void build() {\n        for\
    \ (int u = 0; u < V; u++) {\n            for (int v = 0; v < V; v++) {\n     \
    \           next[u][v] = v;\n            }\n        }\n        for (int k = 0;\
    \ k < V; k++) {\n            for (int i = 0; i < V; i++) {\n                if\
    \ (dist[i][k] == inf) continue;\n                for (int j = 0; j < V; j++) {\n\
    \                    if (dist[k][j] == inf) continue;\n                    if\
    \ (chmin(dist[i][j], dist[i][k] + dist[k][j])) {\n                        next[i][j]\
    \ = next[i][k];\n                    }\n                }\n            }\n   \
    \     }\n    }\n\n    vector<int> get_path(int u, int v) const {\n        vector<int>\
    \ ret;\n        for (int cur = u; cur != v; cur = next[cur][v]) {\n          \
    \  ret.push_back(cur);\n        }\n        ret.push_back(v);\n        return ret;\n\
    \    }\n\n    bool has_negative_loop() const {\n        for (int u = 0; u < V;\
    \ u++) {\n            if (dist[u][u] < 0) {\n                return true;\n  \
    \          }\n        }\n        return false;\n    }\n\n};"
  dependsOn: []
  isVerificationFile: false
  path: lib/WarshallFloyd.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:11:22+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/verify/aoj-grl-1-c.test.cpp
documentation_of: lib/WarshallFloyd.hpp
layout: document
redirect_from:
- /library/lib/WarshallFloyd.hpp
- /library/lib/WarshallFloyd.hpp.html
title: "Warshall-Floyd (\u30EF\u30FC\u30B7\u30E3\u30EB\u30D5\u30ED\u30A4\u30C9\u6CD5\
  , \u5168\u70B9\u5BFE\u6700\u77ED\u7D4C\u8DEF, All Pair Shortest Path, APSP)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD