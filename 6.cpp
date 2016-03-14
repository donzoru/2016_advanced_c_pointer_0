#include<iostream>
using namespace std;
int  main()
{
    int a[100];
    cin>>*a;
    for(int i=1;i<=*a;++i)
        cin>>*(a+i);
    for(int i=*a;i>=1;--i)
        cout<<*(a+i)<<((i!=1)?' ':'\n');
    return 0;
}
