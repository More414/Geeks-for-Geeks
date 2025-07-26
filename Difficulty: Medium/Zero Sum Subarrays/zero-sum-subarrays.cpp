class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int total = 0;
        unordered_map<int, int> m;
        int prefixsum = 0;

        m[0] = 1;  // Empty subarray sum = 0

        for (int i = 0; i < arr.size(); i++) {
            prefixsum += arr[i];

            if (m.count(prefixsum)) {
                total += m[prefixsum];  // Add count of previous prefixsum
            }

            m[prefixsum]++;  // Update count
        }

        return total;
    }
};
