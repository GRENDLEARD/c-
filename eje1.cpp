#include <iostream>
#include <vector>
#include <queue>
#include <limits>

class Grafo {
public:
    int numVertices;
    std::vector<std::vector<std::pair<int, int>>> listaAdyacencia;

    Grafo(int n) : numVertices(n), listaAdyacencia(n) {}

    void agregarArista(int origen, int destino, int peso) {
        listaAdyacencia[origen].push_back(std::make_pair(destino, peso));
    }

    std::vector<int> dijkstra(int origen) {
        std::vector<int> distancia(numVertices, std::numeric_limits<int>::max());
        distancia[origen] = 0;
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> colaPrioridad;
        colaPrioridad.push(std::make_pair(0, origen));

        while (!colaPrioridad.empty()) {
            int u = colaPrioridad.top().second;
            colaPrioridad.pop();

            for (const auto& vecino : listaAdyacencia[u]) {
                int v = vecino.first;
                int peso = vecino.second;
                if (distancia[u] + peso < distancia[v]) {
                    distancia[v] = distancia[u] + peso;
                    colaPrioridad.push(std::make_pair(distancia[v], v));
                }
            }
        }

        return distancia;
    }
};

int main() {
    int numVertices = 5;
    Grafo grafo(numVertices);

    grafo.agregarArista(0, 1, 2);
    grafo.agregarArista(0, 2, 4);
    grafo.agregarArista(1, 2, 1);
    grafo.agregarArista(1, 3, 7);
    grafo.agregarArista(2, 4, 3);
    grafo.agregarArista(3, 4, 1);

    int origen = 0;
    std::vector<int> distancia = grafo.dijkstra(origen);

    std::cout << "Distancias mínimas desde el vértice " << origen << ":\n";
    for (int i = 0; i < numVertices; ++i) {
        std::cout << "Hacia vértice " << i << ": " << distancia[i] << std::endl;
    }

    return 0;
}