#include <stdio.h>
#include "mylib.h"
int isArmstrong(int,num){
	int count,num,t,cnt,result=0,mul,rem;
	num=t;	
	while(t>0){
		t=t/10;
		count++;	
	}	
	cnt=count;
	result=0;
	t=num;	
	0
	while(t!=0){
		mul = 1;
		rem=t%10;

		while(cnt !=0){
			mul=mul*rem;
			cnt--;
		}

		t=t/10;	
		result =result+mul;
		cnt=count;
	}t=num;
	return(result==num);
	}

int isPrimePalindrome(int,N){

	int N,i,isprime , reversed=0,remainder,original;
original= N;

	for(i=2;i*i<=N;i++){
		if(N%i==0){
		 isprime = 1;
		return 0;
		}
		return 1;
	}
if(isprime = 1){

	while(N!=0){
	remainder = N%10;
	reversed = reversed*10+remainder;
	N/=10;
	}
	return 0;
}

}


int isAdam(int,num){

    int num, temp, sq, rev = 0, revNumber = 0, squareRev, rem;

    sq=num*num;

    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        revNumber = revNumber * 10 + rem;
        temp /= 10;
    }
    squareRev = revNumber*revNumber;

    temp = squareRev;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev* 10 + rem;
        temp=temp/10;
}

}
