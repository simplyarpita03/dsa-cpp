#include<iostream>
using namespace std;

int main() {
    int items[]={3,6,5,2,9,11};
    int n=6;
    int target=9;
    for(int i=0;i<n;i++) {
        if(items[i]==target) {
            cout<<"Item Found at index= "<<i<<endl;
        }
    }
    return 0;
}
