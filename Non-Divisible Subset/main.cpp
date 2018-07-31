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
 * Created on July 31, 2018, 9:42 PM
 * 
 * Link: <https://www.hackerrank.com/challenges/non-divisible-subset/problem>
 */

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int nonDivisibleSubset(int divisor, vector<int> elements) 
{
    map <int, int> remainderByCount;
    for(int i : elements)
    {
        remainderByCount[ i % divisor]++;
    }
    
    int answer = 0;
    for(int i = 1; i <= divisor/2; i++)
    {
        if(i == divisor - i)
        {
            answer++;
        }
        else
        {
            answer += max( remainderByCount[i], remainderByCount[divisor - i]);
        }
    }
    if(remainderByCount[0])
    {
        answer++;
    }
    return answer;
}

int main(int argc, char** argv) 
{
    int elementCount = 0, divisor = 0;
    cin >> elementCount >> divisor;
    vector <int> elements(elementCount,0);
    for(int i = 0; i < elementCount; i++)
    {
        cin >> elements[i];
    }
    cout << nonDivisibleSubset(divisor, elements) << endl;
    return 0;
}

