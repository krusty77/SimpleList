#include <iostream>
#include <vector>
using namespace std;

class List{
    private:        
    protected:
    public:
    //GLOBAL VARIABLE
    vector<string> list;
    string name;

    //Constructor
    List(){

    }
    
    //Destructor
    ~List(){

    }

    //METHODS
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();

};