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
 * Created on July 31, 2018, 7:48 PM
 * 
 * Problem link <https://www.hackerrank.com/challenges/the-hurdle-race/problem>
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int hurdleRace(int defaultHeight, vector<int> numberOfHurdles) 
{
     return max( *max_element(numberOfHurdles.begin(), numberOfHurdles.end()) - defaultHeight, 0);
}

int main(int argc, char** argv) 
{
    int numberOfHurdles = 0;
    int defaultHeight = 0;
    cin >> numberOfHurdles >> defaultHeight;
    vector <int> heightVector(numberOfHurdles, 0);
    for (int i = 0; i < numberOfHurdles; i++) {
        cin >> heightVector[i];
    }
    cout << hurdleRace(defaultHeight, heightVector) << endl;

    return 0;
}

