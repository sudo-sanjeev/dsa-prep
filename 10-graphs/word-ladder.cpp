#include <vector>
#include <string>
#include <unordered_set>
#include <queue>

using namespace std;

class Solution {
    public:
        int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());

        if (st.find(endWord) == st.end()) return 0;

        queue<string> q;
        q.push(beginWord);

        int steps = 1;

        while (!q.empty()) {
            int sz = q.size();

            for (int i = 0; i < sz; i++) {
                string word = q.front();
                q.pop();

                if (word == endWord) return steps;

                for (int j = 0; j < word.size(); j++) {
                    string temp = word;

                    for (char c = 'a'; c <= 'z'; c++) {
                        if (temp[j] == c) continue; // 🔥 important
                        temp[j] = c;

                        if (st.find(temp) != st.end()) {
                            q.push(temp);
                            st.erase(temp); // mark visited
                        }
                    }
                }
            }
            steps++;
        }

        return 0; // 🔥 correct fallback
    }
};
