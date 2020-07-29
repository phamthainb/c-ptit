#include <bits/stdc++.h>

using namespace std;

struct job
{
    int id, deadline, profit;
};
//list for jobs
job listJobs[1005];
int n, mark[1005] = {0};

void Input()
{
    memset(mark, 0, sizeof(mark));
    memset(listJobs, 0, sizeof(listJobs));
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> listJobs[i].id >> listJobs[i].deadline >> listJobs[i].profit;
}
//compare profit
bool compare(job a, job b)
{
    return a.profit > b.profit;
}

void Solo()
{
    int countJobs = 0, result = 0;
    //sort
    sort(listJobs, listJobs + n, compare);
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, listJobs[i].deadline) - 1; j >= 0; j--)
        {
            if (mark[j] == 0)
            {
                countJobs++;
                result += listJobs[i].profit;
                mark[j] = 1;
                break;
            }
        }
    }
    cout << countJobs << " " << result << endl;
}
int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        Input();
        Solo();
    }
    return 0;
}