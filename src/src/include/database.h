#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database{
    private:        
    protected:

    public:
    //GLOBAL VARIABLE
    vector<string> list;
    string name;

    //Constructor
    Database(){

    }
    
    //Destructor
    ~Database(){

    }

    //METHODS
    void write();
    void read();

};