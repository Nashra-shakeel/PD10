#include <iostream>
using namespace std;
int direction(int n,string dir[]);
main()
{
    int n;
    cout << "Give number of directions you eant to enter: ";
    cin >> n;
    string dir[n];
    cout << "Enter directions (left or right), one per line :"<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> dir[i];
    }
    int deg=direction(n,dir);
    cout << "There will be " << deg << " rotations. ";
}
int direction(int n,string dir[])
{
    int count=0,j;
    for (j=0;j<n;j++)
    {
        if (dir[j]=="right")
        {
            count +=90;
        }
        else if (dir[j]=="left")
        {
            count -=90;
        } 
    }
    int deg;
    deg = abs(count)/360;
    return deg;
}
