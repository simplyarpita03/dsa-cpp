#include<iostream>
#include<climits>
using namespace std;

int main() {
    int smallest=INT_MAX;
    int nums[]={5,15,22,1,-15,24};
    int n=6;
    for(int i=0;i<n;i++) {
        if(nums[i]<smallest) {
            smallest=nums[i];
            
        }
        
    }
    cout<<"Smallest Number="<<smallest<<endl;
    return 0;
}
