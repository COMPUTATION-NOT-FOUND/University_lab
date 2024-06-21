#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class PerformerMovieGraph{

private:
unordered_map<string,unordered_set<string>>graph;
vector<string> bfs(const string& performer , bool isperformer);

//dfs is not necessary

public:
void addEdge(const string& performer , const string & movie){
    graph[performer].insert(movie);
    graph[movie].insert(performer);

}

vector<string> getperformerformovie(const string & movie){
    vector<string> temp;
    for(auto it: graph [movie]){
        temp.push_back(it);
    }
    return temp;
}

vector<string> getmoviesforperformer(const string & performer){
    vector<string> temp;
    for(auto it: graph [performer]){
        temp.push_back(it);
    }
    return temp;
}

};

int main(){
    PerformerMovieGraph graph;
    graph.addEdge("tom cruise", "mission impossible");
    graph.addEdge("tom cruise", "top gun");
    graph.addEdge("leonardo", "inception");
    graph.addEdge("leonardo", "titanic");
    graph.addEdge("kate winslet","titanic");

    string movie ="mission impossible";
    cout<<"Performer for Movie "<<movie<<" :"<<endl;
    vector<string>performers= graph.getperformerformovie(movie);
    for(auto performer:performers){
        cout<<" "<<performer<<endl;
    }
    string performer ="leonardo";
    cout<<"Movies for Performer "<<performer<<" :"<<endl;
    vector<string>movies= graph.getmoviesforperformer(performer);
    for(auto movie:movies){
        cout<<" "<<movie<<endl;
    }
}