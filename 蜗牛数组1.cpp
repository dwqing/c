#include<stdio.h>
int main(){
    int n;
    printf("������������");
    scanf("%d",n);
    int a[n][n],number=1,time=0,i,j;
    while(time<(n+1)/2){
        i=time;
        j=time;
        //����,n��
        for(;j<n-2*time;j++){
            a[i][j] = number;
            number++;
        }
        //���£�n-1��
        for(i=i+1;i<n-2*time;i++){
            a[i][j] = number;
            number++;
        }
        //���ң�n-1��
        for(j=j-1;j>=time;j--){
             a[i][j] = number;
            number++;
        }
        //���ϣ�n-2��
        for(i=i-1;i>time;i--){
             a[i][j] = number;
            number++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n"); 
    }
    printf("wwww%d",a[0][0]);
    return 0;

}
