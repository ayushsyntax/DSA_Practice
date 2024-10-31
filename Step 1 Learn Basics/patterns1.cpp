#include <iostream>
using namespace std;

void pattern(int n) {
    for (int i = 0; i <= n; i++) {         // Outer loop: start from n and decrement
        for (int j = 0; j <= n; j++) {     // Inner loop: print i asterisks
            cout <<" * ";
        }
        cout << "\n";                      // Move to the next line after each row
    }
}
void pattern1(int n)
{
    for (int i = 0; i < n; i++) {               // Loop for each row
        for (int j = 0; j < n - i - 1; j++) {   // Print leading spaces
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {   // Print asterisks
            cout << "*";
        }
        cout << "\n";                           // Move to the next line
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++) {             // Loop for each row
        for (int j = 0; j < i; j++) {         // Print leading spaces
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) { // Print asterisks
            cout << "*";
        }
        cout << "\n";                        // Move to the next line
    }
}
void pattern3(int n)
{
    for (int i = 0; i < n; i++) {               // Loop for each row
        for (int j = 0; j < n - i - 1; j++) {   // Print leading spaces
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {   // Print asterisks
            cout << "*";
        }
        cout << "\n";                           // Move to the next line
    }
    for (int i = 0; i < n; i++) {             // Loop for each row
        for (int j = 0; j < i; j++) {         // Print leading spaces
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) { // Print asterisks
            cout << "*";
        }
        cout << "\n";                        // Move to the next line
    }
}
void pattern4(int n)
{
    for (int i=1;i<=2*n-1;i++)
    {
        int star =i;
        if (i>n) star = 2*n-i;
        for (int j=1;j<=star;j++)
        {
            cout<<"*";

        }
        cout<<"\n";
    }
}
void pattern5(int n)
{   int start =1;
    for (int i=0;i<=n;i++)
    {
        if (i%2==0) start =1;
        else start =0;
        for (int j=0;j<=i;j++)
        {
            cout<<start;
            start = 1-start;
        }
        cout<<"\n";
    }
}
void pattern6(int n)
{   
    {
      // initial no. of spaces in row 1.
      int spaces = 2*(n-1);
      
      // Outer loop for the number of rows.
      for(int i=1;i<=n;i++){
          
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          // for printing spaces in each row
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          // for printing numbers in each row
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          
          // As soon as the numbers for each iteration are printed, we move to the
          // next row and give a line break otherwise all numbers
          // would get printed in 1 line.
          cout<<endl;
          
          // After each iteration nos. increase by 2, thus
          // spaces will decrement by 2.
          spaces-=2;
      }
}
    
}
void pattern7(int n)
{   int num=1;
    for (int i =1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;

        }
        cout<<"\n";
    }
}
void pattern8(int n)
{   char a=65;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            cout<<a;
            a++;
        }
        cout<<"\n";
    }
}
void pattern9(int n)
{
    for (int i=0;i<n;i++)
    {
        for (char ch='A';ch <= 'A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}
void pattern10(int n)
{
    for (int i=0;i<n;i++)
    {
        for (char ch='A';ch <= 'A'+ n-i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}
void pattern11(int n)
{
    for (int i=0;i<n;i++)
    {   char ch ='A'+ i;
        for (int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}
void pattern12(int n)
{
    // Outer loop for the number of rows.
      for(int i=0;i<n;i++){
          
          // for printing the spaces.
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          
          // for printing the characters.
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
          
          // for printing the spaces again after characters.
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
          
      }
}
void pattern13(int n)
{
    // char a=65;
      for (int i = 1; i <= n; i++) {
        // Start character 'E' and decrease in each row
        char ch = 'E' - (i - 1);
        
        for (; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        
        cout << "\n";
    }
}
void pattern14(int N)
{
      // for the upper half of the pattern.
      
      // initial spaces.
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
      // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
}
void pattern15(int n)
{
      // initialising the spaces.
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
      
}
void pattern16(int n)
{
     // outer loop for no. of rows.
     for(int i=0;i<n;i++){
         
         // inner loop for printing the stars at borders only.
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
                
             // if not border index, print space.
             else cout<<" ";
         }
         
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
     }
      
}
void pattern17(int n)
{
     // Outer loop for no. of rows
     for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         // As soon as the numbers for each iteration are printed, we move to the
         // next row and give a line break otherwise all numbers
         // would get printed in 1 line.
         cout<<endl;
     }
      
}

int main() {
    int t;
    cin >> t;                             // Read the number of test cases
    for (int i = 0; i < t; i++) {
         int n;
        // int N;
        // cin>>N;
        cin >> n;                         // Read the size of the pattern
        // pattern1(n);
        // pattern2(n);                       // Print the pattern
        cout<<"\n";
        pattern17(n);
        cout << "\n";                    // Print a newline for separation between test cases
    }
    return 0;
}
