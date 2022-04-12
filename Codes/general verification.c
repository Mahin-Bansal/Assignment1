//MAHIN BANSAL
//PRobability and Random variables Assignment 1
//Veification of Q 11(a)

#include<stdio.h>
int main(){

int a ;int d ;int m ;int n ; int a_m ;int  a_n ;
printf("Enter the value of m and n\n");
scanf("%d %d", &m,&n);
printf("Enter the mth and nth number of the A.P\n");
scanf("%d %d", &a_m , &a_n);
d = ((a_m - a_n)/(m-n));
a = a_m - d*(m-1);
printf("The first term and common difference are %d and %d respectively\n",a,d );

//Now we will verify the sum of first eight terms by adding next number in the A.P in every loop.

int S_8 =0;
for(int i =0 ; i<8 ;i++){
S_8 = S_8 + a + (i)*d;
} 
//This for loop gives a + a+d + a+2*d  + a+3*d  + .... + a+7*d
printf("The sum of A.P till 8th term is %d" , S_8);


}  