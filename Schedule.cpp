#include "Schedule.hpp"
std::map<unsigned int, std::vector<unsigned int>> MakePer(unsigned int numberTeams);
int RandomInt();

Schedule::Schedule(){
    
}
int RandomInt(){
    
}
void Schedule::orgenizeSeason(unsigned int numberTeams){

}

std::map<unsigned int, std::vector<unsigned int>> MakePer(unsigned int numberTeams){
    std::map<unsigned int, std::vector<unsigned int>> per;
    for (unsigned int i=0; i< numberTeams;i++){
        std::vector<unsigned int> temp;
        per.insert(std::make_pair(i,temp));
    }
    for (unsigned int i=0; i< numberTeams;i++){
        for (unsigned int j=i+1; j<numberTeams;j++){
            per.at(i).push_back(j);
            per.at(j).push_back(i);
        }
    }
    return per;
}