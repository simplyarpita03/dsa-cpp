#include<iostream>
#include<climits>
using namespace std;

int main() {
    int largest=INT_MIN;
    int nums[]={5,15,22,1,-15,24};
    int n=6;
    for(int i=0;i<n;i++) {
        if(nums[i]>largest) {
            largest=nums[i];
            
        }
        
    }
    cout<<"Largest Number="<<largest<<endl;
    return 0;
}
