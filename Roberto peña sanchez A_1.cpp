#include<iostream>

using namespace std;
int
main ()
{
  int anionacimiento, mesnacimiento, dianacimiento, anioactual, mesactual,
    diaactual, edad;
  cout << "Ingresa el aC1o de nacimiento: aC1o mes y dia" << endl;
  cin >> anionacimiento >> mesnacimiento >> dianacimiento;
  cout << "Ingresa el aC1o actual: aC1o mes y dia" << endl;
  cin >> anioactual >> mesactual >> diaactual;
  edad = anioactual - anionacimiento;
  if (mesnacimiento > mesactual)
    {
      edad = edad - 1;
    }
  else
    {
      if (mesnacimiento == mesactual)
	{
	  if (dianacimiento > mesactual)
	    {
	      edad = edad - 1;
	    }
	}
    }
  cout << "Tu edad actual es: " << edad << " aC1os";
  return 0;
}