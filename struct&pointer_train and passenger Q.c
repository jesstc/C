#include <stdio.h>

// define struct of passenger
typedef struct passenger{
	char name[20];
	char phone[11];
	int age;
	double balance;
	char seat[5];
} Passenger;

// define struct of car
typedef struct car{
	int car_num;
	struct passenger *P[6];
	struct car *next_car;
} Car;

// function to print passenger in each car
void listinfo(Car a[], Car *nowptr){
	// print the car number
	printf("[car%d]\n", nowptr->car_num);
	
	// print the information of passenger
	int i=0;
	for(i=0; i<6; i++){
		if(nowptr->P[i] != NULL){
			printf("%s: %s, %s, %d yo, $%f\n", nowptr->P[i]->seat, nowptr->P[i]->name, nowptr->P[i]->phone, nowptr->P[i]->age, nowptr->P[i]->balance);
		}
		else{
			break; 
		}
	}
	puts("");
}

int main(){
	// information of all passenger
	Passenger P[] = {
		{"Mike", "0912345678", 17, 198.315, "1A"},
		{"David", "0998765612", 23, 99.12, "1B"},
		{"Mary", "0911222563", 55, 883.969, "2A"},
		{"Jone", "0956765452", 80, 182.315, "3A"},
		{"Alex", "0954562583", 11, 0, "4A"},
		{"Jess", "0964561220", 34, 167.5301, "5A"},
		{"Owen", "0965913720", 45, 7530.1, "5B"},
		{"Kevin", "0945920583", 84, 715.65301, "5c"}
	};
	// information of all car
	Car c[] ={
		{1, {&P[0], &P[1]}},
		{2, {&P[2]}},
		{3, {&P[3]}},
		{4, {&P[4]}},
		{5, {&P[5], &P[6], &P[7]}}
	};
	c[0].next_car = &c[1];
	c[1].next_car = &c[2];
	c[2].next_car = &c[3];
	c[3].next_car = &c[4];
	c[4].next_car = NULL;
	
	// print the information of all passenger
	Car *nowptr = &c[0];
	while(nowptr != NULL){
		listinfo(c, nowptr);
		// car by car
		nowptr = nowptr->next_car;
	}
	
	return 0;
}
