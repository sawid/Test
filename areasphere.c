#include <stdio.h>
#define pi 3.1415926535897932384626433
int main() {
	double r,area;
	scanf("%lf",&r);
	if (r >= 0){
		printf("%.8lf", 4 * pi * r * r );
	}
	else {
		printf("Error");
	}
}
