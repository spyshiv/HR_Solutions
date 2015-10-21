#include <iostream>
#define max 1000
using namespace std;


int main() {
    int sum=0,i,t;
    int a[max];
    cin>>t;
    for(i=0;i<t;i++)
        {
        cin>>a[i];
        
    }
    for(i=0;i<t;i++)
        {
        sum=sum+a[i];
        
    }
    cout<<sum;
    return 0;
}
