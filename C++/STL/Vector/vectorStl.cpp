#include<bits/stdc++.h>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<< endl;
    for(int i =0; i< v.size();i++)
    {
      cout<<v[i]<<" ";
      //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    // Ways to create a vector
    vector<int> vec1; // Zero length vector
     int element, size=5;
    // cout<<"Enter the size of your vector " ;
    // cin>>size;
    // for(int i=0; i< size ;i++)
    // {
    //     cout<<"Enter an element to add to this vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    //vec1.pop_back(); // Remove last element
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,3, 566);
    // display(vec1);


    vector<char> vec2(4); // 4-element character vector
    //vec2.push_back('5');
    //display(vec2);
    // vector<char> vec3(vec2); // 4-element character vector from vec2
    //display(vec3);
    vector<int> vec4(4, 13); // 4-element vector of 3s
    display(vec4);
    cout<<vec4.size();

   
   return 0;
}