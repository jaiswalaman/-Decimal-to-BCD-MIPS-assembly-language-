//GROUPID-11 (17114008_17114010) AMAN JAISWAL & AMIT VISHWAKARMA
//DATE 28 OCTOBER 2018
//dec2BCD.c file used for converting a integer N to BINARY CODED DECIMAL
#include<stdio.h>
#include<string.h>
int main(){
	char num[11];
	char bcd[45];
	int len;
	char dig;
scanf("%s", num);
len=strlen(num);
bcd[0]='\0';
	int i=0;
for( ;i<len;i++){
	dig =num[i];
    switch(dig){
        case '0':
      		strcat(bcd,"0000 ");
              break;
        case '1':
			strcat(bcd,"0001 ");
            break;
        case '2':
            strcat(bcd,"0010 ");
            break;
        case '3':
        	strcat(bcd,"0011 ");
            break;
        case '4':
        	strcat(bcd,"0100 ");
            break;
        case '5':
 			strcat(bcd,"0101 ");
            break;
        case '6':
 			strcat(bcd,"0110 ");
            break;
        case '7':
			strcat(bcd,"0111 ");
            break;
        case '8':
 			strcat(bcd,"1000 ");
            break;
        case '9':
  			strcat(bcd,"1001 ");
            break;
        default:
            strcat(bcd,dig);
            break;
}
}
printf("%s\n", bcd);
	return 0;
}
