//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754
#include<iostream>
using namespace std;

int main()
{
    int month;
    while(cin >> month)
    {
        if(3 <= month && month <= 5)
            cout << "Spring\n";
        else  if(6 <= month && month <= 8)
            cout << "Summer\n";
        else  if(9 <= month && month <= 11)
            cout << "Autumn\n";
        else
            cout << "Winter\n";
    }
    return 0;
}
