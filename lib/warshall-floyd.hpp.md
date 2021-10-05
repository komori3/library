---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/warshall-floyd.md
    document_title: "Warshall-Floyd (\u30EF\u30FC\u30B7\u30E3\u30EB\u30D5\u30ED\u30A4\
      \u30C9\u6CD5, \u5168\u70B9\u5BFE\u6700\u77ED\u7D4C\u8DEF, All Pair Shortest\
      \ Path, APSP)"
    links: []
  bundledCode: "#line 1 \"lib/warshall-floyd.hpp\"\n/**\n * @brief Warshall-Floyd\
    \ (\u30EF\u30FC\u30B7\u30E3\u30EB\u30D5\u30ED\u30A4\u30C9\u6CD5, \u5168\u70B9\u5BFE\
    \u6700\u77ED\u7D4C\u8DEF, All Pair Shortest Path, APSP)\n * @docs docs/warshall-floyd.md\n\
    \ */\ntemplate<typename T>\nstruct WarshallFloyd {\n\n    const T inf;\n    const\
    \ int V;\n    std::vector<std::vector<T>> dist;\n    std::vector<std::vector<int>>\
    \ next;\n\n    WarshallFloyd() = default;\n    WarshallFloyd(const T& inf, const\
    \ std::vector<std::vector<T>>& dist) : inf(inf), V((int)dist.size()), dist(dist),\
    \ next(V, std::vector<int>(V)) {}\n    \n    void build() {\n        for (int\
    \ u = 0; u < V; u++) {\n            for (int v = 0; v < V; v++) {\n          \
    \      next[u][v] = v;\n            }\n        }\n        for (int k = 0; k <\
    \ V; k++) {\n            for (int i = 0; i < V; i++) {\n                if (dist[i][k]\
    \ == inf) continue;\n                for (int j = 0; j < V; j++) {\n         \
    \           if (dist[k][j] == inf) continue;\n                    if (chmin(dist[i][j],\
    \ dist[i][k] + dist[k][j])) {\n                        next[i][j] = next[i][k];\n\
    \                    }\n                }\n            }\n        }\n    }\n\n\
    \    std::vector<int> get_path(int u, int v) const {\n        std::vector<int>\
    \ ret;\n        for (int cur = u; cur != v; cur = next[cur][v]) {\n          \
    \  ret.push_back(cur);\n        }\n        ret.push_back(v);\n        return ret;\n\
    \    }\n\n    bool has_negative_loop() const {\n        for (int u = 0; u < V;\
    \ u++) {\n            if (dist[u][u] < 0) {\n                return true;\n  \
    \          }\n        }\n        return false;\n    }\n\n};\n"
  code: "/**\n * @brief Warshall-Floyd (\u30EF\u30FC\u30B7\u30E3\u30EB\u30D5\u30ED\
    \u30A4\u30C9\u6CD5, \u5168\u70B9\u5BFE\u6700\u77ED\u7D4C\u8DEF, All Pair Shortest\
    \ Path, APSP)\n * @docs docs/warshall-floyd.md\n */\ntemplate<typename T>\nstruct\
    \ WarshallFloyd {\n\n    const T inf;\n    const int V;\n    std::vector<std::vector<T>>\
    \ dist;\n    std::vector<std::vector<int>> next;\n\n    WarshallFloyd() = default;\n\
    \    WarshallFloyd(const T& inf, const std::vector<std::vector<T>>& dist) : inf(inf),\
    \ V((int)dist.size()), dist(dist), next(V, std::vector<int>(V)) {}\n    \n   \
    \ void build() {\n        for (int u = 0; u < V; u++) {\n            for (int\
    \ v = 0; v < V; v++) {\n                next[u][v] = v;\n            }\n     \
    \   }\n        for (int k = 0; k < V; k++) {\n            for (int i = 0; i <\
    \ V; i++) {\n                if (dist[i][k] == inf) continue;\n              \
    \  for (int j = 0; j < V; j++) {\n                    if (dist[k][j] == inf) continue;\n\
    \                    if (chmin(dist[i][j], dist[i][k] + dist[k][j])) {\n     \
    \                   next[i][j] = next[i][k];\n                    }\n        \
    \        }\n            }\n        }\n    }\n\n    std::vector<int> get_path(int\
    \ u, int v) const {\n        std::vector<int> ret;\n        for (int cur = u;\
    \ cur != v; cur = next[cur][v]) {\n            ret.push_back(cur);\n        }\n\
    \        ret.push_back(v);\n        return ret;\n    }\n\n    bool has_negative_loop()\
    \ const {\n        for (int u = 0; u < V; u++) {\n            if (dist[u][u] <\
    \ 0) {\n                return true;\n            }\n        }\n        return\
    \ false;\n    }\n\n};"
  dependsOn: []
  isVerificationFile: false
  path: lib/warshall-floyd.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:43:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/warshall-floyd.hpp
layout: document
redirect_from:
- /library/lib/warshall-floyd.hpp
- /library/lib/warshall-floyd.hpp.html
title: "Warshall-Floyd (\u30EF\u30FC\u30B7\u30E3\u30EB\u30D5\u30ED\u30A4\u30C9\u6CD5\
  , \u5168\u70B9\u5BFE\u6700\u77ED\u7D4C\u8DEF, All Pair Shortest Path, APSP)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD