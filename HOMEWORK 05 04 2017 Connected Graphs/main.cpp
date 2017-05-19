//
//  main.cpp
//  HOMEWORK 05 04 2017 Connected Graphs
//
//  Created by ax on 5/18/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <utility>
#include <set>
using namespace std;

int main() {

    std::cout << "Connected Graphs!\n";
    
    set<pair<int, int>> nodeSet0;
    
    
    ifstream input_file;
    input_file.open("nodes.txt");
    string s;
    pair <int, int> tmpPair (0,0);
    int i = 0;
    while (getline(input_file, s)) {
        stringstream line(s);
        
        int tmp;
        int j = 0;
        vector<int> tmp_vec;
        while (line >> tmp) {
            cout << tmp << " ";
            tmp_vec.push_back(tmp);
            j++;
        }
        
        nodeSet0.insert(make_pair(tmp_vec[0],tmp_vec[1]));
        
        i++;

    }
    
    
    
    
    
    return 0;
    
}
