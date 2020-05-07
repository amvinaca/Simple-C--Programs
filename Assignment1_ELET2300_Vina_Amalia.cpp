/******************************************************************************
Amalia Vina ELET 2300 Asseignment #1
Problem: Compute each employee’s pay based on that employee’s paycode. 
*******************************************************************************/

#include <iostream>// header file to input and output services
#include <iomanip>// defines the manipulator functions
using namespace std;// to define cout, cin, and others. 

int main()// program starts
{
    //Variable declaration
    int codeType, managers =0, hourlyWorkers=0, CommissionW=0, Pieceworkers=0;
    double hourlySalary, totalOfHours, grossSales, hwTotal, weeklySalary,itemsProduced,
    PayPerItem, totalPay;
    
   while (codeType!=-1)// loop used to iterate until user enters -1
   {
   cout<<"Enter paycode (-1 to end): ";// Statement used to ask user for code
   cin>>codeType;// assigns user's entry to codeType variable
   if (codeType<-1||codeType>4||codeType==0)// Check if wrong entry and ask user to try again
    {
    cout<<"Wrong entry. Please try again. "<< endl;
    }
    else 
    {
    
   switch (codeType)// starts of switch statement to output the selected employee's pay
   {
    case 1:
    {   cout<<"Manager worker selected. "<<endl;// outputs choice based on code selected
        managers++;// to count how many times case 1 is used
        cout<<"Enter weekly salary:  ";// asks user info.
        cin>> totalPay;//assigns user's entry to totalPay variable
        cout<<"Manager's pay is: $"<<fixed << setprecision(2)<<totalPay<<endl;// outputs pay with two decimal places
        break;
    }
    case 2:
    {   cout<<"Hourly worker selected. "<<endl;// outputs choice based on code selected
        hourlyWorkers++;// to count how many times case 2 is used
        cout<<"Enter hourly salary: ";// asks user info.
        cin>> hourlySalary;//assigns user's entry to hourlySalary variable
        cout<< "Enter the total of hours worked: ";// asks user info.
        cin>> totalOfHours;//assigns user's entry to totalOfHours variable
        if (totalOfHours>40)// calculates totalOfHours based on how many hours the employee did.
        {
            totalPay= (hourlySalary*40)-(totalOfHours-40)*1.5;//if more than 40 hours
        }
        else
        {
            totalPay=hourlySalary*totalOfHours;// if 40 hours or less
        }
        cout<< "Worker's pay is: $"<<fixed << setprecision(2)<<totalPay<< endl;// outputs pay with two decimal places
        break;
    }
    case 3: 
    {   cout<< "Commission worker selected. "<<endl; // outputs choice based on code selected
        CommissionW++;// to count how many times case 3 is used
        cout<<"Enter gross weekly sales: "; // asks user info.
        cin>>grossSales;//assigns user's entry to grossSales variable
        totalPay=250+(0.057*grossSales);// calculates total pay based on user's entry
        cout<< "Commission worker's pay is: $"<<fixed << setprecision(2)<<totalPay<<endl;// outputs pay with two decimal places
        break;
    }
    
    case 4:
    {   cout<< "Pieceworker selected. "<<endl;  // outputs choice based on code selected
        Pieceworkers++;// to count how many times case 4 is used
        cout<< "Enter number of items produced: "; // asks user info
        cin>>itemsProduced;//assigns user's entry to itemsProduced variable
        cout<<"Enter pay for each item: "; // asks user info
        cin>>PayPerItem;//assigns user's entry to PayPerItem variable
        totalPay= itemsProduced*PayPerItem;// calculates total pay based on user's entry
        cout<< "Pieceworker's pay is: $"<<fixed << setprecision(2)<<totalPay<<endl;// outputs pay with two decimal places
        break;
    }
    
    default: 0;
    }
     }
   }
    
    //Outputs the summary with how many employees where pay by category
    cout<<"Summary of Payouts "<<endl;
    cout<<"Employee Categories Number Paid"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"Managers "<<managers<<endl;
    cout<<"Hourly Workers "<<hourlyWorkers<<endl;
    cout<<"Commission Workers "<<CommissionW<<endl;
    cout<<"Piece Workers "<<Pieceworkers<<endl;
    
    return 0;// exit program
}
