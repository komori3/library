---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/factorize.md
    document_title: "factorize (\u7D20\u56E0\u6570\u5206\u89E3)"
    links: []
  bundledCode: "#line 1 \"lib/factorize.hpp\"\n/**\n * @brief factorize (\u7D20\u56E0\
    \u6570\u5206\u89E3)\n * @docs docs/factorize.md\n */\ntemplate<typename T = int>\n\
    std::map<T, T> factorize(T n) {\n    std::map<T, T> mp;\n    for (T i = 2; i *\
    \ i <= n; i++) {\n        while (!(n % i)) {\n            mp[i]++; n /= i;\n \
    \       }\n    }\n    if (n > 1) mp[n]++;\n    return mp;\n}\n"
  code: "/**\n * @brief factorize (\u7D20\u56E0\u6570\u5206\u89E3)\n * @docs docs/factorize.md\n\
    \ */\ntemplate<typename T = int>\nstd::map<T, T> factorize(T n) {\n    std::map<T,\
    \ T> mp;\n    for (T i = 2; i * i <= n; i++) {\n        while (!(n % i)) {\n \
    \           mp[i]++; n /= i;\n        }\n    }\n    if (n > 1) mp[n]++;\n    return\
    \ mp;\n}"
  dependsOn: []
  isVerificationFile: false
  path: lib/factorize.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:49:07+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/factorize.hpp
layout: document
redirect_from:
- /library/lib/factorize.hpp
- /library/lib/factorize.hpp.html
title: "factorize (\u7D20\u56E0\u6570\u5206\u89E3)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD