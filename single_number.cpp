// problem:136 Given a non-empty array of integers nums, every element appears twice except for one.Find that single one.
#include<iostream>
#include<vector>// vector libray
using namespace std;
int main()
{
    // vector mai 5 elements store kiye hai
    vector<int>nums={4,1,2,1,2};
    //ans variable mai 0 store kiya hai
    int ans=0;
    //for loop mai vector k sixe tk iterate kiya
    for(int val : nums){  
        //ans mai val ko xor kiya
        ans^=val;
    }
    cout<<ans<<endl;//ans print kiya
    return 0;
}
