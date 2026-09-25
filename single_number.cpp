#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums={4,1,2,1,2};
    int ans =0;
    for(int val : nums){
        ans ^= val;
    }
    cout << ans << endl;
    return 0;
}