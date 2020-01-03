//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30766
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    while(cin >> input)
    {
        int tail;
        tail=(int)input.size()-1;
        int mark=0;
        for(int i=0;i<(int)input.size();i++)
        {
            if(input[i] != input[tail])
            {
                mark=1;
                break;
            }
            tail--;
        }
        if(mark == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
