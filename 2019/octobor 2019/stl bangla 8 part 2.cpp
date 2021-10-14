#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<iterator>
#include<string>
using namespace std;
int main()
{
    list<int>mylist(4,-2);
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }
    printf("\n");

}
