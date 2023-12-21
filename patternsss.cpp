#include <iostream>
using namespace std;

//  123
//  456 
//  789
/*
int main() {
    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while(i<=n){
        int j = 1;
        while (j<=n)
        {
        cout<<count<< " ";
        count = count + 1;
        j = j + 1;

        }
        cout<<endl;
        i = i + 1;
    }

}
*/
// starrs with left side triangle
/*
int main(){
    int n;
    cin>> n;

    int row = 1;

    while(row<=n){
        int col = 1;
        while (col<=row)
        {
            cout<<"*";
            col = col + 1;
        }
         cout<<endl;
         row = row + 1;
    }
}

*/

// count of no. acc to row.
/* 
int main(){

    int n;
    cin >> n;

    int row = 1;
    int count = 1;
    while(row <= n){

        int col = 1;

        while(col<=row){
            cout<<count;
            count = count  + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }
}
*/

/* 
/ book..
int main(){

    int n;
    cin>>n;

    int row = 1;
    
    while(row <= n){

        int col = 1;
        int value = row;
        while(col<=row ){
            cout<<value;
            value = value +1;
            col = col + 1;
        }
    cout<< endl;
    row = row + 1;
    }
}
*/

/* 
int main(){

    int n;
    cin>>n;

    int i= 1;   
    
    while(i<=n){
        int j = 1;

        while(j<=i){
            cout<<(i-j+1);  
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}

*/

/*

int main(){

    int n;
    cin>>n;

    int row =1 ;
    while(row <=n){

        int col =1 ;

        while (col<=n)
        {
        char ch= 'A' + row - 1;
        cout<<ch;
        col = col + 1;
        }
        cout<< endl;
        row = row + 1;

    }
}
*/

/* 
int main(){

    int n;
    cin>>n;

    int i= 1;
    
    while(i<=n){
        int j= 1;
        char start ='A'+ n - i;
        while(j<=i){

            cout<<start;
            start =start + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;

    }
}
*/

int  main(){

    int n;
    cin>>n;

    int i = 1;

// space print karo
    while(i<=n){
        char ch = n - i + 1;
        int space = ch;
        while (space)
        {
            cout<<" ";
        space = space - 1 ;
        }
        
  // starprint karo

        int j = 1;
        while(j<=i){
            cout<<"*";
         j = j + 1; 
        }
        cout<<endl;
         i = i + 1;
         
    }

    
}