#include<bits/stdc++.h>
using namespace std;

void pair_with_difference(vector<int> nums, int target)
{
    map<int, int> index;
    for(int i = 0; i<nums.size();i++)
    {
        int complement = nums[i] - target;
        if(index.find(complement) != index.end())
        {
            cout<<complement<<" "<<nums[i]<<endl;
        }
        index[nums[i]]++;
    }
}

int main()
{
    vector<int> nums = {4,5,6,7};
    int target = 1;
    pair_with_difference(nums,target);
    return 0;
}