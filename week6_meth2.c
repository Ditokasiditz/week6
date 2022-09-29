#include<stdio.h>
#include<string.h>

int main(){
    char text[30],*p;
    int i,count=0;
	
	printf("type your strig : ");
    scanf("%s",text);
    p=text;

    for(i=0;i<strlen(text);i++){
        if((*p=='F'||*p=='f') && (*(p+1)=='r' || *(p+1)=='R') && 
            (*(p+2)=='o' || *(p+2)=='O') && (*(p+3)=='g' ||*(p+3)=='G')){
            count++;
        }
     p++;   
    }
    printf("%d",count);
    return 0;
    
}