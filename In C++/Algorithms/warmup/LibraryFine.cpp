#include <iostream>
using namespace std;


int main() {
    int ad,am,ay,ed,em,ey;
    cin>>ad>>am>>ay;
    cin>>ed>>em>>ey;
	if( ey < ay){
		cout<<10000;
	}
	else if ( ey > ay){
		cout<<0;
	}
	else if ( em < am){
		cout<< (am - em) * 500;
	}
	else if( em > am){
		cout<<0;
	}
	else if( ed < ad){
		cout<< ( ad - ed) * 15;
	}
	else{
		cout<< 0;
	}
    return 0;
}