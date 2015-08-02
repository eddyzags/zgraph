# Zgraph (Graph)

<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. Description</a></li>
<li><a href="#sec-2">2. Features (Member functions)</a>
<ul>
<li><a href="#sec-2-1">2.1. Modifiers</a></li>
<li><a href="#sec-2-2">2.2. Remove</a></li>
</ul>
</li>
</ul>
</div>
</div>

# Description<a id="sec-1" name="sec-1"></a>

Zgraph is a class that implement a graph which is a set of vertices
(also called 'nodes') connected by edges. The nodes may be part of
the graph or may be external entities.
The graph's representation looks life a Social Network with your
friends as vertices and your connection to them (Example : Friends
or not) as edges. <br />
There are several ways to represent a graph in memory. Zgraph use
the Adjacent lists representation :<br />
      For each vertex, store a list of vertices adjacent to it

# Features (Member functions)<a id="sec-2" name="sec-2"></a>

## Modifiers<a id="sec-2-1" name="sec-2-1"></a>

### add\_vertex(const zType &vertex);
Add a new vertex to the graph. If the vertex already exist, this
member function does nothing.<br />
Complexity : O(1)

### add\_edge(const zType &vertex\_u, const zType &vertex\_v);
Add an edge between two vertices. After this call, the two vertices
become adjacent. <br />
Complexity : O(d)    (with 'd' as the number of degree for one
vertex)

## Remove<a id="sec-2-2" name="sec-2-2"></a>

### remove\_vertex(const zType &vertex);
Remove one vertex from the graph and all his connections.

### remove\_edge(const zType &vertex\_u, const zType vertex\_y);
Remove one edge from two vertices. They are no longer adjacent.