// Amalia Vina ELET 2300 
//Porgram that generates a random array ranging from 15 to 20, then ask the user
// to select option from the menu

#include <iostream>
#include <stdlib.h>   
#include <time.h>
using namespace std;

int main()// start program
{
   int array[10];// array of 10 numbers
   srand (time(NULL));    //create random integer in the range of 15 through 20
   //and store them in array
   int a=15;
   int b=20;

for(int i=0;i<10;i++)// loop
{
   array[i]=a + rand() % (b + 1 -a);//display random numbers from array
   }
cout<<"Random numbers are: "<<endl;
   
   for(int i=0;i<10;i++)
{
   cout<<array[i]<<" ";
   }
  
   int flag;
   int sum;
  
   while(1)
   {
 
   cout<<endl<<endl<<"Menu options: ";  //display menu options
   cout<<endl<<"[P]osition\n[R]everse\n[A]verage\n[S]earch\n[Q]uit\n"; 
   cout<<endl<<"Please select an option: ";// ask user to enter option
   char option;
   cin>>option;//read user option
   
   switch(option)// based on selection 
   {
      
       case 'P':
       case 'p': //p or P : Display position and value pairs from array
           cout<<endl<<"Position and value pairs: "<<endl;
           for(int i=0;i<10;i++)
       {
           cout<<"("<<i<<","<<array[i]<<") ";
           }
           break;
       
       case 'R':
       case 'r'://r or R : Display array elements in reversed order
           cout<<endl<<"Reversed version of the array is: "<<endl;
           for(int i=9;i>=0;i--)
       {
           cout<<array[i]<<" ";
           }
           break;  
       
       case 'A':
       case 'a'://a or A : calculate and display the average of all array elements
           sum=0;
           //find sum
           for(int i=0;i<10;i++)
       {
           sum+=array[i];
           }
          
           cout<<endl<<"Average of array elements is: "<<sum/10.0; //display average
           break;
      
       case 'S':
       case 's': //s or S : Search an integer
           int num;
          
           cout<<endl<<"Enter an integer number to search: "; //read integer from user
           cin>>num;
           flag=0;
        
           for(int i=0;i<10;i++)   //search entire array
       {
           
           if(array[i]==num)//if found, display the position
           {
               flag+=1;
               cout<<endl<<"Found at: "<<i;
               }
           }
       
           if(flag==0)//not found case
           {
               cout<<endl<<"Element not found";
           }
           break;

       case 'q':
       case 'Q': cout<<"You requested to exit program";           //q or Q : Quit execution
       exit(0);
   }
}
return 0;
}
  