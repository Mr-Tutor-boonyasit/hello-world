#include <iostream>

using namespace std;

int main() {
for ( int i= 0; i < 10 ; i++){
	cout << "Round :  " << i+1 << endl;
}
cout << endl;
for ( int i= 0; i <= 100; i++){
	if(i%2 ==0){
		cout << i << " ";
	}
}
cout << endl;

	return 0;
}
