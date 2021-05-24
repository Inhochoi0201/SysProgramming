#include <stdio.h>

int main(){
	char ch;
	printf("문자입력");
	while(ch != '0'){
		ch = getchar();

		if(ch >= 'A' && ch <= 'Z'){
			printf("입력한 %c의 소문자는 %c입니다\n",ch,ch+32);
		}
		else if(ch >='a' && ch <='z'){
			printf("입력한 %c의 대문자는 %c입니다\n",ch,ch-32);
		}	
		else if(ch == '0'){
			break;
		}
	}
	return 0;	
} 
