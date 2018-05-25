//-----Include required headers here-----
#include<bits/stdc++.h>
using namespace std;
//-----End of headers-----

//-----Don't change/delete classes -----
class Point
{
public:
 int x,y;
};

class LineSeg
{
public:
    Point p1,p2;
};
//----- Classes end here

//-----Add new functions here(if any)-----
point sol(LineSeg l1,LineSeg l2)
{
    float a,,b,c,d,e,f;
    point p;
    a=l1.p2.y-l1.p1.y;
    b=l1.p1.x-l1.p2.x;
    c=l2.p2.y-l2.p1.y;
    d=l2.p1.x-l2.p2.x;
    e=l1.p1.x+l1.p1.y*(l1.p2.x-l1.p1.x);
    f=l2.p1.x+l2.p1.y*(l2.p2.x-l2.p1.x);
    det=a*d-c*b;
    p.x=(d*e-b*f)/det;
    p.y=(-c*e+a*f)/det;
    return p;
}


//-----New functions end here-----

/* Question: You need to write the function SegIntersect which takes two line segments as input and returns true if the two line segments
             intersect each other and false if not .You may write any additional helper functions you want in the specified region only.
             Do not change the signature of the functions or classes already given.
    LineSeg l1 : First line segment with its end-points given
    LineSeg l2 : Second line segment with its end-points given
*/

bool SegIntersect(class LineSeg l1,class LineSeg l2)
{
    // write your code below this line
    float m1,m2;
    point p;
    m1=(float)(l1.p2.y-l1.p1.y)/(l1.p2.x-l1.p1.x);
    m2=(float)(l2.p2.y-l2.p1.y)/(l2.p2.x-l2.p1.x);
    if(m1==m2)
        return false;
    else
    {
        p=sol(LineSeg l1,LineSeg l2);
        if(l1.p1.x>l1.p2.x)
        {
        }
            p3.x=l1.p1
        if(p.x)
    }
        return true;



}
int main()
{
    LineSeg l1,l2;
    cin>>l1.p1.x>>l1.p1.y>>l1.p2.x>>l1.p2.y>>l2.p1.x>>l2.p1.y>>l2.p2.x>>l2.p2.y;
    if(SegIntersect(l1,l2))
        cout<<"true";
    else
        cout<<"false";
}
