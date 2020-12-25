#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int weight;
float height;
float result;

printf("This program calculate your Body Mass Index (BMI)"); 
printf("\n Please enter your height (in meters)"); 
scanf("%f", &height); 
printf("\n Please enter your weight"); 
scanf("%d", &weight);

result = ((weight) / (height*height));

  if (result <18.5) {
  	 
	   printf(" \n Your Body Mass Index=%f ",result );
	   printf(" \n You are underweight than you should");
  	
  }

  else if( result >= 18.5 && result < 25) {
  	
  	   printf("\n Your Body Mass Index=%f ", result);
	   printf("\n Wonderful! You are in healthy weight");
  }

  else if (result >=25 && result <30){
   
       printf("\n Your Body Mass Index=%f ", result); 
	   printf("\n You are overweight than you should");
   
   }

  else if (result >= 30) { 
  
       printf("\n Your Body Mass Index=%f ",result); 
	   printf("\n You are in the obesity range. You should see a doctor.");
         
   }
	return 0;
}
