#include<stdio.h>
int main()
{
    int a,b,c,t,ans,i,d,e,ans1,ans2;
    scanf("%d",&t);
    while(t!=0){

        scanf("%d%d%d",&a,&b,&c);
        ans=0,ans1=0;ans2=0;
        if(b==0||(a==0&&c==0)){
            printf("%d\n",ans);

        }
       else {
         d=c/2;

     if(d==b)
        ans=d*3;
        else if(b<d)
        ans=b*3;
        else if(b>d)
        {
            e=(b-d)/2;

            if(e==a)
            ans=(a+d)*3;
           else if(a>e)
            ans=(e+d)*3;
           else if(e<a)
            ans=(a+d)*3;
        }
      printf("%d\n",ans);
    }

    t--;
        }


}

