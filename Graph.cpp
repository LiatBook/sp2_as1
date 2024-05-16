#include "Graph.hpp"
using namespace ariel;


    void Graph::loadGraph(const std::vector<std::vector<int>> new_g) {
    if (new_g.size() != new_g[0].size() || new_g.empty() ) {
        throw std:: invalid_argument("Error in load this grapf");
    }
    size=g.size();
    this->g = new_g; // Assign the provided adjacency matrix to the graph
    this->symmetric=true;
    this->weighted=false;
        for (size_t i = 0; i < g.size(); i++) {
            for (size_t j = 0; j < g[i].size(); j++) {
                if(g[i][j] != g[j][i]){
                    this->symmetric=false;//graph directed
                }
                if(g[i][j]!=0 && g[i][j]!=1){
                    this->weighted=true;
                }
                if(this->weighted==true && this->symmetric==false){
                    return;
                }
            }
        }

    }


void  const Graph::printGraph(){
    int edges=0;
    for (size_t i = 0; i < g.size(); ++i) {
        for (size_t j = 0; j < g[i].size(); ++j) {
            if(g[i][j] != 0){
                edges++;
            }
        
        }
    }
    if(getSymmetricMat()){
        edges=edges/2;
    }
    std:: cout << "Graph with " << g.size() << " vertices and " << edges << " edges." << std :: endl;
        // printf("Graph with %d vertices and %d edges.",size,edges);
    }

    std:: vector <std:: vector<int>> Graph :: getGraph() const{
        return this -> g;
    }
     bool Graph :: getSymmetricMat() const{
        return this -> symmetric;
     
    }
     bool Graph :: getWeighted() const{
        return this -> weighted;
     
    }


