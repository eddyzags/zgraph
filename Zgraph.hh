// Author : zagabe.ed@gmail.com (Eddy ZAGABE)
//
// Zgraph is a class that's represent a graph with several member
// functions to manipulate it. Zgraph use the Adjacent list
// representation :
//      For each vertex, store an list of vertices adjacent to it.
// (See README.md for more information)

#ifndef ZGRAPH_H_
#define ZGRAPH_H_

#include <stdarg.h> // for va_list
#include <vector>
#include <map>

// Representation of the adjacent list for one vertex
template <typename zType>
struct DegreeList {
  zType &data;
  int degree;
  bool empty;
  struct DegreeList *next;
};

// Zgraph class definition
template <typename zType>
class Zgraph {
 public:
  // Construtor
  Zgraph() : v_count_(0), e_count_(0) {}

  // Dynamic constructor
  Zgraph(int count, ...) : v_count_(0), e_count_(0) {
    va_list ap;

    va_start(ap, count);
    for (int c = 0; c < count; c++)
      Zgraph::add_vertex(va_arg(ap, zType));
    va_end(ap);
  }

  // Destructor
  virtual ~Zgraph() {}

  // Add a new vertex to the graph
  void add_vertex(const zType &vertex);

  // Add an edge between two vertices
  bool add_edge(const zType &vertex_u, const zType &vertex_v);

  // Remove one vertex from the graph
  void removeVertex(const zType &vertex);

  // Remove one edge from two vertices
  void removeEdge(const zType &vertex_u, const zType &vertex_v);

 private:
  // Number of vertex
  int v_count_;

  // Number of edges
  int e_count_;

  // Array of vertices
  std::map<zType &, DegreeList<zType> *> vertices_;

  // Add en edge to a vertex (DegreeList)
  void insertVertex(zType &vertex, const struct DegreeList<zType> *vertices);
};

// Add a new vertex to the graph
template <typename zType>
void Zgraph<zType>::add_vertex(const zType &vertex) {
  struct DegreeList<zType> *list;

  if (vertices_[vertex]) return;
  list = new DegreeList<zType>;
  list->data = nullptr;
  list->degree = 0;
  list->empty = true;
  list->next = nullptr;
  vertices_[vertex] = list;
  v_count_++;
}

// Add an edge between two vertices
template <typename zType>
bool Zgraph<zType>::add_edge(const zType &vertex_u, const zType &vertex_v) {
  struct DegreeList<zType> new_vertex;
  
  if (!vertices_[vertex_u] || !vertices_[vertex_v]) return false;
  new_vertex = new DegreeList<zType>;
  //  new_vertex->data = ;
  return true;
}

// Remove one vertex from the graph
template <typename zType>
void Zgraph<zType>::removeVertex(const zType &vertex) {}

// Remove one edge from two vertices
template <typename zType>
void Zgraph<zType>::removeEdge(const zType &vertex_u, const zType &vertex_y) {}

// Add an edge to a vertex (DegreeList)
template <typename zType>
void Zgraph<zType>::insertVertex(zType &vertex,
                                 const struct DegreeList<zType> *vertices) {
  for (struct DegreeList<zType> *tmp = vertices; tmp; tmp = tmp->next) {
    
  }
}

#endif  // ZGRAPH_H_
