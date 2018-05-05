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
	struct passenger *P1;
	struct passenger *P2;
	struct passenger *P3;
	struct passenger *P4;
	struct passenger *P5;
	struct passenger *P6;
} Car;

// function to print passenger in each car
void listinfo(Car a[5], int count_c){
	// print the car number
	printf("[car%d]\n", a[count_c].car_num);
	
	// print the information of passenger
	if(a[count_c].P1 != NULL)
		printf("%s: %s, %s, %d yo, $%f\n", a[count_c].P1->seat, a[count_c].P1->name, a[count_c].P1->phone, a[count_c].P1->age, a[count_c].P1->balance);
	if(a[count_c].P2 != NULL)
		printf("%s: %s, %s, %d yo, $%f\n", a[count_c].P2->seat, a[count_c].P2->name, a[count_c].P2->phone, a[count_c].P2->age, a[count_c].P2->balance);
	if(a[count_c].P3 != NULL)
		printf("%s: %s, %s, %d yo, $%f\n", a[count_c].P3->seat, a[count_c].P3->name, a[count_c].P3->phone, a[count_c].P3->age, a[count_c].P3->balance);
	if(a[count_c].P4 != NULL)
		printf("%s: %s, %s, %d yo, $%f\n", a[count_c].P4->seat, a[count_c].P4->name, a[count_c].P4->phone, a[count_c].P4->age, a[count_c].P4->balance);
	if(a[count_c].P5 != NULL)
		printf("%s: %s, %s, %d yo, $%f\n", a[count_c].P5->seat, a[count_c].P5->name, a[count_c].P5->phone, a[count_c].P5->age, a[count_c].P5->balance);
	if(a[count_c].P6 != NULL)
		printf("%s: %s, %s, %d yo, $%f\n", a[count_c].P6->seat, a[count_c].P6->name, a[count_c].P6->phone, a[count_c].P6->age, a[count_c].P6->balance);
	
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
		{1, &P[0], &P[1]},
		{2, &P[2]},
		{3, &P[3]},
		{4, &P[4]},
		{5, &P[5], &P[6], &P[7]}
	};
	
	// print the information of all passenger
	listinfo(c, 0);
	listinfo(c, 1);
	listinfo(c, 2);
	listinfo(c, 3);
	listinfo(c, 4);	
	
	return 0;
}
