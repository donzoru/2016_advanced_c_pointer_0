#include<iostream>
using namespace std;
int main()
{
    int t,k=0,sum=0;
    bool a[100]={0};
    cin>>t;
    if(t<=3) cout<<t<<" error"<<endl;
    else{
        for(;;){
            for(int i=0;i<t;i++){
                if(a[i]) continue;
                else k++;
                if(k==3) {a[i]=!a[i];k=0;++sum;}
                if(sum==t-1) break;
            }
            if(sum==t-1) break;
        }
        for(int i=0;i<t;i++)
            if(!a[i]) {cout<<i+1<<endl;break;}
    }
    return 0;
}
