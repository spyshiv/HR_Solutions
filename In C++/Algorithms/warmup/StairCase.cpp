#include <iostream>
using namespace std;


int main() {
    int N,i,j,k;
    cin>>N;
    for(i=N;i>0;i--)
        {
        for(k=i-1;k>0;k--)
            {
             cout<<" ";
        }
        for(j=0;j<N+1-i;j++)
            {
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}
