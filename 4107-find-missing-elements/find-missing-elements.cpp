class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
    vector<int> missing;

        if (arr.empty()) return missing;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size() - 1; i++) {
            for (int num = arr[i] + 1; num < arr[i + 1]; num++) {
                missing.push_back(num);
            }
        }

        return missing;
        
    }
};