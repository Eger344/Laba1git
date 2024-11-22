#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
void readFromFile(vector<string>& lines)
{
    ifstream in;
    in.open("ggg.txt");
    if(in.is_open()){
        cout << "open";
    }

}

void printLines(const vector<string>& lines) {

}

void writeToFile(const vector<string>& lines) {

}

int main() {
    vector<string> lines;

    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);

    return 0;
}
