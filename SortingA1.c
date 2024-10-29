#include <stdio.h>
#include <conio.h>

int main(){
	
	int n1=0;
	int n2=0;
	int n3=0;
	
	printf("define 3 numbers \n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if (n1>n2) {
		if (n2>n3) {
			printf("%d>%d>%d",n1,n2,n3);
			}
			else if (n3>n1) {
			printf("%d,%d,%d",n3,n1,n2);
			}
			else {
			printf("%d>%d>%d",n1,n3,n2);
		}
	}
	else {
		if (n1>n3){
			printf("%d>%d>%d",n2,n1,n3);
			}
			else if (n3>n2){
			printf("%d>%d>%d",n3,n2,n1);
			}
			else {
			printf("%d>%d>%d",n2,n3,n1);
		}
	}
	return 0;
	getch();
}
