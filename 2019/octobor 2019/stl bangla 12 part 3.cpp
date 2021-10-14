#include<stdio.h>
#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int ar[5]={1,3,2,6,4};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
    mylist.pop_front();
    mylist.pop_back();

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }
    cout<<"\n";
    return 0;
}
