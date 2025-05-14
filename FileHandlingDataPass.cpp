/* 14/05/25
Program to read data from one file and copy that data to another file */
/* 14/05/25
Program to read data from one file and copy that data to another file */
#include<iostream>
#include<fstream>  
using namespace std;

int main() {
    string reading_data;

    ifstream fobj("StudentData1.txt"); // input file
    ofstream fout("StudentData2.txt", ios::app); // output file (append mode)
    if (!fobj) {
    cout << "Input file not found!";
    } else {
    while (getline(fobj, reading_data)) {
    cout << "\n" << reading_data;       // Display on console
    fout << reading_data << endl;       // Write to output file
    }
    cout << "\nData copied successfully to StudentData2.txt";
    }

    fobj.close();
    fout.close();

    return 0;
}
