#include<stdio.h> 
#define FRIEND_SIZE 5

typedef struct friendconnect{
	char name[10];
	struct friendconnect *F[5];
} Friend; 

int would_A_know_B(Friend a, Friend b){
	// would A know B function
	int i;
	for(i=0; i<FRIEND_SIZE; i++){
		if(a.F[i] == &b) return 1;
		else would_A_know_B(a.F[i], b);
	}
	
	return 0;
}

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
	
	printf("%d", would_A_know_B(friends[3], friends[5]));
}
