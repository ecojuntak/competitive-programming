#include <iostream>

#define N 5
#define M 5

void printHemisphere(int matrix[N][M], int n, int m)
{
    int mid = n / 2;
    for(int i = 1; i < mid; i++)
    {
        for (int j = n - i; j < m; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for(int i = mid; i < n - 1; i++)
    {
        for (int j = i + 1; j < m; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

int main(int argc, char const *argv[])
{
     int matrix5[N][M] =
     {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
     };


    printHemisphere(matrix5, N, M);

    return 0;
}
