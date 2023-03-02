#include <iostream> 
#include <set> 
#include <fstream>
#include <iomanip>
using namespace std; 


int main(){
    ofstream fout; 
    fout.open("output.txt");

    fout << "*****************"<<endl;
    
    //how to create an instance of a set por ejemplo s1
    set<int> s1 = {1, 2, 3, 1}; 

    //inserting an element into a set
    s1.insert(5);
    //getting rid of a an element from a set
    s1.erase(2); 

    //using find() method in <set> to find a element in a set
    if(s1.find(3) == s1.end()){
        fout << "Could not find 3" << endl;
    } else {
        fout << "Found C bruh!!" << endl; 
    }
    //how to iterate through a set and print out 
    for(auto itr = s1.begin(); itr !=s1.end(); ++itr){
        fout << *itr << endl; 
    }


    fout << "*****************"<<endl;
    //creating a test string 
    string test = "Ayyyy yo this is a test iii jj j hgahs l ";
    string find = "hello"; 
    //creating a set of chars called exists
    set<char> exists;
    set<char> findLetters; 
    //run through the string and look at the chars 
    //run from beginning of test to the end of it 
    for(int i = 0; i <test.length(); ++i){
        //test index equals letter
        //For example: If the letter is i in the index of i
        char letter = test[i];
        //insert a letter to exists set 
        exists.insert(letter);
    }

    //iterate through the set and print out 
    for(auto itr = exists.begin(); itr != exists.end(); ++itr){
        fout << *itr << endl; 
    }
    fout << "--------------------"<<endl; 
    //for loop for 
    for(int i = 0; i < find.length(); ++i){
        char letter1 = find[i];
        findLetters.insert(letter1); 
    }
    //for loop to 
    for(int i = 0; i < test.length(); i++){
        char letter1 = test[i];
        findLetters.erase(letter1); 
    }
    fout << test << endl; 
    fout << find << endl; 
    //printing out findLetters set
    for(auto itr = findLetters.begin(); itr != findLetters.end(); ++itr){
        fout << *itr << endl; 
    }
   
    if(findLetters.size() > 0){
        fout << "No! It does not have all letters!" << endl; 
    } else{
        fout << "Yes! It has all letters!"<<endl; 
    }

    fout << "*********************" << endl; 
    fout << "THE END!!!!!! ;)"<< endl; 
    fout.close(); 
}