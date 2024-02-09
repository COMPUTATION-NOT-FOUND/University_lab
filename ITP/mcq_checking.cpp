#include <iostream>
#include <ctime>

using namespace std;
int main(){
char studentA[8][10]{};
char key[10]={'D','B','D','C','C','D','A','E','A','D'};
int student_r[8][2]{};
srand(static_cast<unsigned int>(time(0)));
for(int i=0;i<8;i++){
    for(int j=0;j<10;j++){
        studentA[i][j]=((rand())%5)+65;
        cout<<studentA[i][j];

    }

    cout<<endl;
}

for(int i=0;i<8;i++){
    for(int j=0;j<10;j++){
        studentA[i][j]==key[j]?student_r[i][0]+=1:student_r[i][1]+=1;
    }
}

for(int i=0;i<8;i++){
    cout<<"student"<<i<<" correct asnwers "<<student_r[i][0]<<" wrong asnwers "<<student_r[i][1]<<endl;

}
}