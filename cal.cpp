#include<iostream>
using namespace std;
#pragma pack()
class Cal 
{  
     //defining class by named as Cal
    private:  //private modified accesser
    //data members
     float  x;
    float  y;

    public: // public modified accessor
    //member functions
    void getinfo();//take values of x an y as a input
    void display();// print the data
    int sum();  //prototype of sum
    int diff(); //prototype of difference
    int mult(); //prototype of multiplication
    float div();  //prototype of division
};// end of class defination

void Cal :: getinfo()
{   //calling getinfo
// member function using scope resolution operator
// outside the class
 cout<<"enter any two numbers :"<<endl;
 cin>>x>>y;
} 

void Cal :: display()
{
    //calling display member function using 
//scope resolution operator outside the class
    cout<<"x = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    cout<<"SUM = "<<sum()<<endl;
    cout<<"DIFF ERENCE = "<<diff()<<endl;
    cout<<"MULTIPLICATION = "<<mult()<<endl;
    cout<<"DIVISION = "<<div()<<endl;
}
int Cal :: sum()
{//defining sum using scope resolution
    return (x+y);
}
int Cal :: diff()
{//defining difference using scope resolution
    return (x-y);
}
int Cal :: mult ()
{ //defining multipication using scope resolution
    return (x*y);
}
 float Cal :: div()
{ ////defining division using scope resolution
    return (x/y);
}
int main()
{
    Cal x1;
    x1.getinfo();
    x1.display();
    x1.sum();
    x1.div();
    x1.mult();
    x1.div();
    cout<<"THE SIZE OF OBJECT(x1) IS:"<<sizeof(x1)<<endl;
    return 0;

}