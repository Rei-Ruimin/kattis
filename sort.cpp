/* 2020.2.25 */

#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

vector<int> order;

bool sortbyfreq(const pair<int,int> &a, 
              const pair<int,int> &b) { 
    return (a.second > b.second); 
} 

bool sortbyorder(int &a, int &b) { 
    return (find(order.begin(), order.end(), a) < find(order.begin(), order.end(), b)); 
} 

void print_num_as_freq(int num, int freq) {
    for(int i=0; i<freq; i++) {
        cout << num << " ";
    }
}


int main()
{
    int n,l;
    cin >> n >> l;
    vector<pair<int, int>> freq;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        auto exist = find(order.begin(), order.end(), num);
        // if iter is not in the array
        if(exist == order.end()) {
            order.push_back(num);
            freq.push_back(make_pair(num,1));
        }
        else {
            freq[exist - order.begin()].second++;
        }
    }
    sort(freq.begin(), freq.end(), sortbyfreq);
    int freq1, freq2;
    vector<int> same_freq_num;
    int same_freq;
    same_freq_num.push_back(freq[0].first);
    for(int i=0; i<order.size()-1; i++) {
        freq1 = freq[i].second;
        same_freq = freq1;
        freq2 = freq[i+1].second;
        
        if(freq1 == freq2) {
            same_freq_num.push_back(freq[i+1].first);
        }
        else {
            sort(same_freq_num.begin(), same_freq_num.end(), sortbyorder);
            for(int j=0; j<same_freq_num.size(); j++) {
                print_num_as_freq(same_freq_num[j],same_freq);
            }
            same_freq_num.clear();
            same_freq_num.push_back(freq[i+1].first);
        }
    }
    
    if(freq1 == freq2) {
        sort(same_freq_num.begin(), same_freq_num.end(), sortbyorder);
        for(int j=0; j<same_freq_num.size(); j++) {
            print_num_as_freq(same_freq_num[j],same_freq);
        }
    }
    else{
        print_num_as_freq(freq.back().first,freq2);
    }

    return 0;
}
