#include<stdio.h>

// struct of friends connection
typedef struct friendconnect{
	char name[10];
	struct friendconnect *F[5];
} Friend; 

int main(){
	// the relationship of these people
	Friend friends[] = {
		{"Peter", {&friends[1], &friends[2]}},
		{"John", {&friends[0], &friends[2], &friends[3]}},
		{"Tom", {&friends[0], &friends[1], &friends[3]}},
		{"Jessica", {&friends[2], &friends[4], &friends[5]}},
		{"Jean", {&friends[3]}},
		{"Mike", {&friends[6]}},
		{"Mary", {&friends[5]}}
	};
	
	return 0;
}
