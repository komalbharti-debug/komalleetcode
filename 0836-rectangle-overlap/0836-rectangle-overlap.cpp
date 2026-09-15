class Solution {
public:
    bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {

        // X-axis overlap
        bool xOverlap = r1[0] < r2[2] &&
                        r2[0] < r1[2];

        // Y-axis overlap
        bool yOverlap = r1[1] < r2[3] &&
                        r2[1] < r1[3];

        return xOverlap && yOverlap;
    }
};