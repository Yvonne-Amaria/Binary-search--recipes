#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string fileName = "IndianFoodDatasetCSVEdited.csv";
int BinarySearch( string fileName, const int l,const int r, int x) {
 
 
  if (r>=l){
      int mid = l + (r-l)/2;
     
    if (fileName[mid] == x){
        return mid;
    }
    else if (fileName[mid]>x){
        return BinarySearch(fileName, l, mid - l, x);
    }
    else{
        return BinarySearch(fileName, mid + l, r, x);
    }
  
  }
  return -1;
}

int main() {
    string fileName = "IndianFoodDatasetCSVEdited.csv";
    //modify this to the user input
    int x = 10;
   
    int n = sizeof(fileName)/sizeof(fileName[0]);
    int result = BinarySearch(fileName, 0, n-1,x);
    (result == -1) ? cout << "Element is not presnet"
                   : cout <<"Element is present at"<< result<<endl;
   
   
   


  ifstream file;
  file.open("IndianFoodDatasetCSVEdited.csv");

 /* while(file.good()) {
    string line;
    getline(file, line, ',');
    cout << line << endl;
  }*/
  //ifstream file("IndianFoodDatasetCSVEdited.csv");

  string UserName;
  cout << "Welcome friend, Enter user name: ";
  cin >> UserName;

  cout << "Home Page" << endl;

  string NameYO;
  string IngredientsYO;
  string Preparation_TimeYO;
  string Cook_TimeYO;
  string CuisineYO;
  string DietYO;
  string ServingsYO;
  string InstructionsYO;

  string NameInputYO;
  string IngredientsInputYO;
  string Preparation_TimeInputYO;
  string Cook_TimeInputYO;
  string CuisineInputYO;
  string ChoiceYO;

  cout << "Enter an option to continue your search. \n";
  cout << "Click a to search for a recipe by Name \n";
  cout << "Click b to search for a recipe by Ingredients \n";
  cout << "Click c to search for a recipe by Preparation_Time \n";
  cout << "Click d to search for a recipe by Cook_Time \n";
  cout << "Click e to search for a recipe by Cuisine \n";
  cout << "Click f to exit \n";

  cin >> ChoiceYO;

  if (ChoiceYO == "a") {
    cout << "Input Name \n";
    cin >> NameInputYO;

    while (file.good()) {
      getline(file, NameYO, ',');
      getline(file, IngredientsYO, ',');
      getline(file, Preparation_TimeYO, ',');
      getline(file, Cook_TimeYO, ',');
      getline(file, CuisineYO, '\n');
      cout << " " << NameYO << " " << IngredientsYO << " " << Preparation_TimeYO << " " << Cook_TimeYO << " " << CuisineYO << '\n';


      if (NameInputYO == NameYO) {
        cout << "Name: " << NameYO << endl; 
        cout << "Ingredients" << IngredientsYO << endl;
        cout << "Preparation time: " << Preparation_TimeYO << endl; 
        cout << "Cook time: " << Cook_TimeYO << endl; 
        cout << "Cuisine: " << CuisineYO << endl;
        cout << "Diet: " << DietYO << endl;
        cout << "Servings: " << ServingsYO << endl;
        cout << "Instructions: " << InstructionsYO << endl;
      }
      else {
       cout << "Sorry cannot find recipe";
     }

    }

    file.close();
  }

  if (ChoiceYO == "b") {
   cout << "Input 3 Ingredients \n";
   cin >> IngredientsInputYO;
 
   while (file.good()) {
      getline(file, NameYO, ',');
      getline(file, IngredientsYO, ',');
      getline(file, Preparation_TimeYO, ',');
      getline(file, Cook_TimeYO, ',');
      getline(file, CuisineYO, '\n');
      cout << " " << NameYO << " " << IngredientsYO << " " << Preparation_TimeYO << " " << Cook_TimeYO << " " << CuisineYO << '\n';
 
     if (IngredientsInputYO == IngredientsYO) {
        cout << "Name: " << NameYO << endl; 
        cout << "Ingredients" << IngredientsYO << endl;
        cout << "Preparation time: " << Preparation_TimeYO << endl; 
        cout << "Cook time: " << Cook_TimeYO << endl; 
        cout << "Cuisine: " << CuisineYO << endl;
        cout << "Diet: " << DietYO << endl;
        cout << "Servings: " << ServingsYO << endl;
        cout << "Instructions: " << InstructionsYO << endl;
     }
     else {
       cout << "Sorry cannot find recipe";
     }
 
   }
 
   file.close();
  }

  if (ChoiceYO == "c") {
   cout << "Input Preparation_Time \n";
   cin >> Preparation_TimeInputYO;
 
   while (file.good()) {
      getline(file, NameYO, ',');
      getline(file, IngredientsYO, ',');
      getline(file, Preparation_TimeYO, ',');
      getline(file, Cook_TimeYO, ',');
      getline(file, CuisineYO, '\n');
      cout << " " << NameYO << " " << IngredientsYO << " " << Preparation_TimeYO << " " << Cook_TimeYO << " " << CuisineYO << '\n';
 
     if (Preparation_TimeInputYO == Preparation_TimeYO) {
        cout << "Name: " << NameYO << endl; 
        cout << "Ingredients" << IngredientsYO << endl;
        cout << "Preparation time: " << Preparation_TimeYO << endl; 
        cout << "Cook time: " << Cook_TimeYO << endl; 
        cout << "Cuisine: " << CuisineYO << endl;
        cout << "Diet: " << DietYO << endl;
        cout << "Servings: " << ServingsYO << endl;
        cout << "Instructions: " << InstructionsYO << endl;
     }
     else {
       cout << "Sorry cannot find recipe";
     }
 
   }
 
   file.close();
  }

  if (ChoiceYO == "d") {
   cout << "Input Cook_Time \n";
   cin >> Cook_TimeInputYO;
 
   while (file.good()) {
      getline(file, NameYO, ',');
      getline(file, IngredientsYO, ',');
      getline(file, Preparation_TimeYO, ',');
      getline(file, Cook_TimeYO, ',');
      getline(file, CuisineYO, '\n');
      cout << " " << NameYO << " " << IngredientsYO << " " << Preparation_TimeYO << " " << Cook_TimeYO << " " << CuisineYO << '\n';
 
     if (Preparation_TimeInputYO == Preparation_TimeYO) {
        cout << "Name: " << NameYO << endl; 
        cout << "Ingredients" << IngredientsYO << endl;
        cout << "Preparation time: " << Preparation_TimeYO << endl; 
        cout << "Cook time: " << Cook_TimeYO << endl; 
        cout << "Cuisine: " << CuisineYO << endl;
        cout << "Diet: " << DietYO << endl;
        cout << "Servings: " << ServingsYO << endl;
        cout << "Instructions: " << InstructionsYO << endl;
     }
     else {
       cout << "Sorry cannot find recipe";
     }
 
   }
 
   file.close();
  }

  if (ChoiceYO == "e") {
   cout << "Input Cuisine \n";
   cin >> CuisineInputYO;
 
   while (file.good()) {
      getline(file, NameYO, ',');
      getline(file, IngredientsYO, ',');
      getline(file, Preparation_TimeYO, ',');
      getline(file, Cook_TimeYO, ',');
      getline(file, CuisineYO, '\n');
      cout << " " << NameYO << " " << IngredientsYO << " " << Preparation_TimeYO << " " << Cook_TimeYO << " " << CuisineYO << '\n';
 
     if (Preparation_TimeInputYO == Preparation_TimeYO) {
        cout << "Name: " << NameYO << endl; 
        cout << "Ingredients" << IngredientsYO << endl;
        cout << "Preparation time: " << Preparation_TimeYO << endl; 
        cout << "Cook time: " << Cook_TimeYO << endl; 
        cout << "Cuisine: " << CuisineYO << endl;
        cout << "Diet: " << DietYO << endl;
        cout << "Servings: " << ServingsYO << endl;
        cout << "Instructions: " << InstructionsYO << endl;
     }
     else {
       cout << "Sorry cannot find recipe";
     }
 
   }
 
   file.close();
  }

  if (ChoiceYO == "f") {
    cout << "Exit search and Return Home.";
  }
 
   file.close();
}
