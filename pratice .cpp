#include <stdio.h>

int main(){
//	for(int i = 1 ; i < 20 ; i += 2){
//		printf("%d\t",i);
//	}
	
	int a = 1;
	int sum = 0;
	while (a != 0){
		scanf("%d",&a);
		if(a%2 !=0){
			sum += a;
		}
	}
		printf("%d",sum);
}

