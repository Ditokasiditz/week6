#include<stdio.h>
#include<string.h>

int main(){
    int length,i,count = 0;
    char text[40];
	
	printf("type your string : ");
    scanf("%s",text);
    length = strlen(text);
 
    for(i=0;i<length-3;i++){
        if(text[i] == 'F' || text[i] == 'f'){
            if(text[i+1] == 'r' || text[i+1] == 'R'){
                if(text[i+2] == 'o' || text[i+2] == 'O'){
                    if(text[i+3] == 'g' || text[i+3] == 'G'){
                        count++;
                    }
                }
            }
        }

    }
    printf("%d",count);
    return 0;
}