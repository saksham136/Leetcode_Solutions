class Solution {
public:
    bool isValidSerialization(string preorder) {
    
        stringstream ss(preorder);
        string node;
        stack<string> st;
        
        while (getline(ss, node, ',')) {
            st.push(node);

            // Check for the "leaf node" pattern: two '#' followed by a valid parent node
            while (st.size() >= 3 && st.top() == "#") {
                string first = st.top(); st.pop();  // First '#'
                string second = st.top(); 

                if (second != "#") { 
                    // If second top is NOT "#", push back first and continue
                    st.push(first);
                    break;
                }
                
                st.pop(); // Remove second '#'
                
                if (st.empty() || st.top() == "#") {
                    return false; // No valid parent node
                }
                
                st.pop(); // Remove parent node
                st.push("#"); // Push '#' to represent completed subtree
            }
        }
        
        return (st.size() == 1 && st.top() == "#");
    }
};
    