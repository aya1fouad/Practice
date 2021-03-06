#ifndef GRAPH_H
#define GRAPH_H

#include "LinkedList.h"
#include "Vertex.h"

using namespace std;
class Graph
{
    private:
    LinkedList<Vertex> vertices;
    void InitializeForDijkstra()
    {
        Vertex *vertex = vertices.BeginIteration();
        while(vertex != NULL)
        {
            vertex->Visited = 0;
            vertex->Cost = 10000;
            vertex->Path = '\0';
            vertex = vertices.GetNext();
        }
    }
    void CalculateCost(Vertex *vertex)
    {
        Edge *edge = vertex->Edges.BeginIteration();
        while(edge != NULL)
        {
            if(edge->Adjacent->Cost > (vertex->Cost + edge->Weight))
            {
                edge->Adjacent->Cost = vertex->Cost + edge->Weight;
                edge->Adjacent->Path = vertex->Key;
            }
            edge = vertex->Edges.GetNext();
        }
    }
    Vertex* GetMinCost()
    {
        int found = 0;
        Vertex *vertex = vertices.BeginIteration();
        Vertex *min = NULL;
        while(vertex != NULL)
        {
            if(vertex->Visited == 0)
            {
                if(min == NULL || (min->Cost > vertex->Cost))
                {
                    min = vertex;
                }
                found = 1;
            }
            vertex = vertices.GetNext();
        }
        if(found)
        {
            return min;
        }
        return NULL;
    }
    Vertex* Search(char path)
    {
        Vertex *vertex = vertices.BeginIteration();
        while(vertex!=NULL)
        {
            if(vertex->Key==path)
                return vertex;
            vertex = vertices.GetNext();
        }
    }


public:
    void AddVertex(Vertex *vertex)
    {
        vertices.Add(vertex);
    }
    void AssignEdge(Vertex *src, Vertex *dst, int weight)
    {
        src->AddEdge(dst, weight);
        dst->AddEdge(src, weight);
    }
    void DepthFirst(Vertex *startVertex, Vertex *fromVertex)
    {
        if(startVertex->Visited == 1)
        {
            return;
        }
        cout <<"Visit "<<startVertex->Key<< " from " << fromVertex->Key << endl;
        startVertex->Visited = 1;
        Edge* edge = startVertex->Edges.BeginIteration();
        while(edge != NULL)
        {
            DepthFirst(edge->Adjacent, startVertex);
            edge = startVertex->Edges.GetNext();
        }
    }
    void Dijkstra(Vertex *startVertex)
    {
        InitializeForDijkstra();
        startVertex->Cost = 0;
        Vertex *min = startVertex;
        while(min != NULL)
        {
            min->Visited = 1;
            CalculateCost(min);
            min = GetMinCost();
        }
    }

    void Traverse()
    {
        Vertex *vertex = vertices.BeginIteration();
        Vertex *cPtr;
        int flag1=-1,flag2;
        while(vertex!=NULL)
        {
            cPtr=vertex;
            cout<<"Path "<<cPtr->Key<<"\t";
            while(cPtr->Path!='\0')
            {
                cout<<cPtr->Key;
                cPtr=Search(cPtr->Path);
            }
            cout<<cPtr->Key<<endl;
            flag1++;
            flag2=0;
            vertices.BeginIteration();
            while(flag2<flag1)
            {
                vertices.GetNext();
                flag2++;
            }
            vertex = vertices.GetNext();
            //cout<<vertex->Key<<endl;
        }
    }

};
#endif // GRAPH_H

