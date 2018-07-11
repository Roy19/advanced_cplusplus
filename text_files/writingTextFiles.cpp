#include <iostream>
#include <fstream>
using namespace std;

int main(){
        ofstream outFile;               // output file stream
        // or use this
        //fstream outFile1;
        const char * fileName = "test.txt";

        outFile.open(fileName);         // open the file, if it does not exists
                                        // create it
        // if fstream is used, 
        // outFile1.open(fileName, ios::out);

        if(outFile.is_open()){
                outFile << "Hello world!" << endl;
                outFile << "This is a test text file." << endl;
                outFile << 123456 << endl;
                outFile.close();        // always close the file after opening it
        }else{
                cout << "Could not open file : " << fileName << endl;
        }

        return 0;
}