#include<iostream>
#include <math.h>
using namespace std;

// Distance between the points
void Segment(int x1, int y1, int x2, int y2){
    float segment;

    segment = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout<<"The distance between the two points is: "<<segment;
}

// Angular coefficient of the line
float AngularCoefficient (int x1, int y1, int x2, int y2){
    float m;

    m = float((y2 - y1)) / float((x1 - x2));

    if((y2 - y1) < 0 || (x2 - x1) < 0 && (y1 - y2) < 0 || (x1 - x2) < 0){
        m *= -1;
    }
    cout<<"The angular coefficient is: "<<y2 - y1<<" / "<<x2 - x1<<" or "<<m<<endl;
    return m;
}

// Equation of the line
void EquationLine (int x1, int y1, int x2, int y2, float m){
    float q; // intersection with the Y axis
    cout<<"To find the equation of a straight line passing through two points, use the formula: y = mx + q"<<endl;

    q = float(((x1 * y2) - (x2 * y1))) / float((x1 - x2));

    if(q > 0)
        cout<<"The equation is: y = "<<m<<"x + "<<q;

    if(q < 0)
        cout<<"The equation is: y = "<<m<<"x - "<<-q;

}

void MidPoint(int x1, int y1, int x2, int y2, float &xpm, float &ypm){
    xpm = float((x1 + x2)) / 2;
    ypm = float((y1 + y2)) / 2;
    cout<<"The midpoint is M("<<xpm<<" ; "<<ypm<<")"<<endl;
}

int main (){

    int x1, y1; // 1st coordinates
    int x2, y2; // 2nd coordinates
    float xpm, ypm; // midpoint coordinates
    int index; // index of the menu

    cout<<"Enter the x and y coordinates of the first point: ";
    cin>>x1>>y1;

    cout<<endl<<"Enter the x and y coordinates of the second point: ";
    cin>>x2>>y2;

    cout<<endl<<"What do you want to do?"<<
    endl<<"(1) Know the length of the segment AB"<<
    endl<<"(2) Know the angular coefficient of the line passing through A and B"<<
    endl<<"(3) Know the equation of the line passing through A and B"<<
    endl<<"(4) Know the midpoint of segment AB"<<endl<<endl;

    do{
        cin>>index;
    }while(index < 1 || index > 4);

    cout<<endl;

    if(index == 1){
        Segment(x1,y1,x2,y2);
    }
    if(index == 2){
        float m = AngularCoefficient(x1,y1,x2,y2);
    }
    if(index == 3){
        float m = AngularCoefficient(x1,y1,x2,y2);
        EquationLine(x1,y1,x2,y2,m);
    }
    if(index == 4){
        MidPoint(x1,y1,x2,y2,xpm,ypm);
    }

    cout<<endl;

}