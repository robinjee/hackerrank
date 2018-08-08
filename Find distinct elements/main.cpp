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
 * Created on August 8, 2018, 10:02 PM
 * 
 * link: <https://practice.geeksforgeeks.org/problems/find-distinct-elements/0>
 */

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //code
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector < vector <int> > matrix(N, vector <int>(N, 0));

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> matrix[i][j];
            }
        }

        unordered_set <int> hash;
        for (int j = 0; j < N; j++) {
            hash.insert(matrix[0][j]);
        }

        for (int i = 1; i < N; i++) {
            unordered_set <int> temp;
            for (int j = 0; j < N; j++) {
                temp.insert(matrix[i][j]);
            }
            for (auto it = hash.begin(); it != hash.end();) {
                if (temp.find(*it) == temp.end()) {
                    it = hash.erase(it);
                } else {
                    ++it;
                }
            }

        }
        cout << hash.size() << endl;
    }
    return 0;
}

