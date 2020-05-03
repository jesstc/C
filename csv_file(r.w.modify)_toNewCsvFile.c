#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a structure for student information
typedef struct student {
	char name[15];
	char phone[11];
	char score;
} Student;

// function -- change the score format
int transferScore(int score){
	if(score >= 80 && score <= 100) return 'A';
	else if(score >= 70 && score < 80) return 'B';
	else if(score >= 60 && score < 70) return 'C';
	else if(score >= 50 && score < 60) return 'D';
	else if(score >= 40 && score < 50) return 'E';
	else if(score >= 0 && score < 40) return 'F';
}

// function -- print the information of each student
void printInfo(Student a){
	printf("%s, %s, %c\n", a.name, a.phone, a.score);
}

int main(){
	// open the file
	FILE *student = fopen("students.csv", "r");
	FILE *student1 = fopen("students.csv", "r");
	FILE *newstudent = fopen("new_students.csv", "w");
	
	// check the file
	if(student == NULL){
		// file is not open
		printf("The file can not open.\n");
	}
	else{
		// file is open
		// let pointers point to the head of file
		rewind(student);
		rewind(student1);
		
		// set the variables
		Student studentinfo;
		int i=0;
		char str[30], ch;
		char *p1;
		
		// 當有下一筆資料時 
		while(fgets(str, 30, student1) != NULL){
			// 第一筆資料 
			fgets(str, 30, student);
			
			// name
			p1 = strtok(str, ",");
			strcpy(studentinfo.name, p1);
			
			// phone
			p1 = strtok(NULL, ",");			
			strcpy(studentinfo.phone, p1);
			
			// score
			p1 = strtok(NULL, ",");	
			studentinfo.score = transferScore(atoi(p1));  // atoi : pointer -> integer
			
			// print each student's information
			printInfo(studentinfo);
			
			// 把每個學生的資料輸入new_student.csv 
			fprintf(newstudent, "%s, %s, %c\n", studentinfo.name, studentinfo.phone, studentinfo.score);
		}
	}
	
	// close the file
	fclose(student);
	fclose(newstudent);
	
	return 0;
}
