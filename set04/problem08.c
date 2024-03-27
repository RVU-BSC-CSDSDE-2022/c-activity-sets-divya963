#include<stdio.h>
#include<math.h>

typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct line {
    Point p;
    float distance;
} Line;

typedef struct polygon {
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n();
Line input_line(int n);
void input_n_lines(int n, Line *l);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_n_distance(int n, Line *l);
void find_perimeter(Polygon *p);
void output(Polygon p);

int main()
{
    Polygon poly;
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
    return 0;
}

int input_n()//entering the no of sides of polygon
{
    int n;
    printf("Enter the no of sides of the polygon");
    scanf("%d",&n);
    return n;
}
Line input_line(int n)//entering the co ordinates of polygon
{
    Line l;
    n=0;
    printf("Enter the coordinates of point %d (x,y):",n+1);
    scanf("%f %f", &l.p.start_end_x, &l.p.start_end_y);
    return l;
}
void input_n_lines(int n, Line *l)
{
    for(int i=0;i<n;i++)
    {
        l[i] = input_line(i+1);
    }
}
int input_polygon(Polygon *p)
{
    p->sides = input_n();
    input_n_lines(p->sides, p->l);
    return p->sides;
}
float find_distance(Point a, Point b)
{
    return sqrt(pow((b.start_end_x - a.start_end_x), 2) + pow((b.start_end_y - a.start_end_y), 2));
}
void find_n_distance(int n, Line *l)
{
    for (int i = 0; i < n; ++i) {
        l[i].distance = find_distance(l[i].p, l[(i + 1) % n].p);
    }
}
void find_perimeter(Polygon* p)
{
    find_n_distance(p->sides, p->l);
    p->perimeter = 0;
    for (int i = 0; i < p->sides; ++i) 
    {
        p->perimeter += p->l[i].distance;
    }
}
void output(Polygon p)
{
    printf("The perimeter of the polygon is %.6f\n", p.perimeter);
}