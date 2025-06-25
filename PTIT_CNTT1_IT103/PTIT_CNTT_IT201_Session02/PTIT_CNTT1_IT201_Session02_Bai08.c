#include <stdio.h>
#include <stdlib.h>
    int main() {
        int n;
        int *arr= NULL;
        printf("Nhap so phan tu n");
        scanf("%d",&n);
        if(n<=0) {
        printf("Mang rong");
        return 0;
    }
arr=(int*)calloc(n,sizeof(int));
if(arr==NULL) {
printf("Loi cap nhap bo nho");
return 1;
}
printf("Nhap cac phan tu cua mang : \n");
for(int i =0;i<n;i++) {
printf("arr[%d]=",i);
scanf("%d",&arr[i]);
}
int *leader = NULL;
int leader_count = 0;
int max_leader = arr[n-1];
leader_count++;
leader=(int*)realloc(leader,leader_count*sizeof(int));
if(leader== NULL) {
    printf("Loi cap phat bo nho");
    free(arr);
    return 1;
}
leader[leader_count-1]=max_leader;
for(int i =n-2;i>=0;i--) {
if(arr[i]>max_leader) {
max_leader=arr[i];
leader_count++;
int *temp = (int*)realloc(leader, leader_count*sizeof(int));
if(temp== NULL) {
printf("Loi cap phat bo nho");
free(arr);
free(leader);
return 1;
}
leader= temp;
leader[leader_count-1]=max_leader;

}
}
for(int i=leader_count-1;i>=0;i--) {
printf("%d",leader[i]);
if(i>0){
printf(" ");
}
}
printf("\n");
free(arr);
free(leader);
arr=NULL;
leader=NULL;
return 0;
}
