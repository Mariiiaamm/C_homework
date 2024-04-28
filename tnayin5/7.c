#include <stdio.h>
#include <math.h>
struct Point {
    int x;
    int y;
};
float distance(struct Point *p1, struct Point *p2) {
    return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
}
int main(void) 
{
    int n;
    printf("Enter the number of points: ");
    scanf("%d", &n);
    struct Point points[n];
    for(int i = 0; i < n; i++) 
    {
        printf("Input x%d and y%d: ", i+1, i+1);
        scanf("%d %d", &(points[i].x), &(points[i].y));
    }
    struct Point *ptri = &points[0];
    struct Point *ptrn = &points[1];
    float max_distance = distance(ptri, ptrn);
    int max_index_i = 0;
    int max_index_n = 1;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            float dist = distance(&points[i], &points[j]);
            if(dist > max_distance) {
                max_distance = dist;
                max_index_i = i;
                max_index_n = j;
                ptri = &points[i];
                ptrn = &points[j];
            }
        }
    }
    printf("The two neighboring points with the greatest distance are (%d, %d) and (%d, %d).\n", ptri->x, ptri->y, ptrn->x, ptrn->y);
    printf("The maximum distance between them is %.2f.\n", max_distance);
    return 0;
}
