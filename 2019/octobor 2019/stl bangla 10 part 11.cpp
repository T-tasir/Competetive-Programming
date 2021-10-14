#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    int ar[5]={5,2,1,6,3};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
    it=find(mylist.begin(),mylist.end(),3);
    if(it==mylist.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

}
