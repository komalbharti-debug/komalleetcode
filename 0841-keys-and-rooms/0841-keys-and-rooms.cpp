class Solution {
public:
    void dfs(int room, vector<vector<int>>& rooms, vector<bool>& visited) {
        // Agar room pehle hi visit ho chuka hai,
        // to dobara visit nahi karna.
        if (visited[room]) {
            return;
        }

        // Current room ko visited mark karo.
        visited[room] = true;

        // Current room ke andar available keys check karo.
        for (int key : rooms[room]) {

            // Key jis room ki hai, us room par DFS call karo.
            dfs(key, rooms, visited);
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        // Sabhi rooms initially unvisited hain.
        vector<bool> visited(n, false);

        // Room 0 already unlocked hai,
        // isliye traversal room 0 se start karenge.
        dfs(0, rooms, visited);

        // Check karo ki koi room unvisited to nahi reh gaya.
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                return false;
            }
        }

        // Agar sabhi rooms visit ho gaye,
        // to true return karo.
        return true;
    }
};
