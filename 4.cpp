#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int str_cmp(char *,char *);
    char a[512],b[512];
    cin>>a>>b;
    cout<<str_cmp(a,b)<<endl;
    return 0;
}
int str_cmp(char *a,char *b)
{
    int i,m=strlen(a)>strlen(b)?strlen(a):strlen(b);
    for(i=0;i<=m;i++)
        if(*(a+i)!=*(b+i)) return *(a+i)-*(b+i);
    return 0;
}
