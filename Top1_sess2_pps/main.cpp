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
bool checkpoint(triangle,point);
bool cross(point,point,point);
int main()
{
    triangle T1;
    point a;
    cout<<"Input triangle\n";
    for(int i=0;i<3;i++)
            cin>>T1.T[i].x>>T1.T[i].y;
    cout<<"Input the point";
    cin>>a.x>>a.y;
    if(checkpoint(T1,a))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
bool checkpoint(triangle T1,point a)
{
    point v[3];
    for(int i=0;i<3;i++)
    {
        v[i].x=T1.T[(1+i)%3].x-T1.T[(i)%3].x;
        v[i].y=T1.T[(1+i)%3].y-T1.T[(i)%3].y;

    }
    for(int i=0;i<3;i++)
        if(!cross(v[i],v[(i+2)/3],a))
           return false;
    return true;


}
bool cross(point b,point c,point a)
{
    int z1,z2;
    z1=b.x*c.y-c.x*b.y;
    z2=b.x*a.y-a.x*b.y;
    if(z1*z2<0)
        return true;
    return false;
}
