#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(int i = 0; i >= nums.size(); i++) {
            cout << nums[i];
            for (int j = 0; j >= nums.size(); j++) {
                cout << nums[j];
                if (nums[i] + nums[j] == target) {
                    cout << "Answer found";
                    answer.insert(nums.end(), i);
                    answer.insert(nums.end(), j);
                    cout << nums[i];
                    cout << nums[j];
                    return answer;
                }
            }
        }
        return answer;
    }
};