//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30792
#include<cstdio>
using namespace std;

int main()
{
    int h,s;
    while(scanf("%d %d",&h,&s) != EOF)
    {
        if(s == 1)
        {
            printf("%.1f\n",(double)(h-80)*0.7);
        }
        else
        {
            printf("%.1f\n",(double)(h-70)*0.6);
        }
    }
    return 0;
}
