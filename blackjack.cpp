#include <iostream>
#include <bits/stdc.++h>
//for this I'll assume probability of drawing cards is constant even though its not
struct ValueProbabilty{
    int value;
    float probability;
}
int main(){
    long long numTrial{1000000};
    std::vector<ValueProbability> cardValues[10];
    for(int valued=2; valued<12; valued++){
        if(valued==10){
            cardValues[valued-2].value=10;
            cardValues[valued-2].probability=16.0000/52.0000;
        }
        else {
            cardValues[valued-2].value=valued;
            cardValues[valued-2].probability=4.0000/52.0000;
        }
    }
    for(int dealerFaceUp=2; dealerFaceUp<12; dealerFaceUp++){
        for(int staySum=0; staySum<21; staySum++){
            
        }
    }
}