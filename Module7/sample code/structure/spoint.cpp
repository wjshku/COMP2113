
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// 2D point
struct Point
{
    double x;
    double y;
};
//mid-point of two points p and q
Point midpoint(Point p, Point q){
	p.x = (p.x + q.x)/2;
	p.y = (p.y + q.y)/2;
	return p;
}

// shrink a line with endpoints p and q
void shrink_line( Point &p, Point &q ) {
	Point temp = p;
	temp.x = p.x * 3/4 + q.x * 1/4;
	temp.y = p.y * 3/4 + q.y * 1/4;
	q.x = p.x * 1/4 + q.x * 3/4;
        q.y = p.y * 1/4 + q.y * 3/4;
	p = temp;
}

// distance between two points p and q
double point_distance( Point p, Point q )
{
    double dx = p.x - q.x;
    double dy = p.y - q.y;
    return sqrt( dx * dx + dy * dy );
}

// get a point from user input
Point input_point() {
    double x, y;
    cin >> x >> y;
    Point p = { x, y };
    return p;
}

// swap two points p and q
void swap( Point &p, Point &q ) {
    Point temp = p;
    p = q;
    q = temp;
}

int main()
{
    cout << "Input 1st point (x,y): ";
    Point a = input_point();

    cout << "Input 2nd point (x,y): ";
    Point b = input_point();

    cout << "Distance between point: " << point_distance(a, b) << endl;

    swap(a, b);
    cout << "1st point: " << a.x << ' ' << a.y << endl;
    cout << "2nd point: " << b.x << ' ' << b.y << endl;
    cout<<midpoint(a,b).x<<" "<<midpoint(a,b).y<<endl;

    return 0;
}
