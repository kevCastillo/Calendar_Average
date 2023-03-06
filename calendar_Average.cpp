#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

const string MONTHS[12] = {"January", "February", "March", "April", "May",
                            "June", "July", "August", "September",
                            "October", "November", "December"};
const int NUMDAYS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void displayAverages(int numDays[], string months[], float average[]);
void highestSale ();
void lowestSale ();
void mainAverage(int days[], string months[], float average[]);
float greaterThan();

int main() {
  int sum = 0, num = 0;
  float avg[12];

  ifstream yearSales;  
  yearSales.open("sales.dat");

  
  for (int j = 0; j < 11; j++){
    cout << MONTHS[j] << "'s Sales: ";
    for(int i = 0; i < NUMDAYS[i]; i++){
      yearSales >> num;
      cout << num << " ";
      sum += num;
    }
    avg[j] /= sum;
    cout << avg[j] << endl;
  }

}

void mainAverage(int numDays[], string months[], float average[]){  
  ifstream yearSales;  
  yearSales.open("sales.dat");
  
  for (int j = 0; j < 11; j++){
    int sum = 0, num;
    for(int i = 0; i < numDays[i]; i++){
      yearSales >> num;
      sum += num;
    }
    average[j] /= sum;
  }
}

void displayAverages(int numDays[], string months[], float average[]){
  for (int j = 0; j < 11; j++){
    cout << months[j] << "'s Sales: ";
    for(int i = 0; i < average[i]; i++){
      cout << average[i] << endl;
    }
  }
}