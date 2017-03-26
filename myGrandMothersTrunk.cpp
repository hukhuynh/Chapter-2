/*****************************************************************
Date: 03/26/17
Name: Huukiet Kevin Huynh
Assignment: My Grandmother's Trunk
Purpose: Work with data types, strings, concatenation, and variables.
******************************************************************/

#include <iostream>                                                     //allows output stream
#include <string>                                                       //pre-defined data type string

int main()
{
  int counter = 0;
  const string GMA_TRUNK = "In my grandmother's trunk, I packed ";
  string item;
  string str= " ";
  
  
  for(counter; counter <= 5; counter++)                                 //looop through 5 turns
  {
    if(str == " ")
    {
      std::cout<<GMA_TRUNK<<std::endl;
      cin>>item;
      str = "a " + item;
      std::cout<<str;
    }
    else
    {
      std::cout<<GMA_TRUNK<<std::endl;
      cin>>item;
      str = str + " and a " + item;
    }
  }//end for loop
  
  return 0;
  
}//end main
      
  
  
