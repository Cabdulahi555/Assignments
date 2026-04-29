# Tasks
1. Explain with the help of an example __"Why Dijkstra's algorithm fails on negative weights"__.


### Dijkstra's algorithm fails on negative weights because it assumes once a vertex is visited, you've already found the shortest path to it and it never looks back. For example, if A→B = 5 and A→C→B = 2 + (-4) = -2, Dijkstra's would mark B as done at 5 and never realize the path through C was actually shorter. Negative weights basically allow shortcuts to appear after the fact, and Dijkstra's isn't built to handle that.
