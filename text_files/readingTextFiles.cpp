#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
        ifstream inFile;               // input file stream
        // or use this
        //fstream inFile;
        const char * fileName = "test.txt";

        inFile.open(fileName);         // open the file for reading, if it does 
                                       // not exists give an error
        // if fstream is used, 
        // inFile.open(fileName, ios::in);

        if(inFile.is_open()){
                string line;
                while(inFile){
                        getline(inFile, line);
                        cout << line << endl;
                }
                inFile.close();        // always close the file after opening it
        }else{
                cout << "Could not open file : " << fileName << endl;
        }

        return 0;
}