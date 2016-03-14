#include<iostream>
using namespace std;
int main()
{
    char a[12][10]={"January","February","March","April", "May","June","July",
                  "August","September","October", "November","December"};
    int t;
    cin>>t;
    cout<<a[t-1]<<endl;
    return 0;
}
