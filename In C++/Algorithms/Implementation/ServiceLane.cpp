#include <iostream>
#define max 100000
using namespace std;


int main() {
    int L, T,i,j,k=0,min=0;
    int a[max];
    cin>>L>>T;
    while(L--)
        {
        cin>>a[k];
        k++;
    }
    while(T--)
        {
        cin>>i>>j;
        min=a[i];
        for(k=i;k<j;k++)
            {
            if(a[k]<min)
                min=a[k];
        }
        if(min>=3)
            cout<<3<<endl;
        else
        cout<<min<<endl;
    }
    return 0;
}