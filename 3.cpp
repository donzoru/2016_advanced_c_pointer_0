#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    int t=1;
    cin.get(a,100);
    for(int i=0;i<strlen(a);i++){
        if(*(a+i)>='0' && *(a+i)<='9') {cout<<*(a+i);t=1;}
        else if(t) {cout<<' ';t=0;}
    }
    cout<<endl;
    return 0;
}
