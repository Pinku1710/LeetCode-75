#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int asteroid : asteroids) {
            bool alive = true;

            while (alive && asteroid < 0 &&
                   !st.empty() && st.back() > 0) {
                if (st.back() < -asteroid) {
                    st.pop_back();
                } 
                else if (st.back() == -asteroid) {
                    st.pop_back();
                    alive = false;
                } 
                else {
                    alive = false;
                }
            }

            if (alive) {
                st.push_back(asteroid);
            }
        }

        return st;
    }
};

int main() {
    Solution sol;
    vector<int> asteroids = {5, 10, -5};

    vector<int> result = sol.asteroidCollision(asteroids);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
