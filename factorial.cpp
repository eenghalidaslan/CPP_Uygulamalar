#include<stdio.h>



int factorial(int n){
	if (n <= 1)
		return 1;
	return n * factorial(n-1);
}	
	

int main(){
	int number, result;
	
	printf("Enter the nonnegative number\n");	
	scanf("%d",&number);
	
	result = factorial(number);
	
	printf("%d! = %d",number, result);

return 0;

} 



/*	int number, factorial = 1, counter;
	
	printf("Enter the number\n");
	scanf("%d",&number);
	
	if(number < 0){
		printf("Cant find the factorial for negative number");
	}
	else {
			for(counter = number; counter > 0; counter-- ){
			factorial = factorial * counter;  
		}
	
	}
	printf("Factorial of the number is: %d", factorial);
	*/




