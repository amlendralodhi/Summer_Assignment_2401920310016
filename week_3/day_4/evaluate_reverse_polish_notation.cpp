class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<string>st;

        for(int i = 0;i<tokens.size();i++)
        {
            string stt = tokens[i];
            if(tokens[i] == "+" )
            {
                string st1 = st.top();
                int element = stoi(st1);
                st.pop();
                string st2 = st.top();
                int element2 = stoi(st2);
                st.pop();

                int ans1 = element2 + element;
                string st3 = to_string(ans1);
                st.push(st3);
            }
            else if(tokens[i] == "-")
            {
                string ch4 = st.top();
                int element3 = stoi(ch4);
                st.pop();
                string ch5 = st.top();
                int element4 = stoi(ch5);
                st.pop();

                int ans2 = element4 - element3;
                string ch6 = to_string(ans2);
                st.push(ch6);
            }
            else if(tokens[i] == "*")
            {
                string ch7 = st.top();
                int element5 = stoi(ch7);
                st.pop();
                string ch8= st.top();
                int element6 = stoi(ch8);
                st.pop();

                int ans3 = element6 * element5;
                string ch9 = to_string(ans3);
                st.push(ch9);
            }
            else if(tokens[i] == "/")
            {
                string ch10 = st.top();
                int element7 = stoi(ch10);
                st.pop();
                string ch11 = st.top();
                int element8 = stoi(ch11);
                st.pop();

                int ans4 = element8 / element7;
                string ch12 = to_string(ans4);
                st.push(ch12);
            }
            else {
                st.push(tokens[i]);
            }
        }
        int num = stoi(st.top());
        return num;
        
    }
};