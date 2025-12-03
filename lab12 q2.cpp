#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *str;
    int n;
    printf("Enter max string length: ");
    scanf("%d",&n);
    getchar();
    str=(char*)malloc((n+1)*sizeof(char));
    printf("Enter string: ");
    fgets(str,n+1,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n') 
		str[len-1]='\0';
    for(int i=strlen(str)-1;i>=0;i--) 
		printf("%c",str[i]);
    free(str);
    return 0;
}

