#include<iostream>
#include<string.h>
using namespace std;

class Point {
	
      private:
            double x;
            double y;
            string name1;
            char name2[20];
            
      public:
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
};

int main()
{
    Point myPoint,yourPoint;
    
	myPoint.setX(2.0);
    myPoint.setY(3.5);
    myPoint.setName1("Somruk");
    myPoint.setName2("Naruemon");
    
    yourPoint.setX(5.0);
    yourPoint.setY(6.5);
    yourPoint.setName1("Somsri");
    yourPoint.setName2("Somsak");
    
    myPoint.show();
    yourPoint.show();

	cout<<"Get x = "<<myPoint.getX()<<endl;
	cout<<"Get y = "<<myPoint.getY()<<endl;
	cout<<"Get name1 : "<<myPoint.getName1()<<endl;
	cout<<"Get name2 : "<<myPoint.getName2()<<endl;
	cout<<endl;
	
	cout<<"Get x = "<<yourPoint.getX()<<endl;
	cout<<"Get y = "<<yourPoint.getY()<<endl;
	cout<<"Get name1 : "<<yourPoint.getName1()<<endl;
	cout<<"Get name2 : "<<yourPoint.getName2()<<endl;
}
