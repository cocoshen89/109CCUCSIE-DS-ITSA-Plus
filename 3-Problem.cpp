//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30748
#include<iostream>
using namespace std;

int main()
{
    int start_hr,start_min;
    int left_hr,left_min;
    cin >> start_hr >> start_min;
    cin >> left_hr >> left_min;
    int total_min=0,cost=0;
    total_min+=(left_hr-start_hr)*60+(left_min-start_min);
    int hf_hr=total_min/30;
    for(int i=1;hf_hr>0;i++)
    {
        if(i <= 4)
            cost+=30;
        else if(i <=8)
            cost+=40;
        else
            cost+=60;
        hf_hr--;
    }
    cout << cost << "\n";
    return 0;
}

