#include<stdio.h>
#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5]={5,2,1,6,3};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
    it=find(mylist.begin(),mylist.end(),6);
    cout<<*it<<endl;
    mylist.insert(it,7);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }
    cout<<"\n";
    return 0;
}
