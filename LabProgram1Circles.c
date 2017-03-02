/*
    Developed By:SAURABH VAJRAMATTI
    USN:1SI15CS099
    Branch:COMPUTER SCIENCE AND ENGINEERING
    Semester:4
    Section:C

    Lab Program 1:
    Write a C++ program to create a class to represent entities of type Circle, specified
    by its attributes radius and coordinates of its center. Include appropriate
    Constructors and display methods. Also write a friend function that determines
    whether two circles intersect one another or they touch each other or they are
    disjoint.
*/
#include<iostream>
#include<cmath>

using namespace std;

class Circle
{
        int ix,iy;
        double dr;

        public:
            Circle ():ix(0),iy(0),dr(0)
            {
                cout<<"\nZero parameter constructor called.\n";
            }
            Circle (int x,int y,double r):ix(x),iy(y),dr(r)
            {
                cout<<"\nThree parameter constructor called.\n";
            }
            void fnDisp();
            friend void fnCheck(const Circle&,const Circle&);
};

void Circle::fnDisp()
 {
     cout<<"CIRCLE SPECIFICATIONS:\n\tCenter:("<<ix<<","<<iy<<")\n\tRadius="<<dr;
 }

void fnCheck(const Circle& a,const Circle& b)
{
    double dis=sqrt(pow((a.ix-b.ix),2)+pow((a.iy-b.iy),2));
    if(dis==a.dr+b.dr)
        cout<<"\n\nThe circles touch each other.";
    else if(dis<a.dr+b.dr)
        cout<<"\n\nThe circles intersect each other.";
    else
        cout<<"\n\nThe circles are disjoint.";

}
int main()
{
    cout<<"SAMPLE SECTION 1:\n";
    Circle c1(0,0,2),c2(0,6,4);
    cout<<"\nCircle 1:\n";
    c1.fnDisp();
    cout<<"\nCircle 2:\n";
    c2.fnDisp();
    fnCheck(c1,c2);

    cout<<"\nSAMPLE SECTION 2:\n";
    Circle c3(0,2,4),c4(0,6,4);
    cout<<"\nCircle 1:\n";
    c3.fnDisp();
    cout<<"\nCircle 2:\n";
    c4.fnDisp();
    fnCheck(c3,c4);

    cout<<"\nSAMPLE SECTION 3:\n";
    Circle c5(0,0,4),c6(0,16,4);
    cout<<"\nCircle 1:\n";
    c5.fnDisp();
    cout<<"\nCircle 2:\n";
    c6.fnDisp();
    fnCheck(c5,c6);


    return 0;
}
