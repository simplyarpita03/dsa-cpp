#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums={1,3,5,7,9,11};
    int n=nums.size();
    for(int i=0;i<n;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
