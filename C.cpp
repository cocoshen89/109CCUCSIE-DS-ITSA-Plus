//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50104
#include<cstdio>
using namespace std;

int main()
{
    int a,b,i,temp,j;
    double ans;
    scanf("%d %d",&a,&b);
    for(int i=a; i<b; i++)
    {
        if(i>=12)
        {
            temp=i-12;
        }
        else
            temp=i;
        for(j=0; j<=59; j++)
        {

            ans=j*6-temp*30-j*0.5;
            if(ans<0)
                ans=-ans;
            if(ans>180)
            {
                ans=360-ans;
            }

            if(ans>=88 && ans<=92)
            {
                if(i<10 && j<10)
                    printf("0%d:0%d degree=%.2lf\n",i,j,ans);
                else if(j==0)
                    printf("%d:0%d degree=%.2lf\n",i,j,ans);
                else if(i<10)
                    printf("0%d:%d degree=%.2lf\n",i,j,ans);
                else
                    printf("%d:%d degree=%.2lf\n",i,j,ans);
            }
        }
    }
    if(b==15 ||b==21)
    {
        printf("%d:00 degree=90.00\n",b);
    }
    else if(b==3 || b==9)
    {
        printf("0%d:00 degree=90.00\n",b);
    }
    return 0;
}

