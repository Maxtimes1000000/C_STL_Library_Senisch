//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_Senisch

create a single main.cpp that contains code samples and implementations of each of the following topics 

Vectors
Vectors as class members
STL iterators
Stack
Set
Pair Structure
Map Insert
Map Summary
Sort Algorithm
Predicate Algorithm

Description: Writing given code and attempt to understand it. Add comments of what is going on with each piece. Follow along with what the code is doing in an attempt to begin to understand the process.
*/
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  //speccified that vector<int> vec is a private 
    vector<int> vec; 
  public: 
    MyClassVector1 (vector<int> v)  //parameterized constructor
    { 
      vec = v; 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
      {
        cout << vec[i] << " "; 
      }    
    } 
};

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ 
class MyClassVector2 
{ 
  private:
    vector<int> vec; 
    
  public: 
    MyClassVector2(vector<int> v) : vec(v) //different notation to acheive the same thing
    { 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
    } 
}; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ 
class MyClassVector3 
{ 
  private:
    vector<int>& vec; 
    
  public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3(vector<int>& arr) 
      : vec(arr) 
    { 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
    } 
};

int main() 
{
  /****Section_Name***Vectors*/ 

    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(1); //vi is a vector that stores datatype int elements and push_back is a function that is basically the same as going to the next address in an array and adding the value input into that function to that address.
    vi.push_back(2);
    vi.push_back(3);

    // add 3 elements to the vs vector
    vs.push_back("123abc "); //vs is a vector that stores datatype string elements so thats what I entered.
    vs.push_back("234blah blah ");
    vs.push_back("321 hello world! ");

    // display the 3 elements in the vd vector
    cout << "\nValues in vd: \n"; 
    for(double vals : vd) //question: What is the : doing that it prints all of the elements within vd?
    {
      cout << vals << endl; 
    }
    cout << "\nAnother way to print vector: " << endl; 
    for(int i = 0; i < vd.size(); i++)
    {
      cout << vd[i] << endl; //starts at the address of the first element in the vector and outputs what is in that address and each subsequent address.
    }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";
    for(int i = 0; i < vi.size(); i++)
    {
      cout << vi[i] << endl; 
    }

    // display the 3 elements in the vs vector
    cout << "\nValues in vs: \n";
    for(int i = 0; i < vs.size(); i++)
    {
      cout << vs[i] << endl; 
    }

  /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

    cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
    vector<int> vec2;
    vector<int> vec3;
        for (int i = 1; i <= 5; i++) //This for loop fills the vector with numbers 1-5
            vec.push_back(i); 
        MyClassVector1 obj(vec); //This creates a class called obj and passes the vector vec to it
        obj.print(); //This uses the for loop in the print() method (function) within the class called MyClassVector1 using dot notation to reach the public class that then accesses the private class holding the data within the class structure.
    
      //Continue with MyClassVector2 and MyClassVector3
    cout << "\n\n";
    for (int i = 1; i <= 5; i++) 
      vec2.push_back(i); 
    MyClassVector2 obj2(vec); 
    obj2.print(); 
    

    cout << "\n\n";
    for (int i = 1; i <= 5; i++) 
      vec3.push_back(i); 
    MyClassVector3 obj3(vec); 
    obj3.print(); 
    

  /****Section_Name***STL_Iterators*/ 
    //Write the base code for: 11. STL Iterators
    //Expand the code to display 10 elements
    

  /****Section_Name*** Stack*/
    //Write the code as presented in: 2. std::stack

    //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set

    //Write comments that help one better understand what the code is doing.

  /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

  /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

  /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

  return 0; 
}