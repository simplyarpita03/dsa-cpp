#include<iostream>
using namespace std;

int main() {
    int prices[]={7,1,5,3,6,4};
    int n=6;
    int maxProfit=0;
    for(int buy=0;buy<n;buy++) {
        for(int sell=buy+1;sell<n;sell++) {
            int profit=prices[sell]-prices[buy];
            maxProfit=max(maxProfit,profit);
        }
    }
    cout<<"Maximum Profit= "<<maxProfit<<endl;
    return 0;
}
