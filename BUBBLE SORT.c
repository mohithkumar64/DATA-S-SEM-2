#include<stdio.h>
int main()
{
int arr[100],i,n,j,temp;
printf("ENTER THE ARRAY SIZE : ");
scanf("%d",&n);

printf("ENTER THE ARRAY : ");
for(i=0 ; i<n ; i++){
    scanf("%d",&arr[i]);
}

printf("BEFORE SORTING : ");
 for(i=0 ; i<n ; i++){
 printf("%d ",arr[i]);
 }
 // bubble sort
 for(i=0 ; i<n ; i++){
    for(j=0 ; j<n-i-1 ; ++){
    if(arr[j]>arr[j+i]){
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
      
    
    }
    }
}
    printf("\nAFTER SORTING :");
        for(i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
}
