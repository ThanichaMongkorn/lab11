#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    int data=0;
    float sum=0;
    float std;
    float mean;
    string textline;
    ifstream source("score.txt");
    
    while(getline(source,textline)){
        sum+=atof(textline.c_str());
        data++;
        std+=pow(atof(textline.c_str()),2);
    }
    mean=sum/data;

    cout << "Number of data = "<<data<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<pow(((std/data)-(mean*mean)),0.5)<<"\n";

}