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
 * Created on July 31, 2018, 8:19 PM
 * 
 * Problem link <https://www.hackerrank.com/challenges/permutation-equation/problem>
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;


void permutationEquation(vector <int> & xAgainstP, int numberOfElements)
{
    map <int, int > pAgainstX;
    for(int i =1; i < numberOfElements; i++)
    {
        pAgainstX[xAgainstP[i]] = i;  
    }
    
    vector <int> yAgainstPP(numberOfElements, 0);
    for(int i =1; i < numberOfElements; i++)
    {
      cout << pAgainstX [pAgainstX[i]] << endl;
    }    
}

int main(int argc, char** argv) 
{
    int numberOfElements = 0;
    cin >> numberOfElements;
    numberOfElements++;
    vector <int> pXSequence(numberOfElements, 0);
    for (int i = 1; i < numberOfElements; i++) 
    {
        cin >> pXSequence[i];
    }
    permutationEquation(pXSequence, numberOfElements);

    return 0;
}

