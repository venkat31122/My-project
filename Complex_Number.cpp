
#include<iostream>
//a class complex is created with having real and imaginary in private section.

using namespace std;
class complex{
private:
int real;// an integer real is created.
int imag;// an integer imag is created.
public:
complex(int x,int y){
real =x;
imag = y;
}
//here we overload + operator to add two complex numbers.
complex operator +(complex const& obj){
 int x;
  int y;
 x = real + obj.real;
   y = imag + obj.imag;
  return complex(x,y);
}

//here we overload - operator to subtract two complex numbers.
complex operator -(complex const& obj){
  int x;
  int y;
 x = real - obj.real;
   y = imag - obj.imag;
  return complex(x,y);
}
//here we overload * operator to multiply two complex numbers.
complex operator *(complex const& obj){
  int x;
  int y;
 x  = (real*obj.real)-(imag*obj.imag);
  y = (real*obj.imag)+(imag*obj.real);

  return  complex(x,y);
}//we use print() functionm to print the complex number
void print(){
  cout<< real<<"+ i("<<imag<<").";}
};


int main(){
  complex c1(1,5);//a complex c1 is created.
  complex c2(-2,7);//a complex c2 is created.
  complex add = c1+c2;// we add two complex numers .
  complex sub = c1-c2;// we subtract two complex numbers.
  complex mul = c1*c2;// we multiply two complex numbers.
  cout<<"given complex numbers=\n";
  c1.print();
  c2.print();
  
  cout<<"\nafter addition =";
  add.print();
  cout<<"\nafter subtraction =";
  sub.print();
  cout<<"\nafter multiplication =";
  mul.print();
  
  
  }
