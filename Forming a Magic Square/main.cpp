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
 * Created on August 1, 2018, 4:04 PM
 * 
 * Link: <https://www.hackerrank.com/challenges/magic-square-forming/problem>
 */


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector < vector < vector <int> > > magicSquares{
    {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    },
    {
        {6, 1, 8},
        {7, 5, 3},
        {2, 9, 4}
    },
    {
        {8, 3, 4},
        {1, 5, 9},
        {6, 7, 2}
    },
    {
        {4, 3, 8},
        {9, 5, 1},
        {2, 7, 6}
    },
    {
        {6, 7, 2},
        {1, 5, 9},
        {8, 3, 4}
    },
    {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    },
    {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    },
    {
        {2, 9, 4},
        {7, 5, 3},
        {6, 1, 8}
    }};


int formingMagicSquare(vector <vector< int > > square) {
    int min = 8 * 8 * 8;
    for (int i = 0; i < 8; i++) {
        int reqChanges = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                reqChanges += abs(square[j][k] - magicSquares[i][j][k]);
            }
        }

        if (reqChanges < min) {
            min = reqChanges;
        }
    }
    return min;
}

int main(int argc, char** argv) {
    vector < vector <int> > inputSquare(3, vector <int>(3));
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            cin >> inputSquare[j][k];
        }
    }
    cout << formingMagicSquare(inputSquare) << endl;
    return 0;
}

