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
 * Link: <https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem>
 */
 

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int number)
{
    switch(number)
    {
        case 1:
            return false;
        case 2:
            return true;
        default:
        {
            int squareRoot = sqrt(number);
            for(int i = 2; i <= squareRoot; i++)
            {
                if(number % i == 0)
                {
                    return false;
                }
            }            
        }
    }

    return true;
}

int main(int argc, char** argv) {
    int numberOfInputs = 0;
    cin >> numberOfInputs; 
    int temp;
    for(int i=0; i < numberOfInputs; i++)
    {
        cin >> temp;
        if(isPrime(temp))
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}

