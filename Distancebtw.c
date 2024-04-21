#include <stdio.h>
#include <math.h>

// Define a structure to represent a point in 2D space
struct Point {
    double x;
    double y;
};

// Function to calculate the distance between two points
double distance(struct Point p1, struct Point p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    struct Point p1, p2;
    double dist1, dist2, total_dist;

    // Read the first point
    printf("Enter the x and y coordinates of the first point: ");
    scanf("%lf %lf", &p1.x, &p1.y);

    // Read the second point
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%lf %lf", &p2.x, &p2.y);

    // Calculate the distances
    dist1 = distance(p1, (struct Point){0, 0});
    dist2 = distance(p2, (struct Point){0, 0});

    // Add the distances
    total_dist = dist1 + dist2;

    // Print the result
    printf("The total distance is: %.2f\n", total_dist);

    return 0;
}
