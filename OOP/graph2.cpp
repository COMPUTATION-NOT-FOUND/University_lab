#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

class PerformerMovieGraph{

private:
unordered_map<string,unordered_set<string>>graph;

public:
void addEdge(const string& performer, const string& movie) {
        graph[performer].insert(movie);
        graph[movie].insert(performer);
    }


    vector<string> getperformersformovie(const string& movie) {
        return bfs(movie, true);
    }


    vector<string> getmoviesforperformer(const string& performer) {
        return bfs(performer, false);
    }


private:
    vector<string> bfs(const string& start, bool isPerformer) {
        unordered_set<string> visited;
        vector<string> result;
        queue<string> q;


        q.push(start);
        visited.insert(start);


        while (!q.empty()) {
            string current = q.front();
            q.pop();


            if ((isPerformer && current != start) || (!isPerformer && current == start)) {
                result.push_back(current);
            }


            for (const string& neighbor : graph[current]) {
                if (visited.find(neighbor) == visited.end()) {
                    q.push(neighbor);
                    visited.insert(neighbor);
                }
            }
        }


        return result;
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
    vector<string>performers= graph.getperformersformovie(movie);
    for(auto performer:performers){
        cout<<" "<<performer<<endl;
    }
    string performer ="tom cruise";
    cout<<"Movies for Performer "<<performer<<" :"<<endl;
    vector<string>movies= graph.getmoviesforperformer(performer);
    for(auto movie:movies){
    cout<<" "<<movie<<endl;
    }
}