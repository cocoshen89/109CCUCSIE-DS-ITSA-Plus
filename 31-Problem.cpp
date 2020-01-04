//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50103
#include<cstdio>
using namespace std;

int main()
{
    double A[2],B[2];
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%lf %lf",&A[i],&B[i]);
    }
    printf("(%.2lf)+(%.2lf)i\n",A[0]+A[1],B[0]+B[1]);
    printf("(%.2lf)+(%.2lf)i\n",A[0]-A[1],B[0]-B[1]);
    printf("(%.2lf)+(%.2lf)i\n",A[0]*A[1]-B[0]*B[1],A[0]*B[1]+A[1]*B[0]);
    return 0;
}

