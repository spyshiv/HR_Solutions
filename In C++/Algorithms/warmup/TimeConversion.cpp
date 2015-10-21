#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main()
{   
    string s;
    cin>>s;
    int h = 0,m = 0,ss = 0;
    ss = (s[6] - '0') * 10 + s[7] - '0';
    m = (s[3] - '0') * 10 + s[4] - '0';
    h = (s[0] - '0') * 10 + s[1] - '0';
 
 
 
    if( h < 12 && s[8] == 'P'){
       h += 12;
    }
    if(h == 12 && s[8] == 'A'){
        h = 0;
    }
    if( h < 10){
    	cout<<0;
    }
	cout<<h<<':';
	if( m < 10){
		cout<<0;
	}
	cout<<m<<':';
	if( ss < 10){
		cout<<0;
	}
	cout<<ss<<endl;
    return 0;
}