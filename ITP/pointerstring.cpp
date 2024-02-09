#include<iostream>
#include<iomanip>
 using namespace std;

/*int main(){
    int count=0,i=0,vowel=0;
    char arr[6],arr2[6];
    char* str=arr;
    char* str2=arr2;
    cout<<"Enter any string  : " ;
    cin>>setw(6)>>arr;
    while(*(str)!='\0'){
        *str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'?vowel++: 0 ;
        *(str2)=*(str);
        count++;
        str2++;
        str++;
    }

    cout<<"count : "<<count<<endl;
    cout<<"vowel : "<<vowel<<endl;
    while(arr2[i]!='\0'){
        cout<<arr2[i++];
        
    }*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int count = 0, i = 0, vowel = 0;
    char arr[6], arr2[6];
    char* str = arr;
    char* str2 = arr2;
    cout << "Enter any string: ";
    cin >>setw(6) >> arr;
    cout <<arr<<endl;

    while (*str != '\0') {
        (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') ? vowel++ : 0;
        (*str2++) = (*str++);
        count++;
        }

    cout << "count : " << count << endl;
    cout << "vowel : " << vowel << endl;
    cout<<endl;
    cout<<arr2<<endl;
  //  return 0;
}


