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

  void setarray(vector<int>& a){
int temp=0;
 while(cin>>temp){
        a.push_back(temp);
        
    }
    cin.clear();
    
  }
  
  int main(){
      vector<int> a1;
      vector<int> a2;
      
      
    cout<<"enter array 1 -1 to stop :" ; 
   
    setarray(a1);
 
    cout<<"enter array 2 1-1 to stop :" ; 
  
    setarray(a2);
    cout<<"displaying array 1 ";
    display(a1);
    cout<<"displaying array 2 ";
    display(a2);
    
    vector<int> results(a1.size());
    copy_backward(a1.begin(), a1.end(), results.end());
    
    cout<<"copy backwards result ";
    display(results);
    
    vector<int> results2;
    copy(a1.begin(), a1.end(), back_inserter(results2));
    copy(a2.begin(), a2.end(), back_inserter(results2));
    
    cout<<"displaying merged array ";
    display(results2);
    
    sort(results2.begin(), results2.end());
    results2.erase(std::unique(results2.begin(), results2.end()), results2.end());
    cout<<"displaying unique merged array ";
    display(results2);
    
    reverse(a1.begin(), a1.end());
     
     cout<<"storing reverse array 1 ";
     display(a1);

      
      
  }
  