
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        unordered_set<int> counts;

        for (auto& entry : freq) {
            if (counts.count(entry.second)) {
                return false;
            }

            counts.insert(entry.second);
        }

        return true;
    }
};
