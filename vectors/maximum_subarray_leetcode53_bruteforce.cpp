#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int nums[]={-5,-2,-8};
    int n=3;
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++) {
        int currentSum=0;
        for(int end=st;end<n;end++) {
            currentSum+=nums[end];
            maxSum=max(currentSum,maxSum);
        }
    }
    cout<<"Maximum Subarray Sum= "<<maxSum<<endl;
    return 0;
}
