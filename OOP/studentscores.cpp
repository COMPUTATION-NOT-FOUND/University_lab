#include <iostream>
#include <map>
#include <string>


using namespace std;

class studentscore{
    map <string,int> scores;

    public:
void addstudent(){
    string name;
    int score;
    cout<<"enter name to add:";
    cin>>name;
    cout<<"enter score :";
    cin>>score;
    scores[name] = score;
    cout << "Student added successfully." <<endl;
    }
void removeStudent() {
    string name;
    cout<<"enter name  to remove:";
    cin>>name;
  
        auto it = scores.find(name);
        if (it != scores.end()) {
            scores.erase(it);
            cout << "Student removed successfully." << endl;
        } else {
            cout << "Student not found." <<endl;
        }
    }

void displayScores() const {
    for (const auto& pair : scores) {
        cout << pair.first << ": " << pair.second << endl;
    }


}

};


int main(){
    studentscore score;
    score.addstudent();
    score.addstudent();
    score.addstudent();
    score.removeStudent();
    score.displayScores();
  



}