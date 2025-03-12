#include <stdio.h>
#include <math.h>

void inputXY(double *x1, double *y1, double *x2, double *y2); 
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double y2);
void calDistance2(double x1, double y1, double x2, double y2, double *dist);

int main()
{
    double x1, y1, x2, y2, distance = -1;
    inputXY(&x1, &y1, &x2, &y2);         // call by reference
    distance = calDistance1(x1, y1, x2, y2); // call by value
    printf("calDistance1(): ");
    outputResult(distance);
    
    calDistance2(x1, y1, x2, y2, &distance); // call by reference
    printf("calDistance2(): ");
    outputResult(distance);            // call by value
    
    return 0;
}


/*accepts four decimal values representing the coordinates 
of two points, i.e. (x1, y1) and (x2, y2), on a plane, and calculates and displays the distance between the points: 

distance = sqrt( ((x2 - x1)^2) - ((y2 - y1)^2) )

Provide two versions of the function for calculating the distance: 
(a) one uses call by value only for passing parameters;
(b) the other uses call by reference to pass the result to the calling function. */


// scanf: floating / double = %lf placeholder 
void inputXY(double *x1, double *y1, double *x2, double *y2)
{
    printf("Enter X, Y coordinates (x1 y1 x2 y2): ");
    scanf("%lf %lf %lf %lf", x1, y1, x2, y2);
}

void outputResult(double dist)
{
    printf("%.2lf\n", dist); 
}

double calDistance1(double x1, double y1, double x2, double y2)
{
    double x_diff = 0, y_diff = 0;
    x_diff = pow(x2 - x1, 2);
    y_diff = pow(y2 - y1, 2);
    
    return pow(x_diff + y_diff, 0.5);
}

void calDistance2(double x1, double y1, double x2, double y2, double *dist)
{
    double x_diff = 0, y_diff = 0;
    x_diff = pow(x2 - x1, 2);
    y_diff = pow(y2 - y1, 2);
    
    *dist = pow(x_diff + y_diff, 0.5);
}
