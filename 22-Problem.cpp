//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=41019
#include<iostream>
using namespace std;

void test(int X)
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<10;k++)
            {
                if(122*i+212*j+221*k == X)
                {
                    printf("%d %d %d\n",i,j,k);
                    return;
                }
            }
        }
    }
}

int main()
{
    int n,input;
    cin >> n;
    while(n--)
    {
        cin >> input;
        test(input);
    }
    return 0;
}
