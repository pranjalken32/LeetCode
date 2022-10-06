class TimeMap {
    public:
        TimeMap() {

        }

        void set(string key, string value, int timestamp) {
            cache_[key][timestamp] = std::move(value);
        }

        string get(string key, int timestamp) {
            const auto& bucket = cache_[key];
            auto it = bucket.lower_bound(timestamp);
            if (it->first == timestamp) {
                // cout << " found " << timestamp << endl;
                return it->second;
            }
            if (it == bucket.begin()) {
                // There is no earlier timestamp, so return ""
                return "";
            }
            // cout << " not found " << timestamp << endl;
            it--;
            return it->second;
        }
    private:
        unordered_map<string, map<int, string>> cache_;
};
/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */