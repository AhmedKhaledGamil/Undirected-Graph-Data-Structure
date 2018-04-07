#include <map>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream inFile;
    inFile.open("C://Users//ahmed_nqedrw9//CLionProjects//DSAssignment1//graph.txt");

    ofstream outFile("C://Users//ahmed_nqedrw9//CLionProjects//DSAssignment1//output.csv");
    float x,y;
    inFile >> x;
    inFile >> y;
    map <int , int> undirectedGraph;
    float from,to;
    for (int i = 0; i < y; i++) {
        inFile >> from;
        inFile >> to;
        if(undirectedGraph.count(from) == 0){
            undirectedGraph[from] = 1;
        }
        else{
            undirectedGraph[from]++;
        }
        if(undirectedGraph[to] == 0){
            undirectedGraph[to] = 1;
        }
        else{
            undirectedGraph[to]++;
        }
    }
    for (auto i = undirectedGraph.begin() ; i != undirectedGraph.end() ; i++) {
        outFile << i->first << "," << i->second << "\n";
    }

    inFile.close();
    return 0;
}