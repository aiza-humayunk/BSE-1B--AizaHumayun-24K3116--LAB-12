#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char str[],int l,int r){
    if(l>=r) 
		return 1;
    if(tolower(str[l])!=tolower(str[r])) 
		return 0;
    return isPalindrome(str,l+1,r-1);
}
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    if(isPalindrome(str,0,strlen(str)-1)) 
		printf("Palindrome");
    else 
		printf("Not Palindrome");
    return 0;
}

