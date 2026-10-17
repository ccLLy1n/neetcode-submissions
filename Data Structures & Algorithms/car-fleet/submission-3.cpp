class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(position.empty()){return 0;}
        vector<pair<int, double>> cars;
        for(int i=0;i<position.size();i++)
        {
            double consume_time = (target-position[i])/(double)speed[i];
            cars.push_back({position[i], consume_time});
            // {pos, hours}
        }
        sort(cars.rbegin(), cars.rend()); // nlogn
        int j = 1;
        int flee = 1;
        double p1 = cars[0].second; // first car;
        while(j<position.size())
        {            
            double hours = cars[j].second;
            if(hours<=p1){
                j++;
                continue;
            }
            p1 = hours;
            flee++;
            j++;
        }
        return flee;
    }
};
