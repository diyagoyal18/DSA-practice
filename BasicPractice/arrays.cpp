// #include<iostream>
// using namespace std;

// int main()
// {
    // //MAX-MIN ARRAY

    // int n;
    // cin>>n;
    //  int arr[n];
    //  for(int i=0;i<n;i++){
    //     cin>>arr[i];

    //  }
    //  cout<<"the input array is:"<<endl;
    //  for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //  }
    // int max=INT16_MIN; //minimum number in c++

    // int min=INT16_MAX; //maximum number in c++
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    //     if(arr[i]<min){
    //         min=arr[i];
    //     }
    // }
    // cout<<"maximum number is"<<max<<endl;
    // cout<<"minimum number is"<<min;


//     /SEARCH IN ARRAY


            //LINEAR SEARCH // TIME COMPLEXITY: O(n)
//     int search(int arr[], int n, int key){
//         for(int i=0;i<n;i++){
//             if(arr[i]==key){
//                 return i;
//             }
//         }
//         return -1;
//     }
//     int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //  for(int i=0;i<n;i++){
//     //     cout<<arr[i];
//     // }
//     cout<<"enter key:"<<endl;
//     int key;
//     cin>>key;
//     cout<<search(arr, n, key);
//     //return 0;
// }
  

//   //    BINARY SEARCH  //time complexity O(logn base 2)
//   int binarysearch(int arr[],int n, int key){
// int s=0;
// int e=n;
// while (s<=e)
// {
//     int mid=(s+e)/2;
//     if(arr[mid]==key){
//         return mid;
//     }
//     else if(arr[mid]>key){
//         e=mid-1;
//     }
//     else{
//         e=mid+1;
//     }
// }
// return -1;

//   }
//   int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// int key;
// cin>>key;
// cout<<binarysearch(arr,n,key);
//   }



// SORTING
// //SELECTION SORT
//  int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1; j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//  } 

// //BUBBLE SORT
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         counter++;
    
//     }
//    for(int i=0;i<n;i++){
//     cout<<arr[i];
//    }
// }


// //INSERTION SORT
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++){
//         int current = arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }  
//     for(int i=0;i<n;i++){
//     cout<<arr[i];
//    }
//    cout<<endl;
// }


// //MAX TILL N
// int main(){
//     int mx=-19999;
//     int n;
//       cin>>n;
//     int arr[n]; 
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         mx=max(mx,arr[i]);
//         cout<<mx<<endl;
//     }
//     return 0;
// }


// //SUM OF ALL SUBARRAYS
// int main(){
//     int n;
//       cin>>n;
//     int arr[n]; 
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int curr=0;
//     for(int i=0;i<n;i++){
//         curr=0;
//         for(int j=i;j<n;j++){
//             curr+=arr[j];
//             cout<<curr<<endl;
//         }
//     }
// }


// //LONGEST ARITHMETIC SUBARRAY
// int main(){
//       int n;
//       cin>>n;
//     int arr[n]; 
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans=2;
//     int pd=arr[1]-arr[0];
//     int j=2;
//     int curr=2;
//     while (j<n)
//     {
//         if(pd==arr[j]-arr[j-1]){
//             curr++;
//         }
//         else{
//             pd= arr[j]-arr[j-1];
//             curr=2;
//         }
//         ans=max(ans,curr);
//         j++;
//     }
//     cout<<ans;
//     return 0;
// }


// //RECORD BREAKING DAY //TIME COMPLEXITY O(n )
//  int main(){
//       int n;
//       cin>>n;
//     int arr[n+1]; 
//     arr[n]=-1;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     if(n==1){
//         cout<<'1'<<endl;
//         return 0;
//     }
//     int ans=0;
//     int mx=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>mx && arr[i]>arr[i+1]){
//             ans++;
//         }
//         mx=max(mx,arr[i]);
//     }
//     cout<<ans;
//     return 0;
// }


// //SMALLEST REPEATING ELEMENT
// int main(){
//       int n;
//       cin>>n;
//     int a[n]; 
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     const int N=1000; //very large value as we want N to be smallest 
//     int idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]=-1;
//     }
//     int minidx=INT16_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[a[i]]!=-1){
//             minidx=min(minidx,idx[a[i]]);
//         }
//         else{
//             idx[a[i]]=i;
//         }
//     }
//     if(minidx==INT16_MAX){
//         cout<<"-1"<<endl;

//     }
//     else{
//         cout<<minidx+1;
//     }
// }    


// //SUBARRAY WITH A SUM
// int main(){
//       int n,s;
//       cin>>n>>s;
//     int a[n]; 
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int i=0,st=-1,j=0,en=-1,sum=0;
//      while(j<n && sum+a[j]<=s){
//         sum+=a[j];
//         j++; 
//      }
//      if(sum==s){
//         cout<<i+1<<" "<<j<<endl;
//         return 0;
//      }
//      while (j<n)
//      {
//         sum+=a[j];
//         while (sum>s)
//         {
//             sum-=a[i];
//             i++;
//         }
//         if(sum==s){
//             st=i+1;
//             en=j+1;
//             break;
//         }
//         j++;
//       }
//      cout<<st<<' '<<en;
//     }


// //SMALLEST POSITIVE MISSING NUMBER
// int main(){
//       int n;
//       cin>>n;
//     int a[n]; 
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     const int N=1000;
//     bool check[N];
//     for(int i=0;i<N;i++){
//         check[i]=false;
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]>=0){
//         check[a[i]]=true;
//         }
//     }
//     int ans=-1;
//     for(int i=1;i<N;i++){
//         if(check[i]==false){
//          ans=i;
//             break;
//          }
//     }
//     cout<<ans;
// }


// //PRINTING A SUBARRAY
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<a[k]<<' ';
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }


// //MAXIMUM SUBARRAY SUM
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
    
// }




// //reverse array
// #include<iostream>
// using namespace std;
//     void reverse(int arr[],int n){
//         int start=0;
//         int end = n-1;
//         while (start<=end)
//         {
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//         }
        
//     }
//     void printArray(int arr[], int n){
//         for (int i = 0; i < n; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
        
//     }
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int brr[5]={7,8,9,6,5};
//     reverse(arr,6);
//     reverse(brr,5);

//     printArray(arr,6);
//     printArray(brr,5);
//     return 0;
// }




