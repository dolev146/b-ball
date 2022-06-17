#include "Team.hpp"

/**
 * @file Game.hpp
 * @author Aviad Gilboa
 * @brief The Game class will calculate with an probolity tools
 * The result about and return it.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Game{
    private:
        Team Home;
        Team Out;
        int res;
    public:
        Game(const Team& Home,const Team& out);
};
