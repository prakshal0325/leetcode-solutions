class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> set;

        for (char ch : s) {
            if (set.count(ch)) {
                return ch;
            }
            set.insert(ch);
        }

        return '\0';
    }
};