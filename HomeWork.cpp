#include <iostream>

using namespace std;

int main() {
	int i,j;
	for ( i= 1 ; i <= 50  ; i++){
		for(j = 2; j <= i ; j++ ){
			if(i%j==0){
					break;
			}
	}
		if(i==j){
			printf("%d ",i);
		}
	}	
	return 0;
}
