#include <stdio.h>

int paration(int a[], int l, int r) {
    int i, j, pivot, t, k;

    i = l - 1;
    j = r;

    pivot = a[r];
    for(;;) { 
        while(a[++i] < pivot)
        ;
        while(i < --j && pivot < a[j])
        ;
        if(i >= j)
        break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        for(k = l;k <= r ;k++) { 
            printf("%d ", a[k]);
        }
        printf("\n");
    }
        t = a[i];
        a[i] = a[r];
        a[r] = t;
        for(k = l;k <= r ;k++) { 
            printf("%d ", a[k]);
        }
        printf("\n");
        return i;
    
}

void quick_sort_1(int a[], int l, int r) {
    int v,i;
    if(l >= r)
    return;

    v = paration(a, l, r);
    
    quick_sort_1(a, l, v-1);
    quick_sort_1(a, v+1, r);
}


void quick_sort(int a[], int n) {
    quick_sort_1(a, 0, n-1);
}

int main(){
    int N,i;
    int A[100];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    quick_sort(A,N);
    printf("Sorted Array:");
    for(i = 0;i < N ;i++) { 
        printf("%d ", A[i]);
    }
    printf("\n");

    
    return 0;
}
/*実験結果
5
2
4
1
5
3
2 1 4 5 3 
2 1 3 5 4
1 2
4 5
Sorted Array:1 2 3 4 5
*/