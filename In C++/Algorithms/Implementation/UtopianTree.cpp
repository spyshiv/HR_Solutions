#include <iostream>
using namespace std;

int main() {
    int T,i,height;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        height=1;
        for(i=0;i<n;i++)
            {
            
            if((i%2)==0)
                height*=2;
            else
                height+=1;
        }
        cout << height<< endl;
    }
}
