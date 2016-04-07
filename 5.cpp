#include<iostream>
#include<algorithm>
using namespace std;
int a[25],b[25],c[4]={0,4,20,24};
bool d[25]={0};
int main()
{
    bool cmp(int ,int );
    void sea(int ,int );
    int m=0,j=0;
    for(int i=0;i<25;++i)
    {
        cin>>*(a+i);
        *(b+i)=*(a+i);
        if(*(a+i)>m) {m=*(a+i);j=i;}
    }
    *(a+j)=*(a+12);
    *(a+12)=m;
    sort(b,b+25,cmp);
    for(int i=0;i<4;++i)
        sea(b[i],i);
    for(int i=0;i<25;++i)
        cout<<*(a+i)<<(((i+1)%5==0)?'\n':' ');
    return 0;
}
bool cmp(int a,int b)
{
    return a<b;
}
void sea(int s,int n)
{
    bool m=0;
    int pd(int ,int );
    for(int i=0;i<25;++i)
    {
        if(*(a+i)==s && d[i]==0)
        {
            int k=*(a+*(c+n));
            *(a+*(c+n))=s;
            *(a+i)=k;
            m=1;
            d[i]=1;
            d[*(c+n)]=1;
        }
        if(m) return;
    }
}
