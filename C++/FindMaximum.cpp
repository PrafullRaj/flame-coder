/*Write a Program to find Maximum out of Two Numbers using friend function. Note: Here 
one number is a member of one class and the other number is member of some other class.*/
#include<iostream>
using namespace std;

class ABC;
class XYZ
{
	int x;
	public:
		void setvalue(int i){x = i;}
		friend void max(XYZ, ABC);
};
class ABC
{
	int a;
	public:
		void setvalue(int i){a = i;}
		friend void max(XYZ, ABC);
};
void max(XYZ m, ABC n)	
{
	if(m.x >= n.a)
		cout<< m.x<<endl;
	else
		cout<< n.a<<endl;
}
int main()
{
	ABC abc;
	abc.setvalue(10);
	
	XYZ xyz;
	xyz.setvalue(20);
	
	max(xyz, abc);	
	return 0;
}
//time complexity O(n)
