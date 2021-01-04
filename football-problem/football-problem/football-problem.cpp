#include <iostream>
#include <fstream>
#include <vector>

int solveMax(int k, int m, int n);
int solveMin(int k, int m, int n);


int main()
{
    std::ifstream inFile;
    inFile.open("SmallSample.txt");
    int numSamples;

    std::vector<int> k; //Goli mostva A
    std::vector<int> m; //Goli mostva B
    std::vector<int> n; //Stevilo tekem

    //Branje iz datoteke
    if (inFile.is_open()) {
        int indexer = 0;
        int kR, mR, nR;
        inFile >> numSamples;

        while (inFile >> kR >> mR >> nR) {
            k.push_back(kR);
            m.push_back(mR);
            n.push_back(nR);
        }
    }
    else {
        std::cout << "FAkka u\n";
        return 0;
    }

    //Datoteka v katero bomo zapisali rezultate
    std::ofstream outFile;
    outFile.open("result.txt");

    //Sprehod skozi vse tekme
    for (int i = 0; i < numSamples; i++) {

        //Resitev za maximalno stevilo tock
        int max = solveMax(k[i], m[i], n[i]);

        //Resitev za minimalno stevilo tock
        int min = solveMin(k[i], m[i], n[i]);

        outFile << max << " " << min << std::endl;
    }


}


int solveMax(int k, int m, int n) {

}

int solveMin(int k, int m, int n) {

}