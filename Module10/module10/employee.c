#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee{
	char name[100];
	char position[100];
	int salary;
};

typedef struct employee Employee;

void setEmployee(char n[], char p[], int sal, Employee * e){
	strcpy(e->name,n);
	strcpy(e->position,p);
	e->salary = sal;
}

void showInfo(Employee e){
	printf("Name: %s\n", e.name);
	printf("Position: %s\n", e.position);
	printf("Salary: %d\n",e.salary);
}

int main(){
	int numofemployee;
	scanf("%d",& numofemployee);
	Employee * e;
	e = (Employee *) malloc (numofemployee * sizeof(Employee));
	char n[100],p[100];
	int sal;
	for(int i = 0; i < numofemployee; i++){
		scanf("%s%s%d",n,p,&sal);
		setEmployee(n,p,sal,e+i);
	}
	for(int i = 0; i <numofemployee; i++){
		showInfo(e[i]);
	}
	free(e);
}
