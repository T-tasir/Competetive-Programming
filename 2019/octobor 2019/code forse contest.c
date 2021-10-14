#include<stdio.h>
int main()
{
    int t;
    long long a,ans,i,rem;
    scanf("%d",&t);
       for(i=0;i<t;i++){
       a=0;
       rem=0;
       ans=0;
    scanf("%lld",&a);
          if(a<4)
           ans=a%4;
        else{
            rem=a%4;
            if(rem!=0)
            ans=4-rem;
            else
                ans=0;

        }
      printf("%lld\n",ans);



    }

    return 0;

}
