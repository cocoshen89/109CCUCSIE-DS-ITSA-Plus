//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1291
#include<iostream>
using namespace std;

int main()
{
    int tmp,ans=0;
    for(int i=0;i<6;i++)
    {
        cin >> tmp;
        ans+=tmp*tmp*tmp;
    }
    cout << ans << "\n";

    return 0;
}
