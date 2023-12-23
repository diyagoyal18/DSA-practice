// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<(i-j+1);
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
        
//     }
    
//     return 0;
// }


// 



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char count='A';
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<count;
//             count = count +1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space = n-i;
//         while (space)
//         {
//             cout<<" ";
//             space=space-1;
//         }
        
//         int j=1;
//         while (j<=i)
//         {
//            cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space = i-1;
//         while (space)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         int j=1;
//         while (j<=i)
//         {
//             int star = n-i+1;
//             while (star)
//             {
//                 cout<<"*";
//                 star=star-1;
//             }
            
//             j=j+1;


//         }
//         cout<<endl;
//         i=i-1;
        
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n, j=0, k=0;
    while (i>0)
    {
       while (k<n-1)
       {
        cout<<" ";
        k++;
       }
       k=0;
       while (j<i)
       {
        cout<<"*";
        j++;
       }
       j=0;
       i--;
       cout<<endl;
    }
    
    return 0;
}