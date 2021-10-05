---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/Compress.md
    document_title: "Compress (\u5EA7\u6A19\u5727\u7E2E)"
    links: []
  bundledCode: "#line 1 \"lib/Compress.hpp\"\n/**\n * @brief Compress (\u5EA7\u6A19\
    \u5727\u7E2E)\n * @docs docs/Compress.md\n */\ntemplate<typename T>\nstruct Compress\
    \ {\n    std::vector<T> values;\n    std::map<T, int> indices;\n    Compress(const\
    \ std::vector<T>& v) {\n        std::set<T> st(v.begin(), v.end()); // unique\n\
    \        values = std::vector<T>(st.begin(), st.end());\n        for (int i =\
    \ 0; i < (int)values.size(); i++) indices[values[i]] = i;\n    }\n    T get_value(int\
    \ index) const { return values[index]; }\n    int get_index(T value) const { return\
    \ indices.at(value); }\n};\n"
  code: "/**\n * @brief Compress (\u5EA7\u6A19\u5727\u7E2E)\n * @docs docs/Compress.md\n\
    \ */\ntemplate<typename T>\nstruct Compress {\n    std::vector<T> values;\n  \
    \  std::map<T, int> indices;\n    Compress(const std::vector<T>& v) {\n      \
    \  std::set<T> st(v.begin(), v.end()); // unique\n        values = std::vector<T>(st.begin(),\
    \ st.end());\n        for (int i = 0; i < (int)values.size(); i++) indices[values[i]]\
    \ = i;\n    }\n    T get_value(int index) const { return values[index]; }\n  \
    \  int get_index(T value) const { return indices.at(value); }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: lib/Compress.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:11:22+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/Compress.hpp
layout: document
redirect_from:
- /library/lib/Compress.hpp
- /library/lib/Compress.hpp.html
title: "Compress (\u5EA7\u6A19\u5727\u7E2E)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD
