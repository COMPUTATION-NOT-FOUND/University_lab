   #include<iostream>
    #include<vector>
#include<iterator>
  #include<algorithm>


  using namespace std;
  
  
  void display(vector<int>a){
      for(auto it:a){
          cout<<it<<"";
      }
      cout<<endl;
  }
  
  int main(){
      vector<int> a1;
      vector<int> a2;
      int temp=0;
      
    cout<<"enter array 1 ctrlz or /0 to stop :" ; 
    while(cin>>temp){
        a1.push_back(temp);
    }
    
    temp=0;
    cout<<"enter array 2 ctrlz or /0 to stop :" ; 
    while(cin>>temp){
        a2.push_back(temp);
    }
    
    display(a1);
    display(a2);
    
    vector<int> resultsa(a1.size());
    copy_backward(a1.begin(), a1.end(), resultsa.end());
    
    display(resultsa);
    
    vector<int> resultsb( a2.size());
    copy_backward(a2.begin(), a2.end(), resultsb.end());
    
    display(resultsb);
    
    vector<int> results2;
    copy(a1.begin(), a1.end(), back_inserter(results2));
    copy(a2.begin(), a2.end(), back_inserter(results2));
    
    display(results2);
    
    sort(results2.begin(), results2.end());
    results2.erase(std::unique(results2.begin(), results2.end()), results2.end());
    
    display(results2);
    
     std::reverse(a1.begin(), a1.end());
     
     display(a1);

      
      
  }
  