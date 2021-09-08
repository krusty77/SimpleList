#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database{
    private:        
    protected:

    public:
    //GLOBAL VARIABLE
    string name;
    vector<vector<string>> mainList;

    //Constructor
    Database(){

    }
    
    //Destructor
    ~Database(){

    }

    //METHODS
    void write(vector<vector<string>> MainList);
    vector<vector<string>> read();

};