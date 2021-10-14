#include<stdio.h>
#include<iostream>
#include<list>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
int main()
{
    int ar[5]={1,3,2,6,4};
    list<int>mylist;
    if(mylist.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Filled"<<endl;
    }
    return 0;
}
