#include <iostream>
#include <cstdlib>
using namespace std;

void programOverview ();
char getScale ();
float getDegree ();
float convertFtoC (float);
float convertCtoF (float);
void getResults ();

int main ()
{programOverview ();

  float degree = getDegree ();
  char scale = getScale();
  float Ftemp, Ctemp; //we need to define Ftemp and Ctemp
  {
  if (scale == 'F')
    {
      Ctemp = convertFtoC(degree); //we need to store the converted temp into Ctemp
      Ftemp = degree; // we also need to store the origonal temp into Ftemp
    }
  else if (scale == 'C')
    {
      //here we do the opposite of above
      Ftemp = convertCtoF(degree); //store the conversion into Ftemp (instead of Ctemp)
      Ctemp = degree; //store origonal into Ctemp (instead of Ftemp)
    }
  else
    cout << "ERROR: Invalid temperature scale" << endl;
    exit (EXIT_FAILURE);
  }
  //now Ftemp and Ctemp have been assigned the proper values
  // you can pass them to the getResults function
void  getResults(float Ftemp, float Ctemp);


  return 0;
}

//This function displays a brief overview explaining the program to the user
void programOverview ()
{
  cout << "This program will convert a temperature reading provided in" << endl;
  cout << "either Fahrenheit or Celsius to the other measurement scale." << endl;
}

//This function requires the user to enter the temperature scale to be used
char getScale ()
{
  char scale;
  cout << "Enter the letter of the temperature scale that will be used:" << endl;
  cout << "F = Fahrenheit; C = Celsius)" << endl;
  cin >> scale;
  return scale;
}

//This function requires the user to enter the temperature reading in degrees
float getDegree ()
{
  float degree;
  cout << "Enter your temperature reading in degrees:" << endl;
  cin >> degree;
  return degree;
}

//This function converts a Fahrenheit temperature to Celsius
float convertFtoC (float Ftemp)
{
  float Ctemp;
  Ctemp = (Ftemp - 32) / 1.8;
  return Ctemp;
}

//This function converts a Celsius temperature to Fahrenheit
float convertCtoF (float Ctemp)
{
  float Ftemp;
  Ftemp = 1.8 * Ctemp + 32;
  return Ftemp;
}

//This function displays the results
void getResults (float Ftemp, float Ctemp) //Ftemp and Ctemp should be parameters,
  // that way their values are input.
  // Just remember to pass the temps to the function when you invoke it.
{
  cout << "Your temperature reading converts as follows:" << endl;
  cout << "Fahrenheit:" << Ftemp << endl;
  cout << "Celsius:" << Ctemp << endl;
}

