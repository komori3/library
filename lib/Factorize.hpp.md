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
  bundledCode: "#line 1 \"lib/Factorize.hpp\"\n/**\n * @brief factorize (\u7D20\u56E0\
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
  path: lib/Factorize.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:43:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/Factorize.hpp
layout: document
redirect_from:
- /library/lib/Factorize.hpp
- /library/lib/Factorize.hpp.html
title: "factorize (\u7D20\u56E0\u6570\u5206\u89E3)"
---
