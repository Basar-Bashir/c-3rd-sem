#include<iostream>
using namespace std;
class point{
    
    public :
     int x,y;
    void getpoint(){
        cout<<"Enter the x and y coord of point"<<endl;
        cin>>x>>y;
    }
    point addpoint (point m,point n){
        point temp;
        temp.x = m.x + n.x;
        temp.y = m.y + n.y;
        return temp;
    }
};

int main()
{
point p1,p2,p3;
p1.getpoint();
p2.getpoint();
p3 = p1.addpoint(p1,p2);
cout<<p3.x<<","<<p3.y;
return 0;
}