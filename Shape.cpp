#include<iostream>
using namespace std;
class Shape{
    public:
     float h;
     float l;
    public:
    Shape(float a,float b){
        h=a;
        l=b;
    }
};
class Triangle:public Shape{
    public:
    Triangle(float a,float b):Shape(a,b){

    }
    float area(){
        return (h*l/2);
    }


};
class Rectangle:public Shape{
    public:
    Rectangle(float a,float b):Shape(a,b){

    }
    float area(){
        return h*l;
    }
};
int main(){
    Rectangle rectangle(4,3);
    Triangle triangle(6,3);
    cout<<"La Surface de Triangle est: "<<triangle.area()<<endl;
    cout<<"La Surface de Rectangle est: "<<rectangle.area()<<endl;
return 0;

}
