#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<float>mylist;
    list<float>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_back(-1);
    mylist.push_front(20);


    for(it=mylist.begin();it != mylist.end();it++){
        cout<<*it<<endl;
    }
    printf("\n");
    return 0;
}
