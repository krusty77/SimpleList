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

vector<vector<string>> Database::read(){
    ifstream db;
    string line;

    vector<string> userList;

    db.open("db/lists.sl");

    if(db.is_open()){
        while(getline(db,line,'\n')){
            if(line.front() == '#'){
                cout <<"I found a hashtag: "<< line << "\n";
                line.erase(line.begin());
                userList.push_back(line);
            }else if(line.front() == '%'){
                cout <<"We found a percentage: " << line << "\n";
                MainList.push_back(userList);
                userList.clear();
            }else{
                cout<<"Found an item: " << line << "\n";
                userList.push_back(line);
            }
        }    
    }else{
            cout<<"Cannot open the file.\n";
    }

    db.close();

    return MainList;
}