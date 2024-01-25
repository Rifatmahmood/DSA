Certainly! Here's the step-by-step algorithm for the Depth-First Search (DFS) implemented in your code:

### Depth-First Search (DFS) Algorithm:

1. **Initialize Data Structures:**
   - Create an array of vectors (`v`) to represent the adjacency list of the graph.
   - Create a boolean array (`vis`) to track visited nodes.

2. **Depth-First Search Function (`dfs`):**
   - The `dfs` function takes a source node (`src`) as an argument and performs the following steps:
     - Print the current node (`src`) to visit it.
     - Mark the current node as visited by setting `vis[src]` to `true`.
     - Traverse each neighbor of the current node in the adjacency list.
     - For each unvisited neighbor:
       - Recursively call the `dfs` function with the neighbor as the new source.

3. **Main Function:**
   - Read the number of nodes (`n`) and edges (`e`) from the input.
   - Construct the adjacency list (`v`) by reading the edges from the input.
   - Initialize the `vis` array to `false` using `memset`.
   - Call the `dfs` function with an initial source node (e.g., `dfs(0)`).

### Explanation:

- The algorithm explores the graph using a depth-first strategy, starting from a chosen source node.
- It marks each visited node to avoid revisiting the same node.
- The recursive nature of the algorithm allows it to traverse as deep as possible along each branch before backtracking.

This DFS algorithm is suitable for exploring and traversing graphs, and it's often used for tasks like finding connected components, topological sorting, and solving problems on graphs.