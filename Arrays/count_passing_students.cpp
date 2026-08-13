#include<iostream>
using namespace std;

int main(){
    int studentMarks[]={35,45,60,75,85};
    int n=5;
    int count=0;
    for(int i=0;i<n;i++){
        if(studentMarks[i]>=40){
            count++;
        }
    }
    cout<<"Number of students passed="<<count;
    return 0;
}
