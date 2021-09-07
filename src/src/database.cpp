#include "include/database.h"

void Database::write(vector<string> list){
    ofstream db;

    db.open("db/lists.sl");

    if(db.is_open()){
        for(int i = 0; i<(int)list.size();i++){
            db << list[i] <<"\n";
        }
    }else{
        cout<<"Cannot open the file for writing. \n";
    }

    db.close();
}

void Database::read(){
    ifstream db;
    string line;
    db.open("db/lists.sl");

    if(db.is_open()){
        while(getline(db,line,'\n')){
            cout<< line <<" \n";
        }    
    }else{
            cout<<"Cannot open the file.\n";
    }

    db.close();
}