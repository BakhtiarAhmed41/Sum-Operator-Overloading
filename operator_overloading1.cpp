#include <iostream>
using namespace std;  
  
  
  class A
  {
   public:
   	int rate;
   	
   	A(){
   		rate=0;
	   }
   	
   	A(int x){
   		rate = x;
	   }
	
	int get_rate(){
		return rate;
	}
	
	void display(){
		cout<<rate<<endl;
	}
  
  	friend A operator +( A&, A& );
  	
  
};

  	A operator +(const A &obj1, const A &obj2){
  		A temp;
  		temp.rate= obj1.rate + obj2.rate;
  		return temp;
	  }

  int main( )
  {
    A r1(200);
    A r2(50);
    
    A r3;
    r3= r1+r2;
    
    r1.display();
    r2.display();
    r3.display();
    
  }
