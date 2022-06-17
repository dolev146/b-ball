
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
using namespace std;
int main(){
    std::vector <int> res(2,0);
    std::random_device rd{};
    std::mt19937 gen{rd()};
 
    // values near the mean are the most likely
    // standard deviation affects the dispersion of generated values from the mean
    std::normal_distribution<> d{75,9};

    for( int i=0; i<100;i++){
        int temp = d(gen);
        if(temp <55 || temp >100){
            cout << temp << endl;
        } 
    }
    
    
    return 0;
}

/* 
Saves for testing:
    Team T("Aviad",0.9);
    League L,a,s,d,f;
    L.AddTeam(T).AddTeam("Aviada", 0.6);
    s.StartLeague();
    a.StartLeague();
    d.StartLeague();
    f.StartLeague();
    L.StartLeague();
    L.printTeams();
    
    */