#include <iostream>
#include <vector>
#include <array>
using namespace std;
class Person{
protected:
string firstName;
string lastName;
int id;
public:
Person(string firstName, string lastName, int identification){
this->firstName = firstName;
this->lastName = lastName;
this->id = identification;
}
void printPerson(){
cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
}
};
class Student : public Person{
private:
vector<int> testScores;
public:


/*
* Class Constructor
*
* Parameters:
* firstName - A string denoting the Person’s first name.
* lastName - A string denoting the Person’s last name.
* id - An integer denoting the Person’s ID number.
* scores - An array of integers denoting the Person’s test scores.
*/
// Write your constructor here
Student(string firstName, string lastName, int identification ,vector <int> scores):Person(firstName,  lastName, identification)
{
testScores=scores;
}
/*
* Function Name: calculate
* Return: A character denoting the grade.
*/
// Write your function here
char calculate(){
    int total=0;
    int count=0;
    int temp=0;
    double avg=0;
    for(auto it :testScores){
        total+=it;
        count++;
    }
    avg=total/count;
    temp=avg/10;
    switch( temp){
    case 10:
    case 9:
    return 'O';
    break;
    case 8:
    return 'E';
    break;
    case 7:
    return 'A';
    break;
    case 5:
    return 'P';
    break;
    case 4:
    return 'D';
    break;
    default:
    return 'T';
    }

}

};
int main() {
string firstName;
string lastName;
int id;
int numScores;
cin >> firstName >> lastName >> id >> numScores;
vector<int> scores;
for(int i = 0; i < numScores; i++){
int tmpScore;
cin >> tmpScore;
scores.push_back(tmpScore);
}
Student* s = new Student(firstName, lastName, id, scores);
s->printPerson();
cout << "Grade: " << s->calculate() << "\n";
return 0;
}