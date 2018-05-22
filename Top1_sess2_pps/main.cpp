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
    triangle T1,T2;
    cout<<"First triangle";
    for(int i=0;i<3;i++)
            cin>>T1.T[i].x>>T1.T[i].y;


    return 0;
}
