// password all word by word check program //

#include <stdio.h>
#include <string.h>

int main(){

	char password[30];
	printf("Enter a new password: \n");
	fflush(stdout);

	gets(password);

	char again_password[30];
	printf("Enter your password again: \n");
	fflush(stdout);

	gets(again_password);

	int i,j;

	int pass_length = strlen(password);

	for(i = 0,j = 0; i < pass_length; i++,j++){
		if(password[i] == again_password[j]){
			printf("%d word matched\n", i+1);
		}else{
			printf("%d word don't matched\n", i+1);
		}
	}
	

	return 0;
}