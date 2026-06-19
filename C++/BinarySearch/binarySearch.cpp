 #include<bits/stdc++.h>
 using namespace std;
 int binarySearch(int arr[], int size, int key){
     
     int start= 0;
     int end= size-1;

     int mid= start + ( end-start)/2;
     while(start <=end){

        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key > arr[mid]){
            start= mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
     }
     return -1;
 }
 int main(){
    int even[6]={ 2,4,6,8,12,18};
    int odd[5]={3,4,7,9,14};
    int evenindex = binarySearch(even, 6, 18);
    int oddindex = binarySearch(odd, 5, 7);

    cout << "Index of 18 is " << evenindex << endl;
    cout << "Index of 7 is " << oddindex << endl;

    return 0;
 }