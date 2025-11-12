#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

/*
Title: Poker Hand
Difficulty: Hard
*/

struct Card{
    int value;
    char suit;
};

int get_value(char v){
    switch(v){
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 14;
        default: return v - '0';
    }

}

vector<Card> parse_hand(const string& s){
    vector<Card> cards;
    string card_str;
    stringstream ss(s);
    while(ss >> card_str){
        Card card;
        card.value = (card_str.size() == 3 ? 10 : get_value(card_str[0]));
        card.suit = card_str[card_str.size() - 1];
        cards.push_back(card);
    }
    return cards;
}

int is_cards_straight(const vector<Card>& cards){
    vector<int> values;
    int res = 0;
    for(Card card : cards){
        values.push_back(card.value);
    }
    sort(values.begin(), values.end());
    if(values[0] == 2 && values[1] == 3 && values[2] == 4 && values[3] == 5 && values[4] == 14) return 1;
    for(int i = 0; i < 4; i++){
        if(values[i] != values[i + 1] - 1) return 0;
    }
    if(values[0] == 10) res++;
    return res + 1;
}

int is_cards_flush(const vector<Card>& cards){
    char suit = cards[0].suit;
    for(Card card : cards){
        if(card.suit != suit) return 0;
    }
    return 1;
}

unordered_map<int, int> get_counts(const vector<Card>& cards){
    unordered_map<int, int> c;
    for(Card card : cards){
        c[card.value]++;
    }
    return c;
}

string get_rank(int is_straight, int is_flush, unordered_map<int, int>& counts, vector<Card>& cards){
    if(is_straight + is_flush == 3) return "Royal Flush";
    else if(is_straight && is_flush) return "Straight Flush";
    else{
        int c_four = 0, c_three = 0, c_pairs = 0;
        for(const auto& c : counts){
            switch(c.second){
                case 2: c_pairs++;
                break;
                case 3: c_three++;
                break;
                case 4: c_four++;
            }
        }
        if(c_four) return "Four of a Kind";
        if(c_three && c_pairs) return "Full House";
        if(is_flush) return "Flush";
        if(is_straight) return "Straight";
        if(c_three) return "Three of a Kind";
        if(c_pairs == 2) return "Two Pairs";
        if(c_pairs) return "One Pair";
    }
    return "High Card";
}

string get_ans(const string& s){
    vector<Card> cards = parse_hand(s);
    int is_straight = is_cards_straight(cards), is_flush = is_cards_flush(cards);
    unordered_map<int, int> counts = get_counts(cards);
    return get_rank(is_straight, is_flush, counts, cards);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; getline(cin, s);
    cout << get_ans(s) << "\n";
}
