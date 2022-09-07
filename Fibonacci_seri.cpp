#include<stdio.h>;


int main(){
	
	int number, t1=0, t2=1, nextterm, counter; 
	
printf("Enter the number of terms\n");
scanf("%d",&number);

for(counter=1; counter<=number; counter++){
	printf(" %d ",t1);
	nextterm = t1 +t2;
	t1 = t2;
	t2 = nextterm;	
} 

return 0;

} 




