#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		cout << "input : " ;
		int t;
		cin >> t;
		if( t >= 100){
			cout << (t/100)*100 << endl;
		}
		if( t >= 100){
			cout << ((t%100)/10)*10 << endl;
		}
		if(t>=100){
			cout << (t%10) << endl;
		}
		
	return 0;
}
