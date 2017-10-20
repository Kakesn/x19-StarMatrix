#include <iostream>
#include <vector>

using namespace std;

int main()
{ 

    vector < vector < char > > Matrix;
    int row;
    int col;
    char star;

    cout<<"Enter rows and columns of stars:" <<endl;
    cin>> row;
    cin>> col;

    if(row > 0 && col > 0)
    {
        Matrix.resize(row);
        for(int i = 0; i < row; i++)
        {
            Matrix.resize(col);
            for(int j = 0; j < col; j++)
            {
                cout<< '*';
            }   cout<< endl;
        }
    }


return 0;
}
