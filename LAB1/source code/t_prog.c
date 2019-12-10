#include <stdlib.h>
#include <stdio.h>

void main(){

	int x=0;
	int y=0;
	int i=1;

	for(i=1;i<10001;i++){
		if(i%2 == 0){
			x += i;} ///το x παίρνει τη τιμή του αθροίσματος όλων των άρτιων αριθμών από το 1 έως το 1000
		else{
			y += i;} ///το y παίρνει τη τιμή του αθροίσατος όλων των περιττών αριθμών από το 1 έως το 100
	}
	///εκτυπώνουμε τα x,y
	printf("\nNumber x is: %d\n",x);
	printf("\nNumber y is: %d\n",y);
	return;
}
