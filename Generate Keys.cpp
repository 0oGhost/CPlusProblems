#include <iostream>
using namespace std;

short ReadManyKeys()
{
    short ManyKeys;
    cout << "How Many Keys? ";
    cin >> ManyKeys;
    return ManyKeys;
}

short RandomNumber(short From, short To)
{
    int RandNum = rand () % (To - From + 1) + From;
    return RandNum;
}

void RandomKeys(short ManyKeys)
{
    for(int i = 1; i <= ManyKeys; i++)
    {
        cout << "Key [" << i << "]: ";
        for (int j = 1; j <= 4; j++)
        {
            for (int k = 1; k <= 4; k++)
            {
                cout << char(RandomNumber(65, 90));
            }
            if (j != 4)
            cout << "-";
        }
        cout << endl;
    }
}


int main()
{
    srand((unsigned) time(NULL));

    RandomKeys(ReadManyKeys());
    return 0;
}
