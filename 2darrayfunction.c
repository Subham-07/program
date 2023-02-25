#include<stdio.h>

void multiply(int str1[10][10],int str2[10][10],int q,int r,int s,int t){
    str1[q][r];
    str2[s][t];
    if(r==s){
        int res[q][t];
        int i,j,k,sum;
        for(i=0;i<q;i++){
            for(j=0;j<t;j++){
                sum=0;
                for(k=0;k<r;k++){
                    sum=sum+(str1[i][k]*str2[k][j]);
                }
                res[i][j]=sum;
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Matrix multiplication not possible:");
    }
}
void store(int arr[10][10],int n,int m){
    arr[n][m];
    int i,j;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("At %d%d:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}
void display(int ar[10][10],int c,int d){
    ar[c][d];
    int i,j;
    printf("Display Elements:\n");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int x,y,a,b,i,j;
    printf("Enter the size of mat1:");
    scanf("%d %d",&x,&y);
    printf("Enter the size of mat2:");
    scanf("%d %d",&a,&b);
    int arr1[x][y];
    int arr2[a][b];
    store(arr1,x,y);
    store(arr2,a,b);
    display(arr1,x,y);
    display(arr2,a,b);
    printf("\n");
    multiply(arr1,arr2,x,y,a,b);
    printf("\n");
}