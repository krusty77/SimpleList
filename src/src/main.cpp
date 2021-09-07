#include "include/list.h"
#include "include/database.h"

//MAIN

int main (int arg_count, char* args[]){//argument 0 is the name of the program
    List simpleList;
    Database data;

    if(arg_count > 1 ){
        simpleList.name = string(args[1]);
        simpleList.print_menu();
         data.write(simpleList.list);
         data.read();
    }else{
        cout<< "Username not supplied ... exiting the program" <<endl;
    }   
    return 0;
}
