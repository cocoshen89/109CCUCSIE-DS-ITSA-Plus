//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/new_submit.php?a=658
#include<iostream>
using namespace std;

int main()
{
    int in[6];
    for(int i=0;i<6;i++)
        cin >> in[i];
    for(int i=5;i>0;i--)
        cout << in[i] << " ";
    cout << in[0] <<"\n";
    return 0;
}
