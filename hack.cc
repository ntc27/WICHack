#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
  string input;
  string word;
  getline(cin, input);
  stringstream ss(input);
  vector <string> tokens;
  while(ss>>word){
    tokens.push_back(word);
  }
  if(std::find(tokens.begin(), tokens.end(), "hi")!= tokens.end()){
    cout << "Hi" << endl;
  }
  if(std::find(tokens.begin(), tokens.end(), "hello")!= tokens.end()){
    cout <<"Hello" <<endl;
  }
  if(std::find(tokens.begin(), tokens.end(), "array")!=tokens.end()){
    cout << "Array is a collection of data items tthat can be selected by indices computed at runtime" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "heap") != tokens.end()){
    cout << "Heap is a specialized tree-based data structure that satisfies the heap property" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "list") != tokens.end()){
    cout << "A list is an abstract data type that represents a countable number of ordered values, where the same value may occur more than once" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "algorithm") != tokens.end()){
    cout <<"Algorithm is self-contained sequence of actions to be performed" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "sort") != tokens.end()){
    cout << "A sorting algorithm is an algorithm that puts elements of a list in a certain order" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "compression") != tokens.end()){
    cout << "Compression is the process of encoding digital information using fewer bits" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "greedy algorithm") != tokens.end()){
    cout << "Greedy algorithm is an algorithmic paradigm that follows the problem solving heuristic of making the locally optimal choice at each stage with th ehope of finding a global optimum" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "recursion") != tokens.end()){
    cout << "Recursion occurs when a thing is defined interms of itself or of its type" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "loop") != tokens.end()){
    cout << "Loop is a method of control flow" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "complexity") != tokens.end()){
    cout << "Time complexity quantifies the amount of time taken by an algorithm to run as a functionof the length of the string representing the input" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "efficiency") != tokens.end()){
    cout << "Algorithm efficiency is a property of an algorithm which relates to the amount of computational resources used by the algorithm." << endl;
  }
  if(find(tokens.begin(), tokens.end(), "iteration") !=  tokens.end()){
    cout << "Iteration is a block of statements within a computer program for a defined number of repetions." << endl;
  }
  if(find(tokens.begin(), tokens.end(), "burrows") != tokens.end()){
    cout << "BWT is a compression method which is taught in the compression section" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "wheeler") != tokens.end()){
    cout << "BWT is a compression method which is taught in the compression section" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "run") != tokens.end()){
    cout << "Run length encoding is a compression method which is taught in the compression section" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "length") != tokens.end()){
    cout << "Run length encoding is a compression method which is taught in the compression section" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "order") != tokens.end()){
    cout << "Order notation is taught in the algorithm section" << endl;
  }
  if(find(tokens.begin(), tokens.end(), "notation") != tokens.end()){
    cout << "Order notation is taguht in the algorithm section" << endl;
  }
}
