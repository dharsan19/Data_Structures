#include<bits/stdc++.h>
using namespace std;

void twosums(vector<int> nums, int target)
{
    map<int,int> index;
    for(int i =0; i<nums.size(); i++)
    {
        int complement = target - nums[i];
        if(index.find(complement) != index.end())
        {
            cout<<complement<<" "<<nums[i]<<endl;
        }
        index[nums[i]]++;
    }

}

int main()
{
    vector<int> nums = {1,2,3,4,5};
    int target = 9;
    twosums(nums,target);
    return 0;

}