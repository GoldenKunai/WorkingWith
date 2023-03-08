#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("vectors.txt");

    vector<string> v1 = {"blue", "red"};
    v1.push_back("black");
    v1.push_back("white");
    v1.push_back("green");

    // prints out what is in index 1 of the vector
    fout << v1[1] << endl;
    // gets the value in the front of the vector
    fout << v1.front() << endl;
    // gets the value in the back of the vector
    fout << v1.back() << endl;
    // tells us the size of the vector
    fout << v1.size() << endl;
    // tells us the current capacity the vector is
    // allocating in memory
    fout << v1.capacity() << endl;
    // pops the back value of the vector
    v1.pop_back();
    // shrinks the allocated memory capacity for the vector
    v1.shrink_to_fit();
    fout << v1.size() << endl;
    fout << v1.capacity() << endl;
    fout << "============================" << endl;
    fout << "How to Insert and Erase Elements in a Vector!!!" << endl;
    // initializing a v2 vector holding ints
    vector<int> v2 = {1, 2, 3, 4};
    // insert 5 in the beginning
    v2.insert(v2.begin(), 5);
    // insert 7 at the beginning
    v2.insert(v2.begin(), 7);
    // insert 6 in the second spot of the vector
    v2.insert(v2.begin() + 1, 6);
    // should print out 6
    fout << "This is the second spot in the Vector: " << v2[1] << endl;
    // prints the front of the vector
    fout << "This is the beginning of the Vector: " << v2[0] << endl;
    // erases the value in the beginning of the vecotr
    v2.erase(v2.begin());
    // prints out the front again
    fout << "After erase what is in the beginning of Vector: " << v2[0] << endl;
    fout << "================================" << endl;
    fout << "How to iterate through a Vector!!!!" << endl;
    fout << "Using the Vector of Ints V2={6,5,1,2,3,4}" << endl;
    fout << "[We are using size() to iterate through the list with i]" << endl;
    for (int i = 0; i < v2.size(); i++)
    {
       
            fout << v2[i] << " "; 
    
    }
    fout<<endl;
    fout << "[Iteration with itr and using built in functions in <vector>]" << endl;
    fout << "(";  
    for (auto itr = v2.begin(); itr != v2.end(); itr++)
    {
        fout << *itr << ((*itr != *v2.end()) ? ", " : ")");
    }
    fout << endl; 
    v2.insert(v2.end(), 10); 
    fout << "V2, after the insertion of 10 at the back: "<< endl; 
    fout << "(";  
     for (auto itr1 = v2.begin(); itr1 != v2.end(); itr1++)
    {
        fout << *itr1 << ((*itr1 != *(v2.end()-1)) ? ", " : ")");
    }

}