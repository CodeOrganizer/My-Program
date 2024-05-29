#include<iostream>
#include<stdio.h>
using namespace std;
struct Student
{
    int roll;   //4
    char dept[10];   //10
    char name[21];   //21: 4+10+21=35 "4*8=32"<35<"4*9=36": So, it'll take 36 bytes i.e., always in multiple of 4 due to memory padding.
};
int main()
{

    struct Student CSE[10]={{211,"CSE","Munsi Rakibul Islam"}};
    struct Student Rakib;
    cout<<"Size of structure a single structure: "<<sizeof(Rakib)<<endl;
    cout<<"Size of structure array of this structure: "<<sizeof(CSE)<<endl;
    //cout<<"First student data: "<<CSE[0].roll<<","<<CSE[0].name;
    for(int x=0;x<10;x++){
        cout<<CSE[x].roll<<"  "<<CSE[x].name<<endl;
    }
    return 0;
}
