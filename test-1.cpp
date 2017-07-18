#include <iostream>

using namespace std;

int main() {
int year = 0;
string era = "";

	cout << "Enter the year :  " ;
	cin >> year ;
	cout << endl;
	cout << "Enter the year :  " ;
	cin >> era ; 
	cout << endl;
	
if(era == "BE"){
	cout << "This year is  " << year - 543 << endl;
}	
else{
	cout << "This year is  " << year + 543 << endl;
}
	return 0;
}
