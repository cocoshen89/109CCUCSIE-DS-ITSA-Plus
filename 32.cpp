//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30782
#include<string>
#include<iostream>
using namespace std;

int main()
{
    string in;
    int k;
    getline(cin,in);
    cin >> k;
    for(int i=0; i<(int)in.size(); i++)
    {
        if('a' <= in[i] && in[i] <= 'z')
        {
            in[i]=in[i]-'a'+k;
            in[i]%=26;
            in[i]+='a';

        }
        else if('A' <= in[i] && in[i] <= 'Z')
        {
            in[i]=in[i]-'A'+k;
            in[i]%=26;
            in[i]+='A';
        }
        else if('0' <= in[i] && in[i] <= '9')
        {
            in[i]=in[i]+k-'0';
            in[i]%=10;
            in[i]+='0';
        }
    }
    cout << in << endl;
    return 0;
}
