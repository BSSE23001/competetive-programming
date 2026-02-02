#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> nmap;
    for(int i=0;i < nums.size();++i) {
        int c = target - nums[i];
        if(nmap.find(c) != nmap.end()) {
            return {nmap[c], i};
        }
        nmap[nums[i]] = i;
    }
    return {};
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {2,7,11,15};
    auto v = twoSum(nums,9);
    cout << v[0] << " " << v[1];
    return 0;
}
