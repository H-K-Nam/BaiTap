#include <bits/stdc++.h>

using namespace std;

struct Point
{
    double x, y;
};



void print(Point a)
{
    cout << "(" << a.x << "; " << a.y << ")" << endl;
}

Point mid_point(const Point a, const Point b)
{
    Point n;
    n.x=(a.x+b.x)/2;
    n.y=(a.y+b.y)/2;
    return n;
}

struct Rect
{
    double x, y;
    double w, h;

    Rect(const double x_, const double y_, const double w_, const double h_)
    {
        x=x_; y=y_; w=w_; h=h_;
    }

    bool contains(const Point n) const
    {
        return n.x-x<=w && fabs(n.y-y)<=h && n.x>=x && n.y<=y;
    }
};

struct Ship
{
    Rect size_;
    string id;
    double dx, dy;

    void move()
    {
        size_.x+=dx;
        size_.y+=dy;
    }
};

void display(const Ship& n)
{
    cout << n.id << " (" << n.size_.x << ", " << n.size_.y << ")";
}

int main()
{
    Ship ship1{Rect(1, 1, 1, 1), "A12345", 1, 1};
    int loop = 0;
    while (loop<10)
    {
        ship1.move(); display(ship1); cout << endl;
        loop++;
    }
    return 0;
}
