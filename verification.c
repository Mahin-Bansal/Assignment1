//MAHIN BANSAL
//PRobability and Random variables Assignment 1
//Veification of Q 11(a)

#include<stdio.h>
int main(){
//We use a and d found and verify if using a and d we found we can get correct values of the 4th and 15 th term. 
int a = 10 ;
int d = 4 ;
int a_4 = a +3*d ;
int a_15 = a+14*d ;
printf("The 4th and 15th term of the A.P are %d and %d respectively \n", a_4,a_15);
//Now we will verify the sum of first eight terms by adding next number in the A.P in every loop.

int S_8 =0;
for(int i =0 ; i<8 ;i++){
S_8 = S_8 + a + (i)*d;
} 
//This for loop gives a + a+d + a+2*d  + a+3*d  + .... + a+7*d
printf("The sum of A.P till 8th term is %d" , S_8);

}
