#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    float initialInv, monDeposit, AnualInt, months, years, totalAmount, intAmount, yearTotalInt;
    string input;

   cout << "********************************" << endl; //initial display
   cout << "********** Data Input **********" << endl;
   cout << "Initial Investment Amount: " << endl;
   cout << "Monthly Deposit: " << endl;
   cout << "Annual Interest: " << endl;
   cout << "Number of years: " << endl;
   cout << "Press any letter key to continue" << endl;
   cin >> input;
   

   cout << "********************************" << endl; //taking data
   cout << "********** Data Input **********" << endl;
   cout << "Initial Investment Amount: $";
   cin >> initialInv;
   cout << "Monthly Deposit: $";
   cin >> monDeposit;
   cout << "Annual Interest: %";
   cin >> AnualInt;
   cout << "Number of years: ";
   cin >> years;


   months = years * 12;//initializing
   totalAmount = initialInv; 



   cout << "Balance and Interest Without Additional Monthly Deposits" << endl; //display
   cout << "==============================================================" << endl;
   cout << "Year         Year End Balance       Year End Earned Interest" << endl;
   cout << "--------------------------------------------------------------" << endl;
 
   for (int i = 0; i < years; i++) { //yearly interest
       intAmount = (totalAmount) * ((AnualInt / 100));
       totalAmount = totalAmount + intAmount;
       cout << (i + 1) << "                 $" << fixed << setprecision(2) << totalAmount << "                       $" << intAmount << endl; //outputting amount without monthly deposits
   }

 
   cout << " " << endl; // display
   cout << "Balance and Interest With Additional Monthly Deposits" << endl;
   cout << "==============================================================" << endl;
   cout << "Year         Year End Balance       Year End Earned Interest" << endl;
   cout << "--------------------------------------------------------------" << endl;

   for (int i = 0; i < years; i++) { //calculating amount with monthly deposits
       yearTotalInt = 0;
       for (int j = 0; j < 12; j++) {
           intAmount = (totalAmount + monDeposit) * ((AnualInt / 100) / 12);
           yearTotalInt = yearTotalInt + intAmount;
           totalAmount = totalAmount + monDeposit + intAmount;
       }
       cout << (i + 1) << "                 $" << fixed << setprecision(2) << totalAmount << "                       $" << yearTotalInt << endl; //outputting amount with monthly deposits
   }
   return 0;
}