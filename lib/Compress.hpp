/**
 * @brief compress (座標圧縮)
 * @docs docs/compress.md
 */
template<typename T>
struct Compress {
    std::vector<T> values;
    std::map<T, int> indices;
    Compress(const std::vector<T>& v) {
        std::set<T> st(v.begin(), v.end()); // unique
        values = std::vector<T>(st.begin(), st.end());
        for (int i = 0; i < (int)values.size(); i++) indices[values[i]] = i;
    }
    T get_value(int index) const { return values[index]; }
    int get_index(T value) const { return indices.at(value); }
};
