#include<stdio.h>
#include<stdlib.h>

int* pascalTriangleRow(int rowNo){
    int *arr = (int*)malloc(rowNo*sizeof(int));
    long long res = 1;
    arr[0] = 1;
    for(int c=1;c<rowNo;c++){
        res = res * (rowNo-c);
        res = res/c;
        arr[c] = res;
    }

    return arr;
}

void pascalTriangle(int rows){
    int *arr;
    for(int i=1;i<=rows;i++){

        arr = pascalTriangleRow(i);

        for(int j=0;j<i;j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
        free(arr);
    }
}

int main(){
    int rows;
    printf("Enter the number of rows to print in the pascal triangle :- ");
    scanf("%d",&rows);

    pascalTriangle(rows);


}