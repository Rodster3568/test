#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Handle.h"
using namespace std;
int main() {
    srand(time(0));
    int weidth, height;
    do{
        cout <<"Enter a weidth of the array(<=10): ";
        cin >> weidth;
        if(weidth>10||weidth<2){
            cout << "Please repeat try.";}
        cout <<"Enter a height of the array(<=10): ";
        cin >> height;
        if(height>10||height<2) {
            cout << "Please repeat try.";}

    }while(!(weidth>2&&height>2&&weidth<=10&&height<=10));
    int **matrix1;
    matrix1 = new int*[weidth];
    for ( int i = 0; i < weidth; i++){
        matrix1[i] = new int[weidth];
    }
    for ( int i = 0; i < weidth; i++) // ввод
        for ( int j = 0; j < height; j++)
        {
            matrix1[i][j] = -50 +rand() % 100;
        }
    int **matrix2;
    matrix2 = new int*[weidth];
    for ( int i = 0; i < weidth; i++){
        matrix2[i] = new int[weidth];
    }
    for ( int i = 0; i < weidth; i++) // ввод
        for ( int j = 0; j < height; j++)
        {
            matrix2[i][j] = -50 +rand() % 100;
        }
    int x;
    int flag=0;
    while(flag==0){
        cout << "\tMenu"<<endl;
        cout<<"1. Print tme matrix."<<endl
        <<    "2. Matrix comparison"<<endl
        <<    "3. The maximum element in the matrix"<<endl
        <<    "4. Replacing all negative elements in the matrix with zeros"<<endl
        <<    "5. Sorting columns containing more than two null elements in descending order"<<endl
        <<    "6. Exit"<<endl;
        cout << "Select an action: ";
        cin>> x;
    if(x==1){
        printMatrix(matrix1, weidth,height);
        cout << endl;
        printMatrix(matrix2, weidth,height);
        cout << endl;
        continue;
    }
    if(x==2){
        cout << "Compare matrix1 and matrix2: " << compareMatrix(matrix1, matrix2,weidth,height);
        cout << endl;
        continue;
    }
    if(x==3){
        search(matrix1, weidth,height);
        search(matrix2, weidth,height);
        cout<<endl;
        continue;
    }
    if(x==4){
        replace(matrix1, weidth,height);
        printMatrix(matrix1, weidth,height);
        cout << endl;
        replace(matrix2, weidth,height);
        printMatrix(matrix2, weidth,height);
        cout<<endl;
        continue;
    }
    if(x==5){
        sort(matrix1, height,weidth);
        printMatrix(matrix1, weidth,height);
        cout << endl;
       sort(matrix2, height,weidth);
        printMatrix(matrix2, weidth,height);
        cout << endl;
        continue;
    }
    if(x==6){
       cout << "Logging out...";
        break;
    }
}}