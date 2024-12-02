#include <stdio.h>
int main(){
    int arr[5]={0,1,2,4,3};
    int a,exist;
    printf("Nhap vao mot phan tu bat ki: ");
    scanf("%d",&a);
    for(int i=0;i<5;i++){
        if (arr[i]==a){
            printf("phan tu co ton tai");
            exist=1;
            break;
        }
    }
    if(exist==0){
        printf("phan tu khong ton tai trong mang");
    }
}
