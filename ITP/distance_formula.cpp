#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using std::cin;
using std::cout;

int main(int argc, char** argv) {
	double x1,x2,y1,y2,output ;
	cout<<"intput x coordinate 1 = ";
	cin>>x1;
	cout<<"intput y coordinate 1 = ";
	cin>>y1;
	y2=0;
	x2=0;
	/*
	cin>>x1;
	cout<<"intput x coordinate 2"
	cin>>y1;
	cout<<"intput y coordinate 2"
	*/
	output=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	cout<< "output is = "<< output; 
	
	
	
	
	return 0;
}