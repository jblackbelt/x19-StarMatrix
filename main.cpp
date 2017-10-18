#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int col;
    int row;
    cout << "Please insert # of rows then # of colums" << endl;
    cin >> row >> col;
    vector < vector < char > > vec ( row , vector < char > (col) ) ;
    for ( int i = 0; i<row ; i++)
    {
        for ( int x = 0; x<col; x++)
        {
            vec[i][x] = '*';
        }
        
    }
    for ( int i = 0; i<row ; i++)
    {
        for ( int x = 0; x<col; x++)
        {
            cout << vec[i][x];
        }
        cout << endl;
    }


    return 0;
}
