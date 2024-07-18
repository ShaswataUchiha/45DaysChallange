class StockSpanner {
public:
    
    stack<pair<int, int>> st;
    StockSpanner() {}
    int next(int price) {
        int temp = 1;
        while(!st.empty() && price >= st.top().first){
            temp += st.top().second;
            st.pop();
        }

        st.push({price, temp});

        return st.top().second;
    }
};