//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761
#include<iostream>
using namespace std;

int f(int nu)
{
    if(nu == 1 || nu == 0)
        return nu+1;
    else
        return f(nu-1)+f(nu/2);
}
int main()
{
    int nu;
    cin >> nu;
    int ans=f(nu);
    cout << ans << "\n";
    return 0;
}
