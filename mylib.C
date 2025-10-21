#include <stdio.h>
//1st code
/*
void isArmstrong(){
	int count,num,t,cnt,result=0,mul,rem;
	num=t;
	printf("enter a number to check Armstrong\n");
	scanf("%d",&t);
//counting digits.		
	while(t>0){
		t=t/10;
		count++;	
	}	
	cnt=count;
	result=0;
	t=num;	
//	deriving last digit.
	while(t!=0){
		mul = 1;
		rem=t%10;
//multiplying digit no. of times.
		while(cnt !=0){
			mul=mul*rem;
			cnt--;
		}
//adding all the digits.
		t=t/10;	
		result =result+mul;
		cnt=count;
	}
	t=num;
	if(result == num){
		printf("this is a armstrong number");
	}
	else{
		printf("this is not armstrong");
	}
}
//2nd code
void isPrimePalindrome(){

	int N,i,isprime , reversed=0,remainder,original;
original= N;

	printf("enter a number to give Prime palindrome\n");// prime number code.
	scanf("%d",&N);
	for(i=2;i*i<=N;i++){
		if(N%i==0){
		 isprime = 1;
		break;
		}
	}
if(isprime = 1){
// palindrome code 
	while(N!=0){
	remainder = N%10;
	reversed = reversed*10+remainder;
	N/=10;
	}
}
	if(original==reversed && isprime==1){
	printf("this is a primepalindrome");	
	}
	else 
	printf("this is not a primepalindrome ");

}*/


int main(){
//	isArmstrong();
//	isPrimePalindrome();

	return 0;
}






