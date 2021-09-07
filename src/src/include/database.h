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

    //Constructor
    Database(){

    }
    
    //Destructor
    ~Database(){

    }

    //METHODS
    void write(vector<string> list);
    void read();

};