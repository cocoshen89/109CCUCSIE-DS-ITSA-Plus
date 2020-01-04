//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30753
#include <cstdio>
using namespace std;

int main()
{
    int year;
    while(scanf("%d",&year) != EOF)
    {
        if(year%4 == 0)
        {
            if(year%400 != 0 && year%100 == 0)
                printf("Common Year\n");
            else
                printf("Bissextile Year\n");
        }
        else
            printf("Common Year\n");
    }
    return 0;
}
