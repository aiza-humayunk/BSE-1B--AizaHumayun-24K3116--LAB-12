#include <stdio.h>
#include <stdlib.h>
struct Student{
    char name[50];
    int marks;
};
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct Student *s=(struct Student*)malloc(n*sizeof(struct Student));
    for(int i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
    }
    printf("Students scoring >75:\n");
    for(int i=0;i<n;i++)
        if(s[i].marks>75) 
			printf("%s %d\n",s[i].name,s[i].marks);
    free(s);
    return 0;
}

