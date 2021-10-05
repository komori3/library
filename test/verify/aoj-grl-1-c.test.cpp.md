---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.7/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.7/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.7/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.7/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../template/template.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C\"\
    \n\n#include \"../../template/template.hpp\"\n\n#include \"../../lib/warshall-floyd.hpp\"\
    \n\nint main() {\n    using std::cin, std::cout, std::endl, std::ios;\n    cin.tie(0);\n\
    \    ios::sync_with_stdio(false);\n\n    constexpr ll inf = INT64_MAX / 8;\n\n\
    \    int V, E;\n    cin >> V >> E;\n\n    auto G = make_vector<ll>(inf, V, V);\n\
    \    for (int u = 0; u < V; u++) {\n        G[u][u] = 0;\n    }\n    for (int\
    \ e = 0; e < E; e++) {\n        int u, v;\n        ll w;\n        cin >> u >>\
    \ v >> w;\n        G[u][v] = w;\n    }\n\n    WarshallFloyd<ll> wf(inf, G);\n\
    \    wf.build();\n\n    if (wf.has_negative_loop()) {\n        cout << \"NEGATIVE\
    \ CYCLE\" << endl;\n        return 0;\n    }\n\n    for (int i = 0; i < V; i++)\
    \ {\n        for (int j = 0; j < V; j++) {\n            if (j) cout << ' ';\n\
    \            if (wf.dist[i][j] == inf) cout << \"INF\";\n            else cout\
    \ << wf.dist[i][j];\n        }\n        cout << endl;\n    }\n\n    return 0;\n\
    }"
  dependsOn: []
  isVerificationFile: true
  path: test/verify/aoj-grl-1-c.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/verify/aoj-grl-1-c.test.cpp
layout: document
redirect_from:
- /verify/test/verify/aoj-grl-1-c.test.cpp
- /verify/test/verify/aoj-grl-1-c.test.cpp.html
title: test/verify/aoj-grl-1-c.test.cpp
---
