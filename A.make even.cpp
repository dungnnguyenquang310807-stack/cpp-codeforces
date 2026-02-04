#include<bits/stdc++.h>
using namespace std;
int main () { 
    int t;//the number of test cases
    cin>>t;
    while(t--) { 
        int n;
        cin>>n;
        int last=n;
        if ((last%10)%2==0) { //x%10:lấy cuối
            cout<<"0"<<endl;
            continue;//không kết thúc,chạy lại vòng lặp ngay lập tức
        }
        int first=n;
        while (first>=10) { 
            first/=10;//lấy đầu bỏ cuối 
        }
        if (first%2==0) { 
            cout<<"1"<<endl;
            continue;//không kết thúc vòng lặp chạy lại vòng lặp ngay lập tức
        }
        int temp=n;
        bool haseven=false;//dùng để giả định đúng sai
        while (temp>0) { 
            int d=temp%10;
            if (d%2==0) { 
                haseven=true;
                break;//thoát khỏi vòng lặp
            }
            temp/=10;
        }
        if (haseven) { 
            cout<<"2"<<endl;
        }
        else { 
            cout<<"-1"<<endl;
        }
    }
}