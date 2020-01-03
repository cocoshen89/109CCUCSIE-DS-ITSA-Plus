//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751
#include<iostream>
using namespace std;

int main()
{
    int nu;
    while(cin >> nu)
    {
        int longen=nu/3;
        int ans=(3+longen*3)*longen/2;
        cout << ans << "\n";
    }
    return 0;
}

