// Bradley Bernard, bmbernar@ucsc.edu
// CS 101: PA4
// July 30, 2015
// $Id: Graph.h,v 1.3 2015-08-01 19:11:01-07 - - $

#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <stdio.h>
#include "List.h"

#define NIL -2
#define INF -1

typedef struct GraphObj* Graph;

Graph newGraph(int n);
void freeGraph(Graph* pG);

int getOrder(Graph G);
int getSize(Graph G);
int getSource(Graph G);
int getParent(Graph G, int u);
int getDist(Graph G, int u);
void getPath(List L, Graph G, int u);

void makeNull(Graph G);
void addEdge(Graph G, int u, int v);
void addArc(Graph G, int u, int v);
void BFS(Graph G, int s);

void printGraph(FILE *out, Graph G);

#endif
