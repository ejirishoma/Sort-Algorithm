#include<stdio.h>
int main(){
    int n,i,j,k,temp,a=0;
    int A[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");

    for(i=0;i<n;i++){//前から順番に配列を一つ一つ見ていきます。
        for(j=i;j>0;j--){//i番目の配列より前をバブルソートします。
            if(A[j-1]>A[j]){//昇順の場合はA[j-1]<A[j]に変更
                temp=A[j];//ここから
                A[j]=A[j-1];
                A[j-1]=temp;//ここまで配列の要素を入れ替えるプログラム
                for(k=0;k<n;k++){
                    printf("%d ",A[k]);//配列を表示するプログラム
                }
                printf("\n");
            }else{
                break;
                //左隣より自分の方が大きい場合それ以上見る必要が無いのでbreakします。
            }
            a++;//入れ替え処理を行ったカウンター
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
2 1 4 5 3
1 2 4 5 3
1 2 4 3 5
1 2 3 4 5
1 2 3 4 5
Num of replacements:4
*/