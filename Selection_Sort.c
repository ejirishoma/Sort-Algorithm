#include<stdio.h>
int main(){
    int n,i,j,k,temp,lowest,lowkey;
    int A[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    
    for(i=0;i<n;i++){
        lowest=i;
        lowkey=A[i];
        for(j=i;j<n;j++){
            if(lowkey>A[j]){
                lowest=j;
                lowkey=A[j];
            }
        }
        temp=A[i];
        A[i]=A[lowest];
        A[lowest]=temp;
    }

    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    
    return 0;
}