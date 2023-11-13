#include <stdio.h>
#include <stdlib.h>

int main(){
	do{
		printf("********** MENU ********** \n");
		printf("1. Pho bo kobe");
		printf("2. Pho ga");
		printf("3. Boba tea");
		printf("4 . Thoat");
		int choice;scanf("%d", &choice);
		printf("vui long lua chon : ");
		switch(choice){
			case 1:
				printf("ban da chon pho bo kobe");
				break;
			case 2:
				printf("ban da chon pho ga");
				break;
			case 3:
				printf("ban da chon boba tea");
				break;
			case 4:
				exit(0);
			default:
				printf("vui long chon lai");
		}
	}while(1 == 1);
}
