#include<stdio.h>
int main(){
    int n,i,j,k,temp,a=0,h,l;
    int A[100];
    int H[3]={4,2,1};                       //hソートの基準配列
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");

    for(k=0;k<3;k++){
        h=H[k];
        for(i=0;i<n;i++){
            for(j=i;j>0;j=j-h){
                if(A[j-h]>A[j]&&j>=h){      //A[j-h]<A[j]に変更すると昇順
                    temp=A[j];              //ここから
                    A[j]=A[j-h];
                    A[j-h]=temp;            //ここまで入れ替えプログラム
                    for(l=0;l<n;l++){
                        printf("%d ",A[l]); //入れ替えた後の配列
                    }
                    printf("\n");
                    a++;                    //何回入れ替えたかのカウンター
                }
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\nNum of replacements:%d\n",a);
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
1 4 2 5 3
1 2 4 5 3
1 2 4 3 5
1 2 3 4 5
1 2 3 4 5
Num of replacements:4
*/