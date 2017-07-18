#include <iostream>

using namespace std;

int main(){
	int tem =0; 
	string unit= "";
	cout << endl;
	cout << "Enter a temperature :  ";
	cin >> tem;
	cout << endl;
	cout << "Enter unit : ";
	cin >> unit ;
	cout << endl ;
if(unit== "f"){
	cout << "This temperature is : " << (tem*1.8)+32 << endl;
}
else{
	cout << "This temperature is : " << (tem-32)/1.8 << endl;
}
	return 0;
}
