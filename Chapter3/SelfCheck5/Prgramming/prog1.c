/*
*Name - Nikhil Ranjan Nayak
*Regd no - 1641012040
*Desc - Computes the weight of a batch of flat washers.
*/
#include "stdio.h"
#define PI 3.14159
double find_area(double);
int main(void)
{
	double hole_diameter;	// input - diameter of hole
	double edge_diameter;	// input - diameter of outer edge
	double thickness;	// input - thickness of washer
	double density;		// input - density of material used
	double quantity;	// input - number of washers made
	double weight;		// output - weight of washer batch
	double hole_radius;	// radius of hole
	double edge_radius;	// radius of outer edge
	double rim_area;	// area of rim
	double unit_weight;	// weight of 1 washer

	/* Display the weight of the batch of washers. */
	printf("\nThe expected weight of the batch is %.2f", weight);
	printf(" grams.\n");
	
	return (0);
}

void instruct(double hole_diameter, double edge_diameter, double thickness, double density, double quantity;)
{
	/* Get the inner diameter, outer diameter, and thickness.*/
	printf("Inner diameter in centimeters> ");
	scanf("%lf", &hole_diameter);
	printf("Outer diameter in centimeters> ");
	scanf("%lf", &edge_diameter);
	printf("Thickness in centimeters> ");
	scanf("%lf", &thickness);
	
	/* Get the material density and quantity manufactured. */
	printf("Material density in grams per cubic centimeter> ");
	scanf("%lf", &density);
	printf("Quantity in batch> ");
	scanf("%lf", &quantity);
}

void find_rim_area(double hole_diameter, edge_diameter)
{
	double hole_radius, edge_radius;
	/* Compute the rim area. */
	hole_radius = hole_diameter / 2.0;
	edge_radius = edge_diameter / 2.0;
	return (find_area(edge_radius) - find_area(hole_radius));
}

void find_unit_weight()
{
	/* Compute the weight of a flat washer. */
	unit_weight = rim_area * thickness * density;
	
	/* Compute the weight of the batch of washers. */
	weight = unit_weight * quantity;
}

double find_area(double radius)
{
	return (PI * radius * radius);
}
	
