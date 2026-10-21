LeetCode 735 - Asteroid Collision
Problem

Asteroid Collision

Approach

Use a stack to simulate collisions between asteroids moving in opposite directions.

Positive asteroids move right.
Negative asteroids move left.
When a collision occurs, the smaller asteroid explodes.
If both asteroids have equal size, both explode.
Complexity Analysis
Time Complexity: O(n)
Space Complexity: O(n)
Language

C++

Solution

735_Asteroid_Collision.cpp
