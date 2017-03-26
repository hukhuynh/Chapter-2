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
  int counter = 1;
  const std::string GMA_TRUNK = "In my grandmother's trunk, I packed ";
  std::string item;
  std::string str= " ";


  for(counter; counter < 5; counter++)                                 //looop through 5 turns
  {
    std::cout<<GMA_TRUNK<<std::endl;
    if(str == " ")
    {
      std::cin>>item;
      str = "a " + item;
      std::cout<<str<<"."<<std::endl;
    }
    else
    {
      std::cin>>item;
      str = str + " and a " + item;
      std::cout<<str<<"."<<std::endl;
    }
  }//end for loop

  return 0;

}//end main
