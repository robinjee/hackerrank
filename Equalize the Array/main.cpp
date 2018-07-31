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
 * Created on July 31, 2018, 10:17 PM
 * 
 * link: <https://www.hackerrank.com/challenges/equality-in-a-array/problem>
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_VAL = 101;

int equalizeArray(vector<int> elements) 
{
    vector <int> frequencyOfNumber(MAX_VAL, 0);
    for(int i : elements)
    {
        frequencyOfNumber[i]++;
    }

    return elements.size() - *max_element(frequencyOfNumber.begin(), frequencyOfNumber.end());
}

int main(int argc, char** argv) 
{
    int elementsCount = 0;
    cin >> elementsCount;
    vector <int> elements(elementsCount, 0);
    for(int i = 0; i < elementsCount; i++)
    {
        cin >> elements[i];
    }
    cout << equalizeArray(elements) << endl;
    return 0;
}

