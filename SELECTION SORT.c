#include<stdio.h>
int main(){
    int arr[100],i,j,n,temp,poss;
    
    printf("ENTER THE NUMBER OF ARRAYS : ");
    scanf("%d",&n);
    
    printf("ENTER THE ARRAYS : ");
        for(i=0 ; i<n ; i++){
            scanf("%d",&arr[i]);
        }
        
    printf("BEFORE THE SELECTION SORT : ");
     for(i=0 ; i<n ; i++){
            printf("%d ",arr[i]);
        }
        
    // SELECTION SORT
        for(i=0 ; i<n-1 ; i++){
            poss = i;
           for(j=i+1 ; j<n ; j++){
            if( arr[j]<arr[poss]){
               poss = j;
        }
           }
           temp=arr[poss];
           arr[poss]=arr[i];
           arr[i]=temp;
        }
    printf("AFTER THE SELECTION SORT : ");
    for(i=0 ; i<n ; i++){
            printf("%d ",arr[i]);
        }
}
