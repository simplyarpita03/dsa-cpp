#include<iostream>
#include<climits>
using namespace std;

int main() {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int nums[]={5,15,22,1,55,24};
    int n=6;
    for(int i=0;i<n;i++) {
        if(nums[i]>largest) {
          secondLargest=largest; 
           largest = nums[i];
        }
        else if(nums[i]>secondLargest) {
            secondLargest=nums[i];
        }
    }
        cout<<"secondLargest= "<<secondLargest<<endl;
        return 0;
}
