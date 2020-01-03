//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=41018
#include<iostream>
using namespace std;

int main()
{
    int input,ans,n;
    cin >> n;
    while(n--)
    {
        cin >> input;
        for(int i=2; i<=input; i++)
        {
            if(i%3 == 0 || i%5 == 0)
                continue;
            while(input % i == 0)
            {
                input/=i;
            }
        }
        cout << input << "\n";
    }
    return 0;
}
