#include "include/list.h"

//MAIN

int main (int arg_count, char* args[]){//argument 0 is the name of the program
    if(arg_count > 1 ){
        List simpleList;

        simpleList.name = string(args[1]);
        simpleList.print_menu();
    }else{
        cout<< "Username not supplied ... exiting the program" <<endl;
    }
    return 0;
}
