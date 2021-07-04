#include<stdio.h>
int main(){
    int n,i,j,k,temp;
    int A[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(A[j-1]>A[j]){
                temp=A[j];
                A[j]=A[j-1];
                A[j-1]=temp;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    
    return 0;
}

/*実行結果
5
2
4
1
5
3
2 4 1 5 3 
1 2 3 4 5
*/