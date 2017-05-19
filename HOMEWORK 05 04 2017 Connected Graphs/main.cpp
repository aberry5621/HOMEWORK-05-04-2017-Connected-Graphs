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
    // node set of pairs to hold incoming node values
    set<pair<int, int>> nodeSet0;
    // set up input file
    ifstream input_file;
    input_file.open("nodes.txt");
    string s;
    pair <int, int> tmpPair (0,0);
    // read each line in
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
        // insert the pair to original node set
        nodeSet0.insert(make_pair(tmp_vec[0],tmp_vec[1]));

    }
    
    cout << "nodeSet0, size is " << nodeSet0.size() << " and contains:";
    for (set<pair<int, int>>::iterator it=nodeSet0.begin(); it!=nodeSet0.end(); ++it) {
        tmpPair = *it;
        cout << tmpPair.first << "," << tmpPair.second << endl;
    }
    
    vector<set<pair<int, int>>> nodeSets;
    int nodeSetsCount = 0;
    
    
    
    set<pair<int, int>> tmpSet;
    
    while (nodeSet0.size() > 1) {
        //
        set<pair<int, int>>::iterator it=nodeSet0.begin();
        ++it;
        
        nodeSetsCount = static_cast<int>(nodeSets.size());
        
        tmpPair = *it;
        
        // if node set count is zero, first set
        if (nodeSetsCount == 0) {
            
            nodeSets.push_back(tmpSet);
            
            nodeSets[0].insert(make_pair(tmpPair.first, tmpPair.second));
            
            nodeSet0.erase(it); // do erase after placing, but place first
            
        } else if  (nodeSetsCount > 0) {
            // node sets count is greater than 0 - check in node matches

            
            cout << "Node Sets Count Greater than 0" << endl;
            
            cout << "current iterator pair is: "  << tmpPair.first << "," << tmpPair.second << endl;
            
        }
        
        
        
        
        

    }
    
    
    
    
    return 0;
    
}
