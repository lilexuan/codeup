#include <cstdio>
#include <algorithm>
using namespace std;

struct gas_station
{
	double price;
	double distance;
};

bool cmp(gas_station a, gas_station b) 
{
	return a.distance < b.distance;
}

int main()
{
	int Cmax, d, Davg, n;
	double CurDis = 0.0, Cost = 0.0;
	scanf("%d%d%d%d", &Cmax, &d, &Davg, &n);
	gas_station g[n];
	for (int i = 0; i < n; i++) {
		double tmp_price;
		double tmp_distance;
		scanf("%lf%lf", &tmp_price, &tmp_distance);
		g[i].price = tmp_price;
		g[i].distance = tmp_distance;
	}
	sort(g, g + n, cmp);
	double PreDis = 0.0;
	int NowStation = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0 && g[i].distance != 0) { // if no station in the start point , the car could not go
			break; 
		}
		double TmpDis = Cmax * Davg + CurDis;
		if (TmpDis > 500.0) {
			TmpDis = 500.0;
		}
		double PriceMin = 9999.0; 
		bool flag = false;
		for (int j = 0; j < n; j++) {
			if ((g[j].price < PriceMin) && (PreDis < g[j].distance) && (g[j].distance <= TmpDis)) {
				PriceMin = g[j].price;
				NowStation = j;
				flag = true;
			}
		}
		if (!flag) {
			CurDis = TmpDis;
			Cost += ((TmpDis - PreDis) / ((double)Davg)) * g[NowStation].price;
			break;
		}
		Cost += ((g[NowStation].distance - PreDis) / ((double)Davg)) * g[NowStation].price;
		//printf("cost = %f\n", Cost);
		PreDis = g[NowStation].distance;
		CurDis = g[NowStation].distance;
		i = NowStation - 1;
	}
	if (CurDis < 500.0) {
		printf("The maximum travel distance = %f\n", CurDis);
	} else {
		printf("%.2f\n", Cost);
	}
	return 0;
}
