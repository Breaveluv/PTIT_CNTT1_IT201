    //
// Created by nambu on 25/06/2025.
//
#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    int age;
} Student;
int main() {
    Student student[5];
    int i,idToFind;
    int found=0;
    for(i=0;i<5;i++) {
        printf("Enter Student ID: %d", i+1);
        printf("ID:");
        scanf("%d",&student[i].id);
        getchar();
        printf("Enter Name:");
        fgets(student[i].name,sizeof(student[i].name),stdin);
        student[i].name[strlen(student[i].name)-1]='\0';
        printf("Enter Age:");
        scanf("%d",&student[i].age);
    }
    printf("Enter Student ID to find:");
    scanf("%d",&idToFind);
    for(i=0;i<5;i++) {
        if(student[i].id==idToFind) {
            printf("{Student ID: %d, name: \"%s\",age:%d } \n ,",student[i].id,student[i].name,student[i].age);

            found=1;
            break;
            }
    }
    if(!found) {
        printf("Student not found");
    }
    return 0;
}
