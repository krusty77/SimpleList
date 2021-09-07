#include "include/list.h"

//PRINT_MENU
void List::print_menu(){
    int choice;
    cout<< "*************************\n";
    cout<< "1 - Print List \n";
    cout<< "2 - Add to List \n";
    cout<< "3 - Delete List \n";
    cout<< "4 - Quit List \n";
    cout<< "Enter your choice and press return: ";

    cin>>choice;

    if(choice == 4){
        return;
    }else if(choice ==2){
        add_item();
    }else if(choice ==3){
        delete_item();
    }else if(choice ==1){
        print_list();
    }else{
        cout<<"Sorry choice not implemented yet\n";
    }
}

//ADD_MENU
void List::add_item(){
    cout<<"\n\n\n\n\n\n\n";
    cout<<"Add an item \n";
    cout<<"TYpe in an item and press enter: ";

    string item;
    cin>>item;

    list.push_back(item);

    cout<<"Successfully added \n\n\n";

    cin.clear();

    print_menu();
}

//DELETE_MENU
void List::delete_item(){
    cout<<"\n\n\n\n\n\n\n";
    cout<<"Delete an item \n";
    cout<<"Select an item index number to delete: \n";
    
    if(list.size()){
        for(int i = 0; i<(int)list.size();i++){
            cout<< i <<": " << list[i] <<"\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
    }else{
       
        cout<<"No items to delete...\n";     
    }

    print_menu();
}

//PRINT_MENU
void List::print_list(){
    cin.clear();
    cout<<"\n\n\n\n\n\n\n";
    cout<<"Printing list \n";
    for(int i = 0; i<(int)list.size();i++){
            cout<< " * "<< list[i] <<"\n";
        }

    cout<<"M - Menu \n";
    char choice;
    cin>>choice;

    if(choice == 'M' || choice == 'm'){
        cin.clear();
        print_menu();
    }else{
        cin.clear();
        cout<<"Invalid choice quitting... \n";
    }
}

