#include<iostream>
#include<vector>

using namespace std;

vector<int> pairsum(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}


int main(){
    vector<int> nums = {4,6,7,8,2};
    vector<int> ans = pairsum(nums,9);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}