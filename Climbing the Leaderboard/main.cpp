/*
 * Copyright (C) 2018 Robin Kendrick <https://github.com/robinjee>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* 
 * File:   main.cpp
 * Author: Robin Kendrick <https://github.com/robinjee>
 *
 * Created on August 2, 2018, 11:11 PM
 * 
 *  * link: <https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem>
 */
#include <vector>
#include <iostream>

using namespace std;

vector<int> climbingLeaderboard(vector<int> & playerScores, vector<int> & aliceScores) 
{
    vector <int> rankings(aliceScores.size(), 0);
    int currentRanking = 1;
    int playerIndex = 0;
    int aliceScoreIndex = aliceScores.size() - 1;

    while (playerIndex < playerScores.size()) {
        while (playerIndex < playerScores.size()) {
            if (playerScores[playerIndex] > aliceScores[aliceScoreIndex]) {
                playerIndex++;
                if (playerScores[playerIndex] != playerScores[playerIndex - 1]) {
                    currentRanking++;
                }
                continue;
            }
            break;
        }

        while (aliceScoreIndex >= 0) {
            if (playerScores[playerIndex] <= aliceScores[aliceScoreIndex]) {
                rankings[aliceScoreIndex] = currentRanking;
                aliceScoreIndex--;
                continue;
            }
            break;
        }

        if (playerIndex == playerScores.size()) {
            break;
        }
    }

    while (aliceScoreIndex >= 0) {
        rankings[aliceScoreIndex] = currentRanking;
        aliceScoreIndex--;
    }

    return rankings;
}

int main(int argc, char** argv) 
{
    int players;
    cin >> players;
    vector <int> playerScores(players, 0);
    for (int i = 0; i < players; i++) {
        cin >> playerScores[i];
    }

    int aliceGames;
    cin >> aliceGames;
    vector <int> aliceScores(aliceGames, 0);
    for (int i = 0; i < aliceGames; i++) {
        cin >> aliceScores[i];
    }

    vector <int> rankings = climbingLeaderboard(playerScores, aliceScores);

    for (vector <int>::iterator it = rankings.begin(); it != rankings.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}