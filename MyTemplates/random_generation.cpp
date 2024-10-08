std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
 
int rand(ll a, ll b, std::mt19937_64* param_rng = nullptr) {
    if (param_rng == nullptr) {
        param_rng = &rng;
    }
    std::uniform_int_distribution<int> dist(a, b);
    return dist(*param_rng);
}