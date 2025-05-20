#include<iostream>
#include<string.h>
using namespace std;

class Point {
	
      private:
      	static int num;
        double x;
        double y;
        string name1;
        char name2[20];
            
      public:
      	Point()	{
      		num++;
		  	set(0.0,0.0,"Somkid","Somsri");
		  }
		  
      	Point(double a) {
		  	num++;
		  	set(a,0.0,"Somkid","Somsri");
		  }
		  
      	Point(double a,double b) {
      		num++;
		  	set(a,b,"Somkid","Somsri");
		  }	
		  
      	Point(double a,double b,string c) {
		  	num++;
		  	set(a,b,c,"Somsri");
		  }
		  
      	Point(double a,double b,string c,char *d) {
		  	num++;
			set(a,b,c,d);
		  }
      	
		~Point() {
			num--;
			cout<<num<<endl;
		} 
		 
		void set(double a,double b,string c,char *d) {
			x = a;
			y = b;
			name1 = c;
			strcpy(name2,d);
		}
		
		void setXY(double a,double b) {
			x = a;
			y = b;
		}
		
        void setX(double a) {
            x = a;         
        }
            
        void setY(double b) {
      		y = b;
		}
			
		void setName1(string c) {
			name1 = c;
		}
			
		void setName2(char *d) {
			strcpy(name2,d);
		}
			
        double getX() {
            return x;     
        }
            
        double getY() {
            return y;
        }
            
        string getName1() {
            return name1;
		}
			
    	char *getName2() {
            return name2;    
        }
            
        void show() {
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<"name1 : "<<name1<<endl;    
            cout<<"name2 : "<<name2<<endl;   
            cout<<endl;
        }
        
        static int count() {
        	return num;
		}
		
		double dot(Point&a) {
			return (x*a.x) + (y*a.y);
		}
		
		Point midpoint(Point&i,Point&j) {
			x = (i.x+j.x)/2;
    		y = (i.y+j.y)/2; 
    		return Point(x,y);		//return Object
		}
};
int Point::num;

int main()	{
	cout<<Point::count()<<endl;
    Point aPoint;
    cout<<Point::count()<<endl;
    Point bPoint(2.0);
    cout<<Point::count()<<endl;
    Point cPoint(3.5,4.0);
    cout<<Point::count()<<endl;
    Point dPoint(5.0,6.2,"Somsak");
    cout<<Point::count()<<endl;
    Point ePoint(7.3,7.7,"Somyod","Pensri");
    cout<<Point::count()<<endl;
    
    aPoint.show();
    bPoint.show();
    cPoint.show();
    dPoint.show();
    ePoint.show();

	cout<<"Get x = "<<aPoint.getX()<<endl;
	cout<<"Get y = "<<aPoint.getY()<<endl;
	cout<<"Get name1 : "<<aPoint.getName1()<<endl;
	cout<<"Get name2 : "<<aPoint.getName2()<<endl;
	cout<<endl;
	
	cout<<"Get x = "<<bPoint.getX()<<endl;
	cout<<"Get y = "<<bPoint.getY()<<endl;
	cout<<"Get name1 : "<<bPoint.getName1()<<endl;
	cout<<"Get name2 : "<<bPoint.getName2()<<endl;
	cout<<endl;
	
	cout<<"Get x = "<<cPoint.getX()<<endl;
	cout<<"Get y = "<<cPoint.getY()<<endl;
	cout<<"Get name1 : "<<cPoint.getName1()<<endl;
	cout<<"Get name2 : "<<cPoint.getName2()<<endl;
	cout<<endl;
	
	cout<<"Get x = "<<dPoint.getX()<<endl;
	cout<<"Get y = "<<dPoint.getY()<<endl;
	cout<<"Get name1 : "<<dPoint.getName1()<<endl;
	cout<<"Get name2 : "<<dPoint.getName2()<<endl;
	cout<<endl;
	
	cout<<"Get x = "<<ePoint.getX()<<endl;
	cout<<"Get y = "<<ePoint.getY()<<endl;
	cout<<"Get name1 : "<<ePoint.getName1()<<endl;
	cout<<"Get name2 : "<<ePoint.getName2()<<endl;
	cout<<endl;
	
	Point x,y,z;
	Point center;
	x.set(8.0,6.0,"Somyod","Pensri");
	y.set(7.0,5.0,"Somsak","Sompond");
	cout<<"dot = "<<x.dot(y)<<endl;
	cout<<endl;
	z = center.midpoint(x,y);
	center.show();
	x.show();
	y.show();
	z.show();
}
