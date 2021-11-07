#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int main() {

  int numFunction;
  cout << " Welcome to Season Dater!\n\nThe purpose of Season Dater is to give the user a tool to find the season of a specific date.\n\nTo continue, please choose one of the following functions listed below:\n\n";
  cout << "To use the tool, please type: 1\n\n";
 cout << "To quit the tool, press any button other than: 1\n\n";
  cin >> numFunction;

  
  
  if( numFunction == 1 ){
  
    string inputMonth;
    int inputDay;
    
    cout << "Enter Month followed by a Day(ex. March 13):" << endl;  
    cin >> inputMonth;
    
    if(inputMonth == "done" || inputMonth == "Done")
    
    
    cin >> inputDay;
    

    if ((inputMonth == "January" ||  inputMonth == "February"  || inputMonth == "March" ||  inputMonth == "April" || inputMonth == "May" || inputMonth == "June" ||   inputMonth == "July"  ||    inputMonth == "August"  || inputMonth == "September"  ||  inputMonth == "October" || inputMonth == "November" || inputMonth == "December") && (inputDay >= 1) && (inputDay <= 31)){
    
        if ((inputMonth == "March "&& inputDay >= 20) || (inputMonth == "April") || (inputMonth == "May") || (inputMonth == "June" && inputDay <= 20)){
          cout << "Spring" << endl;
          }
          
        else if ((inputMonth == "June" && inputDay >= 21) || (inputMonth == "July") || (inputMonth == "August" ) || (inputMonth ==  "September" && inputDay <= 21)){
          cout << "Summer" << endl;
          }
          
        else if ((inputMonth == "September" && (inputDay >= 22) && (inputDay <= 30)) || (inputMonth == "October") || (inputMonth == "November" ) || (inputMonth == "December" && inputDay <= 20)){
          cout << "Autumn" << endl;
          }
          
        else if ((inputMonth == "December" && inputDay >= 20) || (inputMonth == "January" ) || (inputMonth == "February" && inputDay <= 28) || (inputMonth == "March" && inputDay <= 19)){
          cout << "Winter" << endl;
          }
          
        else {
          cout << "Please use the correct Format: Month followed by Day" << endl;  
        }
    }
  }
  else if(numFunction!=1){
    cout << "Thank you for using the tool!\n\n";
  }
return 0;
}




  
 
