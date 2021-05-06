#include <iostream>


// C++ recursive function to
// solve tower of hanoi puzzle

//credit to rathbhupendra

//definition of recursion: Recursion is the process of defining a problem (or the solution to a problem) in terms of (a simpler version of) itself. Simplifying a problem continously until a base answer that is used to solve upwards


#include <bits/stdc++.h>
using namespace std;
 //                    4         a            b             c
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod<<endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

//Initial run inputs                    -> 4, a, c, b
//second run                            -> 3, a, b, c
//third  run (called on second)         -> 2, a, b, c
//second run (called from third)        -> 1, a, b, c
  //outputs move disk 1 from a to b and returns in the function move disk 1 from rod A to rod b
  //outputs move disk 2 from rod a to rod c
//now back to third run for the second call of tower of hanoi -> called with 1, b, c, a
    //outputs move disk 1 from rod B to rod c

    //continues to call itself until the iterations for second run are done, then the inital run are all returned


 
// Driver code
int main()
{
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}
 