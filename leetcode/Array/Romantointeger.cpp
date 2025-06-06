int romanToInt(string s) {
    unordered_map<char, int> value = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        int curr = value[s[i]];
        int next = (i + 1 < s.length()) ? value[s[i + 1]] : 0;

        if (curr < next) {
            result -= curr;
        } else {
            result += curr;
        }
    }

    return result;
}
