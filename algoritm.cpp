/*This algorithm is built to draw a simple tree in the terminal/console
with the '*' character*/

#include <iostream>

using namespace std;

int main() {
    int n, i, j, c, d;
    cout<<"The size of the base is (units): "; //the user determines the size of the drawing
    cin>>n;
    //we initialize the gap
    c=n+1;
    d=n-1;
    
    //here is where the algorithm happens
    for (i = 1; i <= 2*n-1; i++)
    {
        // after every line with a piece of the drawing we have an empty line
        if(i%2==0)
        {
            for(j=1; j<=2*n-1; j++)
                cout<<" ";
        }
        else
        {
            for(j=1; j<=2*n-1; j++)
            {
                //we create particular cases containing the first and last line
                if(i==1)
                    if(j==n)
                        cout<<"*";
                    else
                        cout<<" ";
                if(i==2*n-1)
                    if(j%2==1)
                        cout<<"*";
                    else
                        cout<<" ";
                //for the other lines where we have a gap between characters
                if(i!=1 && i!=2*n-1)
                {
                    if(j==c || j==d)
                        cout<<"*";
                    else
                        cout<<" ";
                }
            }
            //We increase the gap between two characters
            if(i!=1 && i!=2*n-1)
            {
                c++;
                d--;
            }
        }
        //we jump to the next line
        cout<<endl;
    }
    
    return 0;
}