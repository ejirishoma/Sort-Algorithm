#include<stdio.h>
void print_arr(int A[],int N){
    int i;
    for(i=0;i<N;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
int b[100];
void Merge_Sort(int a[], int low,int high){
    int mid,i,j,k;
    if(low==high){
        return;
    }
    
    mid=(high+low)/2;
    Merge_Sort(a,low,mid);
    Merge_Sort(a,mid+1,high);
    for(i=mid;i>=low;i--){
        b[i]=a[i]; 
    }
    for(j=mid+1;j<=high;j++){
        b[high-(j-(mid+1))]=a[j];
    }
    i=low;
    j=high;
    for(k=low;k<=high;k++){
        if(b[i]>=b[j]){     //昇順の場合はここの符号を変更
            a[k]=b[i++];
        }else{
            a[k]=b[j--];
        }
    }
    print_arr(a,5);
}



int main(){
    int N,i;
    int A[100];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    Merge_Sort(A,0,N-1);
    
    print_arr(A, N);
    return 0;
}

/*実行例
5
2
4
1
5
3
2 4 1 5 3 
1 2 4 5 3
1 2 4 3 5
1 2 3 4 5
1 2 3 4 5
*/
/*実行例(昇順)
5
2
4
1
5
3
4 2 1 5 3 
4 2 1 5 3
4 2 1 5 3
5 4 3 2 1
5 4 3 2 1
*/