


#include <iostream>
using namespace std;
#include <vector>
#include <random>

int main() {
  vector<string> breakfastFoods = {"Cereal", "Porridge", "Wheat", "Pancakes"};
  vector<string> lunchFoods = {"Rice", "fufu", "Soup", "Banku"};
  vector<string> dinnerFoods = {"Salad", "Chicken tigh", "Bread", "Veggies"};

  cout << "Enter the meal time (breakfast, lunch, dinner): ";
  string mealTime;
  cin >> mealTime;

  vector<string> foods;
  if (mealTime == "breakfast") {
    foods = breakfastFoods;
  } else if (mealTime == "lunch") {
    foods = lunchFoods;
  } else if (mealTime == "dinner") {
    foods = dinnerFoods;
  } else {
    std::cout << "Invalid meal time!";
    return 1;
  }


int randomFoodIndex = rand() % foods.size();
cout << "You should eat " << foods[randomFoodIndex] << "!\n";



return 0;
}