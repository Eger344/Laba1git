#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
void readFromFile(vector<string>& lines) {

}

void printLines(const vector<string>& lines) {
    for (const auto& line : lines) {
        cout << line << endl;
    }
}


void writeToFile(const vector<string>& lines) {
    ofstream outFile("aaaa.txt", ios::binary);

    for (const auto& line : lines) {
        outFile << line << endl;
    }

    outFile.close();
}



int main() {
    vector<string> lines;


    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);

    return 0;
}
