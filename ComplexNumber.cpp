#include<iostream>

class complex{
private:
int real;
int imag;
public:
complex(int x,int y){
real =x;
imag = y;
}
complex operator +(complex const& obj){
  complex sum;
  sum.real = real + obj.real;
  sum.imag = imag + obj.imag;
  return sum;
}
complex operator -(complex const& obj){
  complex sub;
  sub.real = real - obj.real;
  sub.imag = imag - obj.imag;
  return sub;
}
complex operator *(complex const& obj){
  complex mul;
  mul.real = (real*obj.real)-(imag*obj.imag);
  mul.imag = (real*obj.imag)+(imag*obj.real);
  
  return mul;
}
void print(){
  cout<<
};


int main(){
  complex c1(1,5);
complex c2(-2,7);
