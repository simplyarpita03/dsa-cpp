#include<iostream>
using namespace std;

int main(){
    int studentMarks[]={35,45,60,75,85};
    int n=5;
    int totalMarks=0;
    for(int i=0;i<n;i++){
        totalMarks+=studentMarks[i];
    }
    cout<<"Total Marks="<<totalMarks;
    return 0;
}
