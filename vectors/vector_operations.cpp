#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums={1,2,3};
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.pop_back();
    for(int i=0;i<nums.size();i++){
           cout<<nums[i]<<endl;
    }
    cout<<"Element at first position= "<<nums.front()<<endl;
    cout<<"Element at last position= "<<nums.back()<<endl;
    cout<<"Size of the vector nums= "<<nums.size()<<endl;
    return 0;
}
