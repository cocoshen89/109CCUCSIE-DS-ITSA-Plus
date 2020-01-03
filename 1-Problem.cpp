//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    int mile;
    while(cin >> mile)
    {
        printf("%.1f\n",(double)mile*1.6);
    }
    return 0;
}
