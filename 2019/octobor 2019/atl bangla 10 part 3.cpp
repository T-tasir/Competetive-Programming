#include<stdio.h>
#include<iostream>
#include<list>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5]={5,2,1,6,3};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
    it=find(mylist.begin(),mylist.end(),3);
    mylist.erase(it);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }
    cout<<"\n";
}
