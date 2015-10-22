#include <iostream>
#include<cmath>
using namespace std;


int main() {
    int t,a,b,i,count;
    int square;
    cin>>t;
    while(t--)
        {
        cin>>a>>b;
        i=1;count=0;
        square=pow(i,2);
        while(square<=b){
            if(square<a)
                {}
            else
                count++;
            i++;
            square=pow(i,2);
        }
        cout<<count<<endl;
    }
    return 0;
}
