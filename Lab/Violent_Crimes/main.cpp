/* 
 * File:   main.cpp
 * Author: Kenny Villanueva
 * Purpose: Violent crimes per population
 * Created on June 25, 2015, 11:59 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

//Global Constants
const int CNVPCT=100.0;

using namespace std;


int main(int argc, char** argv) {
    //Variables from: 
    //http://www.nationmaster.com/country-info/stats/Crime/Total-crimes
    float USV=11.88e6;  //Violent crimes committed in the United States 
    float UKV=6.52e6;   //Violent crimes committed in the United Kingdom
    float USP=318e6;    //United States population
    float UKP=64.1e6;   //United Kingdom population
    float US, UK;       //United States, United Kingdom
    
    cout<<"Percent of population, victims of a violent crime\n";
    
    US=USV/USP*CNVPCT;  //United States percentage
    UK=UKV/UKP*CNVPCT;  //United Kingdom percentage   
    
    cout<<"United States "<<fixed<<showpoint<<setprecision(2)<<US<<" %"<<endl;
    cout<<"United Kingdom "<<UK<<" %"<<endl;
    
    return 0;
    
}

