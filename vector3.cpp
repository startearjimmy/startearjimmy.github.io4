#include "vector3.h"
#include <cmath>
#include <iostream>
using namespace std;
vector3::vector3()
{
}

vector3::vector3(float inX, float inY, float inZ):x(inX),y(inY),z(inZ)
{   
}

vector3::vector3(const vector3 &v)
{
    x=v.x;
    y=v.y;
    z=v.z;
}
float                 &vector3::operator [] (unsigned int index)
{

}
const float           &vector3::operator [] (unsigned int index) const
{

}
vector3               &vector3::operator =  (const vector3 &v)
{
    x=v.x;
    y=v.y;
    z=v.z;
    return *this;
}
vector3               &vector3::operator += (const vector3 &v)
{
    this->x+=v.x;
    this->y+=v.y;
    this->z+=v.z;
    return *this;
}
vector3               &vector3::operator -= (const vector3 &v)
{
    this->x-=v.x;
    this->y-=v.y;
    this->z-=v.z;
    return *this;
}
vector3               &vector3::operator *= (float f)
{
    this->x*=f;
    this->y*=f;
    this->z*=f;
    return *this;
}
vector3               &vector3::operator /= (float f)
{
    this->x/=f;
    this->y/=f;
    this->z/=f;
    return *this;
}
bool           vector3::operator == (const vector3 &a, const vector3 &b)
{
    return (a.x==b.x&&a.y==b.y&&a.z==b.z)?TRUE:FALSE;
}
bool           vector3::operator != (const vector3 &a, const vector3 &b)
{
    return (a.x==b.x&&a.y==b.y&&a.z==b.z)?FALSE:TRUE;
}
vector3        vector3::operator + (const vector3 &a, const vector3 &b)
{
    vector3 vec3(a.x+b.x,a.y+b.y,a.z+b.z);
    return vec3;
}
vector3        vector3::operator - (const vector3 &a, const vector3 &b)
{
    vector3 vec3(a.x-b.x,a.y-b.y,a.z-b.z);
    return vec3;
}
vector3        vector3::operator * (const vector3 &v, float f)
{
    vector3 vec3(v.x*f,v.y*f,v.z*f);
    return vec3;
}
vector3        vector3::operator * (float f, const vector3 &v)
{
    vector3 vec3(v.x*f,v.y*f,v.z*f);
    return vec3;
}
vector3        vector3::operator / (const vector3 &v, float f)
{
    vector3 vec3(v.x/f,v.y/f,v.z/f);
    return vec3;
}
void vector3::set(float xIn, float yIn, float zIn)
{
    x=xIn;
    y=yIn;
    z=zIn;
}
float vector3::length() const
{
    return sqrt((x*x)+(y*y)+(z*z));
}
void vector3::printVector3() const
{
    cout<<"("<<x<<", "<<y<<", "<<z<<")";
}
