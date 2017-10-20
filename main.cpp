#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int col;
    int row;
    cout << "Enter rows and columns of stars:" << endl;
    cin >> row >> col;
    if (row <=0 || col <=0)
    {
        return 0;  
    }
    else
    {
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
    }

    return 0;
}
