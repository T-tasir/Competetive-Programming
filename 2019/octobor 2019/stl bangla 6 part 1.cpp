#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5]={5,2,1,6,3};
    sort(ar+2,ar+5);
    for(int i=0;i<5;i++){
        printf("%d\t",ar[i]);
    }
    printf("\n");
    return 0;

}
