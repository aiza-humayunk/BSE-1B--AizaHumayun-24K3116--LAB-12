#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr,n;
    printf("Enter size for calloc: ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++) arr[i]=i+1;
    printf("Array after calloc: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    free(arr);
    printf("\nEnter new size for malloc: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) arr[i]=i*2;
    printf("Array after malloc: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    free(arr);
    return 0;
}

