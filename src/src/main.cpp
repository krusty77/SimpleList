#include "include/list.h"
#include "include/database.h"

//MAIN

int main (int arg_count, char* args[]){//argument 0 is the name of the program
    List simpleList;
    Database data;

    if(arg_count > 1 ){
        
        simpleList.name = string(args[1]);
        simpleList.mainList = data.read();           
        simpleList.find_userList();
        simpleList.print_menu();
    }else{
        cout<< "Username not supplied ... exiting the program" <<endl;
    }   
    return 0; 
}
