#include<stdio.h>

enum sortParameters{
    NAME,
    ROLL,
    BRANCH,
    TOTAL_MARKS
};

typedef struct Student Student;

struct Student{
    char name[255]; 
    int roll;
    char branch[10];
    int marks[3];
    int totalMarks;
};


void swapStudents(Student* s1, Student* s2){
    Student s3 = *s1;
    *s1 = *s2;
    *s2 = s3; 
}

void sortBubbleSort(Student s[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j < size-1-i; j++){
            if(s[j].totalMarks > s[j+1].totalMarks){
                swapStudents(&s[j],&s[j+1]);
            }
        }    
    }
}

void printStudentCollection(Student s[], int size){
    printf("Student Info : \n");
    for(int i=0; i<size; i++){
        printf("[%d] %s %d %d\n",i+1, s[i].name, s[i].roll, s[i].totalMarks);
    }
    printf("\n");
}

void calculateTotalMarks(Student s[], int size){
    for(int i=0; i<size; i++){
        s[i].totalMarks = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
    }
}

int main(int argc, char const *argv[])
{
    printf("%s ",argv[1]);
    Student s1 = {"Vedant",12,"ETC",{70,78,90},0};
    Student s2 = {"Diya",112,"CSE",{60,56,60},0};
    Student s3 = {"Nayan",102,"ETC",{70,70,45},0};
    Student s4 = {"Parth",132,"MECH",{48,48,47},0};
    
    Student s[] = {s1,s4,s2,s3};

    calculateTotalMarks(s,4);
    printStudentCollection(s,4);
    sortBubbleSort(s,4);
    printStudentCollection(s,4);
    
    return 0;
}
