#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n=nums.size();
        int i(0),j(n-1);
        while(i<=j){
            while(i<j && nums[i]!=val)i++;
            while(j>i && nums[j]==val)j--;
            swap(nums[i],nums[j]);
        }
        auto it=find(nums.begin(),nums.end(),val);
        return it-nums.begin();
    }
};