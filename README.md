# Zgraph

<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. Description</a></li>
<li><a href="#sec-2">2. Features (Member functions)</a>
<ul>
<li><a href="#sec-2-1">2.1. Modifiers</a></li>
<li><a href="#sec-2-2">2.2. Remove</a></li>
<li><a href="#sec-2-3">2.3. Capacity</a></li>
</ul>
</li>
</ul>
</div>
</div>

# Description<a id="sec-1" name="sec-1"></a>

Zgraph is a class that implements a graph which is a set of vertices
(also called 'nodes') connected by edges. The nodes may be part of
the graph or may be external entities.
The graph's representation looks life a social network with your
friends as vertices and your connection to them (Example : Friends
or not) as edges.
There are several ways to represent a graph in memory. Zgraph use
the Adjacent lists representation :
      For each vertex, store a list of vertices adjacent to it

# Features (Member functions)<a id="sec-2" name="sec-2"></a>

## Modifiers<a id="sec-2-1" name="sec-2-1"></a>

### addVertex(zType const &vertex);
Add a new vertex to the graph.
Complexity : O(1)

### addEdge(zType const &vertex\_u, zType const &vertex\_v);
Add an edge between two vertices. After this call, the two vertices
become adjacent.

<br />

## Remove<a id="sec-2-2" name="sec-2-2"></a>

### removeVertex(zType const &vertex);
Remove one vertex from the graph and all his connections.

### removeEdge(zType &vertex\_u, zType vertex\_y);
Remove one edge from two vertices. They are no longer adjacent.