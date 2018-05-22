#include <iostream>

using namespace std;
struct point // Data type to store a point in cartesian plane
{
    int x;
    int y;
};
struct triangle //Data structure to store a triangle as 3 points in space
{
    point T[3];
};

int main()
{
    triangle T1;
    point a;
    cout<<"First triangle\n";
    for(int i=0;i<3;i++)
            cin>>T1.T[i].x>>T1.T[i].y;
    cout<<"Insert the point";
    cin>>a.x>>a.y;






    return 0;
}
