#include<iostream>
using namespace  std;
int main(){
    int n;
    cin>>n;
    int count=1;
    //inverrted half pyramid
   /*for(int i=n;i>=1;i--){
       for(int j=1;j<=i;j++){
            cout<<"*";
       }
       cout<<endl;
   }
}*/
/*half pyramid 180 degree*/
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=n-i){
        cout<<" ";
        }
        else{
            cout<<"*";
        }
    }cout<<endl;

}
}
/*half pyramid */
/*for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++)
    {
        cout << "* ";
    }
    cout<< endl;
}
}*/
/*half pyramid using no*/
/*for(int i=1;i<n;i++){
    for(int j=1;j<=i;j++){
        cout <<i <<" ";
       
    }
    cout<< endl;
}
}*/
/* inverted halfpyramid */
/*for(int i=1;i<=n;i++){
    for(int j=0;j<n-i+1;j++){
        cout<< "* ";
    }
  cout<< endl;
}
}*/


/*for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<< j ;
    }
  cout<< endl;
}
}*/



