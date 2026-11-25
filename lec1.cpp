// This repo contains reccursion from basic to advanced

// #include<iostream>
// using namespace std;

// void Counter(int count){
//     if(count==4){
//         return;
//     }
//     else{
//         cout<<count;
//         count++;
//         Counter(count);
//     }
// }
// int main(){

//         int count =0;
//         Counter(count);


//     return 0;
// }




// Print name n times using reccursion

// #include<iostream>
// using namespace std;

// void print(int i,int n){
//     if(i==n){
//         return;
//     }
//     else{
//         cout<<"Sameera";
//         i++;
//         print(i,n);
//     }
// }

// int main(){


//     int n;
//     cin>>n;

//     print(0,n);

//     return 0;

// }


// Print from 1 to n

// #include<iostream>
// using namespace std;

// void print(int i,int n){
//     if(i>n){
//         return;
//     }
//     else{
//         cout<<i<<endl;
//         print(i+1,n);
//     } 
// }
// int main(){

//     int n;
//     cin>>n;

//     print(1,n);


//     return 0;
// }


// Print from n to 1

// #include<iostream>
// using namespace std;

// void reverse(int n){
//     if(n<1){
//         return;
//     }
//     else{
//         cout<<n;
//         reverse(n-1);
//     }
// }

// int main(){

//     int n;
//     cin>>n;

//     reverse(n);


//     return 0;
// }


// #include<iostream>
// using namespace std;

// void backTrackReverse(int i,int n){
//     if(i>=n){
//         return;
//     }
//     backTrackReverse(i+1,n);
//     cout<<i<<endl;
// }


// int main(){

//     int n;
//     cin>>n;

//     backTrackReverse(0,n);


//     return 0;
// }



// Find the sum of n numbers using reccursion
// Parametre method

// #include<iostream>
// using namespace std;

// void RecSum(int n, int sum){

//     if(n<1){
//         cout<<sum;
//         return;
//     }
//     RecSum(n-1,sum+n);    

// }

// int main(){

//     int n;
//     cin>>n;
//     RecSum(n,0);

//     return 0;
// }

// Function method (Sum of n numbers)

// #include<iostream>
// using namespace std;

// int RecSum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+RecSum(n-1);
// }
// int main(){

//     int n;
//     cin>>n;

//     cout<<RecSum(n);


//     return 0;
// }


// Factorial with reccursion

// #include<iostream>
// using namespace std;

// int RecFact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*RecFact(n-1);
// }

// int main(){

//     int n;
//     cin>>n;

//     cout<<RecFact(n);
//     return 0;
// }


// Same factorial with parametre method

// #include<iostream>
// using namespace std;

// void RecFact(int n, int fact){
//     if(n==1){
//         cout << fact;
//         return;
//     }
//     RecFact(n-1,fact*n);

// }

// int main(){

//     int n;
//     cin>>n;
//     RecFact(n,1);

//     return 0;
// }