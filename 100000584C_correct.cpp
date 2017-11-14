#include <cstdio>
#include <algorithm>
using namespace std;

struct gas_station
{
	double distance, price;
};

bool cmp(gas_station a, gas_station b)
{
	return a.distance < b.distance; 
}

int main()
{
	double Cmax, d, Davg;
	int n;
	scanf("%lf%lf%lf%d", &Cmax, &d, &Davg, &n);
	gas_station g[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%lf%lf", &g[i].price, &g[i].distance);
	}
	g[n].price = 0;
	g[n].distance = d;
	sort(g, g + n, cmp);
	if (g[0].distance != 0) {
		printf("The maximum travel distance = 0.00\n");
	} else {
		double Cnow = 0;
		double Cost = 0;
		int StationNow = 0;
		int NextStation;
		while (StationNow < n) {
			double PriceMin = 999999999;
			NextStation = -1;
			double FullGasDis = Cmax * Davg;
			for (int i = StationNow + 1; i <= n && (g[i].distance - g[StationNow].distance) <= FullGasDis; i++) {
				if (g[i].price < PriceMin) {
					PriceMin = g[i].price;
					NextStation = i;
					if (g[i].price < g[StationNow].price) {
						break;
					}
				}
			}
			if (NextStation == -1) {
				break;
			}
			double need = (g[NextStation].distance - g[StationNow].distance) / Davg;
			if (g[NextStation].price >= g[StationNow].price) {
				Cost += (Cmax - Cnow) * g[StationNow].price;
				Cnow = Cmax - need; 
			} else {
				if (Cnow >= need) {
					Cnow -= need;
				} else {
					Cost += (need - Cnow) * g[StationNow].price;
					Cnow = 0;
				}
			}
			StationNow = NextStation;
		}
		if (StationNow == n) {
			printf("%.2f\n", Cost);
		} else {
			printf("The maximum travel distance = %.2f\n", g[StationNow].distance + Cmax * Davg);
		}
	}
	return 0;
}