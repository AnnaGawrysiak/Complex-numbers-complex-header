#include <iostream>
#include <complex>

using namespace std;

std::complex <double> add(complex<double> &c1 , complex<double> &c2)
{
    return (c1+c2);
}

std::complex <double> substract(complex<double> &c1 , complex<double> &c2)
{
    return (c1-c2);
}

std::complex <double> multiply(complex<double> &c1 , complex<double> &c2)
{
    return (c1*c2);
}

std::complex <double> divide(complex<double> &c1 , complex<double> &c2)
{
    return (c1/c2);
}


int main()
{

    //std::complex<double> mycomplex1 (4.3,8.2);

    //std::cout << "Real part: " << std::real(mycomplex1) << '\n';

    //std::complex<double> mycomplex2 (3.3, 1.1 );

    std::complex<double> mycomplex1, mycomplex2; // a complex number type declaration

    double mycomoplex1R, mycomplex1I, mycomplex2R, mycomplex2I;

    cout<<"Enter the real and imaginary value of the first complex number";
    cin >> mycomoplex1R >> mycomplex1I;

    cin.ignore( );

    mycomplex1.real( mycomoplex1R ); //Assign the real value of  mycomplex1 complex as mycomoplex1R
    mycomplex1.imag( mycomplex1I ); //Assign the imaginary value of mycomplex1 complex as mycomplex1I

    cout<<"Enter the real and imaginary value of the second complex nubmer";
    cin>> mycomplex2R >> mycomplex2I;

    cin.ignore( );

    mycomplex2.real( mycomplex2R ); //Assign the real value of mycomplex2 complex as mycomplex2R
    mycomplex2.imag( mycomplex2I );

    cout<<"The sum of"<< mycomplex1  << "and" << mycomplex2 << "complex numbers =" << add( mycomplex1 , mycomplex2 ) << endl;

    cout<<"The substraction of"<< mycomplex1  << "and" << mycomplex2 << "complex numbers =" << substract(mycomplex1 , mycomplex2) << endl;

    cout<<"The multiplification of"<< mycomplex1  << "and" << mycomplex2 << "complex numbers =" << multiply(mycomplex1 , mycomplex2) << endl;

    cout<<"The division of"<< mycomplex1  << "and" << mycomplex2 << "complex numbers =" << multiply(mycomplex1 , mycomplex2) << endl;

    return 0;
}


