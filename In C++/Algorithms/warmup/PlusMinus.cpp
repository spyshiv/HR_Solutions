#include <iostream>
#define max 100
using namespace std;


int main() {
    int a[max];
    int N,i,pos=0,neg=0,zero=0;
    cin>>N;
    for(i=0;i<N;i++)
        {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
        {
        if(a[i]>0)
            {
            pos+=1;
        }
        else if(a[i]==0)
            {
            zero+=1;
        }
        else{
            neg+=1;
        }
    }
    cout<<float(pos)/N<<endl;
    cout<<float(neg)/N<<endl;
    cout<<float(zero)/N<<endl;
    return 0;
}
