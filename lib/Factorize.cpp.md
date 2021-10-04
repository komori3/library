---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/Factorize.md
    document_title: "Factorize (\u7D20\u56E0\u6570\u5206\u89E3)"
    links: []
  bundledCode: "#line 1 \"lib/Factorize.cpp\"\n/**\n * @brief Factorize (\u7D20\u56E0\
    \u6570\u5206\u89E3)\n * @docs docs/Factorize.md\n */\ntemplate<typename T = int>\n\
    std::map<T, T> factorize(T n) {\n    std::map<T, T> mp;\n    for (T i = 2; i *\
    \ i <= n; i++) {\n        while (!(n % i)) {\n            mp[i]++; n /= i;\n \
    \       }\n    }\n    if (n > 1) mp[n]++;\n    return mp;\n}\n"
  code: "/**\n * @brief Factorize (\u7D20\u56E0\u6570\u5206\u89E3)\n * @docs docs/Factorize.md\n\
    \ */\ntemplate<typename T = int>\nstd::map<T, T> factorize(T n) {\n    std::map<T,\
    \ T> mp;\n    for (T i = 2; i * i <= n; i++) {\n        while (!(n % i)) {\n \
    \           mp[i]++; n /= i;\n        }\n    }\n    if (n > 1) mp[n]++;\n    return\
    \ mp;\n}"
  dependsOn: []
  isVerificationFile: false
  path: lib/Factorize.cpp
  requiredBy: []
  timestamp: '2021-10-05 00:26:58+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/Factorize.cpp
layout: document
redirect_from:
- /library/lib/Factorize.cpp
- /library/lib/Factorize.cpp.html
title: "Factorize (\u7D20\u56E0\u6570\u5206\u89E3)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD