#ifndef LABA7_1_HANDLE_H
#define LABA7_1_HANDLE_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#endif //LABA7_1_HANDLE_H
using namespace std;
template <typename T>
void printMatrix(T** matrix, int weidth, int height)
{
    for (int i = 0; i < weidth; i++)
    {
        for (int j = 0; j < height; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
template <typename T>
bool compareMatrix(T** matrix1, T** matrix2, int weidth, int height)
{
    bool result = true;
    for (int i = 0; i < weidth; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                result = false;
                break;
            }
        }
    }
    if(!(result= false)){
        cout<<"the matrices are not equal...";}
    else cout <<"Matrix are equal"<<endl;
    return result;
}
template <typename T>
void search(T** matrix1, int weidth, int height){
    int max=0;
    for (int i = 0; i < weidth; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (matrix1[i][j] >max)
            {
                max=matrix1[i][j];
            }
        }
    }
    cout << "Max element in the matrix: "<<max<<endl;
}
template<typename T>
void replace(T** matrix1, int weidth, int height){
    for (int i = 0; i < weidth; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (matrix1[i][j] <0)
            {
                matrix1[i][j]=0;
            }
        }
    }
}
template<typename T>
void sort(T** matrix1, int column, int string) {
    T tmp;
    int count;
    for (int col = 0; col < column; col++)              // Цикл по столбцам матрицы
    {
        count = 0;
        for (int j = 0; j < string; j++)
        {
            if (matrix1[j][col] == 0) count++;
        }
        if (count > 2)
        {
            for (int row = 0; row < string - 1; row++)      // Сортировка пузырьком
            {
                for (int i = 0; i < string - row - 1; i++)
                {
                    if (matrix1[i + 1][col] > matrix1[i][col])
                    {

                        tmp = matrix1[i][col];
                        matrix1[i][col] = matrix1[i + 1][col];
                        matrix1[i + 1][col] = tmp;
                    }
                }
            }
        }
    }
}
