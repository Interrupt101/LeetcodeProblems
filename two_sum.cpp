#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    
    for (int i = 0; i < nums.size(); i++) {
        if (m.count(target - nums[i])) 
            return {m[target - nums[i]], i};
        
        m[nums[i]] = i;
    }
    
    return {}; // return empty vector if no solution found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
