#include<stdio.h>
int main()
{
    int n,i,j,r,cp,sp,d,e;
    scanf("%d",&n);//121
        for(i=n-1;i>=n-20;i--)//i=111>=111
        {
            j=i;//j=111
            r=0;//r=0
            while(j>0)//1>0
            {
                r=r*10+j%10;//r=111
                j/=10;//j=0
            }
            if(r==i)//21==120
            {
                cp=i;//cp=111
                break;
            }
        }
        for(i=n+1;i<=n+20;i++)//i=131<=131
        {
        	j=i;//j=131
            r=0;
            while(j>0)//131>0
            {
                r=r*10+j%10;//r=131
                j/=10;//j=0
            }
            if(r==i)//r==131
            {
                sp=i;//sp=131
                break;
            }
        }
        d=n-cp;//d=121-111=10
        e=sp-n;//e=131-121=10
        if(d<e)//
        {
            printf("%d",cp);
        }
        else if(d==e)
        {
            printf("%d %d",cp,sp);
        }
        else
        {
            printf("%d",sp);
        }
}
