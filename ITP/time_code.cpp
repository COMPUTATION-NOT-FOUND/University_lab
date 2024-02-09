#include <iostream>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using std::cin;
using std::cout;
//using namespace std;

int main(int argc, char** argv) {

	time_t current_time;
	double seconds,minutes,hours,hours_12 ;
	int a;
	current_time= time(NULL);
	cout<<current_time << " seconds has passed since 00:00 gmt , jant 1, 1970 \n";
	
	a=current_time;
	seconds=a%60;
	minutes=(a%3600)/60;
	hours=(a%86400)/3600;
	hours_12=(a%(86400/2)/3600);
	cout<< seconds<<"\n";
	cout<< minutes<<"\n";
	cout<< hours<<"\n";
	cout<<hours<<":"<<minutes<<":"<<seconds<<'\n';
	cout<<"localtime " <<hours-7<<":"<<minutes<<":"<<seconds<<"\n";
	cout<<hours_12<<":"<<minutes<<":"<<seconds<<'\n';
	cout<<hours_12-7<<":"<<minutes<<":"<<seconds<<'\n';

	
	
	
	
	return 0;
}