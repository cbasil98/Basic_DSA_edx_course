#include <bits/stdc++.h>

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
    char c;
    cout<<"Input triangle\n";
    for(int i=0;i<3;i++)
            cin>>T1.T[i].x>>T1.T[i].y;
    do
    {
    cout<<"Input the point\n";
    cin>>a.x>>a.y;
    if(checkpoint(T1,a))
    {

        cout<<"Yes";
    }

    else
        cout<<"No";
    cout<<"Continue";
    cin>>c;
    }while(c=='y');
    return 0;
}
bool checkpoint(triangle T1,point a)
{
    point v[3],v1[3],v2[3];
    for(int i=0;i<3;i++)
    {
        v[i].x=T1.T[(1+i)%3].x-T1.T[(i)%3].x;
        v[i].y=T1.T[(1+i)%3].y-T1.T[(i)%3].y;
        v1[i].x=T1.T[(2+i)%3].x-T1.T[(i)%3].x;
        v1[i].y=T1.T[(2+i)%3].y-T1.T[(i)%3].y;
        v2[i].x=a.x-T1.T[(i)%3].x;
        v2[i].y=a.y-T1.T[(i)%3].y;




    }
    for(int i=0;i<3;i++)
        if(!cross(v[i],v1[i],v2[i]))
           return false;
    return true;


}
bool cross(point b,point c,point a)
{
    int z1,z2;
    z1=b.x*c.y-c.x*b.y;
    z2=b.x*a.y-a.x*b.y;
    if(!z2)
    {
        cout<<"Yes";
        exit(0);
    }

    if(z1*z2<=0)
        return false;
    return true;
}
