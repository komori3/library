---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/Factorize.md
    document_title: "Factorize (\u7D20\u56E0\u6570\u5206\u89E3)"
    links: []
  bundledCode: "#line 1 \"lib/Factorize.hpp\"\n/**\n * @brief Factorize (\u7D20\u56E0\
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
  path: lib/Factorize.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:11:22+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/Factorize.hpp
layout: document
redirect_from:
- /library/lib/Factorize.hpp
- /library/lib/Factorize.hpp.html
title: "Factorize (\u7D20\u56E0\u6570\u5206\u89E3)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD