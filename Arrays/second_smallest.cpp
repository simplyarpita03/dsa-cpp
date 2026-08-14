#include<iostream>
#include<climits>
using namespace std;

int main() {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    int nums[]={5,15,22,1,55,24};
    int n=6;
    for(int i=0;i<n;i++) {
        if(nums[i]<smallest) {
          secondSmallest=smallest; 
           smallest = nums[i];
        }
        else if(nums[i]<secondSmallest) {
            secondSmallest=nums[i];
        }
    }
        cout<<"secondSmallest= "<<secondSmallest<<endl;
        return 0;
}
