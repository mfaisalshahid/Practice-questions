string reorganizeString(string s) {
    map<int, int> cnts;
    for (char c : s) cnts[c]++;
    priority_queue<pair<int, int>> pq;
    for (auto p : cnts)
        pq.push({p.second, p.first});

    string res;
    pair<int, int> top1, top2;
    while (!pq.empty()) {
        top1 = pq.top(); pq.pop();
        cout<< "top1: " << top1.first <<endl;
        res += top1.second;
        cout<< "res: " << res<<endl;
        if (!pq.empty()) {
            res += pq.top().second;
            cout<< "res: " << res<<endl;
            top2 = pq.top(); pq.pop();
            cout<< "top2: " << top2.first<<endl;
            if (top2.first > 1) pq.push({ top2.first - 1, top2.second });
        }
        if (top1.first > 1) pq.push({ top1.first - 1, top1.second });
    }

    for (int i = 1; i < res.size(); i++)
        if (res[i] == res[i - 1]) return "";
    return res;
}
