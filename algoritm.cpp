#include <iostream>

using namespace std;

int main() {
    int n, i, j, c, d;
    cout<<"The size of the base is: ";
    cin>>n;
    c=n+1;
    d=n-1;
    for (i = 1; i <= 2*n-1; i++)
    {
        if(i%2==0)
        {
            for(j=1; j<=2*n-1; j++)
                cout<<" ";
        }
        else
        {
            for(j=1; j<=2*n-1; j++)
            {
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
                if(i!=1 && i!=2*n-1)
                {
                    if(j==c || j==d)
                        cout<<"*";
                    else
                        cout<<" ";
                }
            }
            if(i!=1 && i!=2*n-1)
            {
                c++;
                d--;
            }
        }
        cout<<endl;
    }
    
    return 0;
}