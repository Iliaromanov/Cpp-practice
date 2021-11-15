// Graph data structure implementation template
//  following the Resource Acquisition Is Initialization idium
#include <memory>
#include <vector>

class Graph {
    public:
        std::shared_ptr<GraphNode> createNode(std::string name) {
            auto node = std::make_shared<GraphNode>(name, nodes.size());
            nodes.push_back(node);
            return node;
        }

        std::shared_ptr<GraphNode> getNode(int index) {
            return nodes[index];
        }

        void addVertex(std::shared_ptr<GraphNode> from, std::shared_ptr<GraphNode> to) {
            from->addVertex(to->getIndex());
        }

    private:
        std::vector<std::shared_ptr<GraphNode>> nodes;
};

class GraphNode {
    public:
        GraphNode(std::string sname, int sindex) : name(sname), index(sindex) {}

        int getIndex() {
            return index;
        }

        void addVertex(int to) {
            vertices.push_back(to);
        }

        std::vector<std::shared_ptr<GraphNode>> getVertices(std::shared_ptr<Graph> graph) {
            std::vector<std::shared_ptr<GraphNode>> ret;
            for (auto index : vertices) {
                ret.push_back(graph->getNode(index));
            }
            return ret;
        }

    private:
        std::string name;
        int index;
        std::vector<int> vertices;
};