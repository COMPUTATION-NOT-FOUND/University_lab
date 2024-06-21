#include<queue>
#include <iostream>


using namespace std;

template <typename T, typename PriorityFunc = less<T>>
class PriorityQueue {
public:
void insert(const T& element){
    cout<<"inserting "<<element<<endl;
    pq.push(element);
}
T getHighestPriority(){
    return pq.top() ;
}

void removeHighestPriority(){
    if(pq.empty()){
        cout<< "queue is empty";
    }
    else{
    pq.pop();}
}


private:
priority_queue<T, vector<T>, PriorityFunc> pq;
};

int main() {
PriorityQueue<int> pq;
// Inserting elements
pq.insert(10);
pq.insert(30);
pq.insert(20);
// Retrieving and removing the highest priority element
int highestPriorityElement = pq.getHighestPriority();
cout << "Highest priority element: " << highestPriorityElement << endl;

pq.removeHighestPriority();
highestPriorityElement = pq.getHighestPriority();
cout << "Highest priority element: " << highestPriorityElement << endl;
pq.removeHighestPriority();
highestPriorityElement = pq.getHighestPriority();
cout << "Highest priority element: " << highestPriorityElement << endl;
pq.removeHighestPriority();
pq.removeHighestPriority();
return 0;
}