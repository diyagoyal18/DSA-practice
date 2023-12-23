// #include<iostream>
// using namespace std;

// int main()
// {
//     // int row, col;
//     // cin>>row>>col;
//     // //***
//     // //***
//     // for (int i = 0; i <row; i++)
//     // {
//     //     for (int j = 0; j <col; j++)
//     //     {
//     //        cout<<"*";
//     //     }
//     //     cout<<endl;
//     // }
    
//     // //***
//     // //* *
//     // //***
//     // for (int i = 1; i <=row; i++)
//     // {
//     //     for(int j=1; j<=col;j++){
//     //        if(i==1 || i==row || j==1 || j==col){
//     //         cout<<"*";
//     //        }
           
//     //        else{
//     //         cout<<" ";
//     //        }
//     //     }
//     //    cout<<endl;
//     // }
//     int n;
//     cin>>n;
//     for(int i=n;i>=n;i-- ){
        
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=7)
//         {
//             cout<<n-j;
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
//     int n=3;
//     int i=1;
//    int count=1;
//     while(i<=n){
//         int j=1;
//         while (j<=n)
//         {
//         cout<<count;
//            count=count+1;
//            j=j+1;
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
//     while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             cout<<"*";
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
//     int count=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             count=i;
//             cout<<count;
//             count=count+1;
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
//     int count=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<count<<" ";
//             count=count+1;
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
//         int j=1;
//            int count=i;
//         while (j<=i)
//         {
//             cout<<count<<" ";
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n=5;
    
    int i=1;
    while (i<=n)
    {
        int j=1;
        int count =i;
        while (j<=i)
        {
            cout<<count;
            count=count-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
    return 0;
}