
#include<string>
#include<iostream>
#include<fstream>


using namespace std;
int highest(string f){
    ifstream inputFile(f);
    double highest =0.0;
    double current =0.0;
    string line;

    if (!inputFile.is_open()) {
    cerr << "Error opening file." << endl;
    return 1;
    }

while (getline(inputFile, line)) {

current=stod(line.substr(0,3));
if(highest<current){
highest=current;
}
}

inputFile.close();

inputFile.open(f);

while (getline(inputFile, line)) {
    if(stod(line.substr(0,3))==highest){
        cout<<line<<endl;
    }
}

return 0;

}

int main(){
highest("Gpa");

return 0;

}