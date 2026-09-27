//problem 137 given a non empty array of integers nums, every element appears three times except for one.find that single one.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector mai 7 elements store kiye hai
    vector<int>nums= {2,2,2,1,3,3,3};
    int k;
    //final answer ko store karne k liye result varisble mai 0 store kiya
    int result=0;
    //for loop har bit positition 0 s 31 tk check karne k lie
    for(int k=0;k<=31;k++){
        //temp varisble ko 1 left shift k times kia taaki us bit position ko check kia jaa sake
        int temp=(1<<k);
        // current bit position mai kitne 1s hai usko count karne k liye countones mai 0 store kia
        int countones=0;
        //mums k har ekk number ko ekk ekk baar chrck karenge
        for(int num:nums ){
            //and operation k through check karenge ki current bit position mai 1 hai ya 0
            if((num&temp)!=0){
                //agar 1 hai toh countones ko oncrement karenge
                countones++;
            }
           }
           //agar countones ko 3 se divide karke remainder 1 hai toh current bit single number ki h
        if(countones%3==1){
            //agar current bit single number li hai toh result mai us bit ko set karenge
            result=(result|temp);
        }
    }
        cout<< result;
        return 0;
    }