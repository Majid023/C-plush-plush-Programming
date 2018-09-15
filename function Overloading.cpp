#include<conio.h>
#include<iostream>

using namespace std;

double area(double r);// area of  a circle phi *R*R
double area(double r, double h); // volume of cylindar phi*R*R*h

int main() {
	
	printf("Area of Circle %fl \n",area(4));
	printf("Volume of Cylindar %fl",area(4,4));
	getch();
	return 0;
}

double area(double radius) {
	return(3.14*radius*radius);
}

double area(double radius, double height) {
	return(3.14*radius*radius*height);
}

