/*
Problem: Reshape the Matrix
Link: https://leetcode.com/problems/reshape-the-matrix/

Given a matrix mat and two integers r and c, return the reshaped matrix.
*/

#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size(), n = mat[0].size();
    if (m * n != r * c) return mat;
    
    vector<vector<int>> reshaped(r, vector<int>(c));
    for (int i = 0; i < m * n; ++i) {
        reshaped[i / c][i % c] = mat[i / n][i % n];
    }
    return reshaped;
}