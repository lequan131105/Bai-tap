#include <bits/stdc++.h>
using namespace std;
struct game{
 string secretWord;
 string guessWord;
 int badGuesses;
 int hiddenLetter;

 void init(string word){
     secretWord = word;
     badGuesses = 0;
     guessWord=string(secretWord.size(),'-');
     hiddenLetter=secretWord.size();
 }
void update(char input){
       bool check=false;
      for(int i=0;i<secretWord.size();i++){
        if(guessWord[i]=='-'&&secretWord[i]==input){
            guessWord[i]=input;
            hiddenLetter--;
            check=true;
        }
      }
      if(check==false){
     badGuesses++;}
}
bool win(){
   return hiddenLetter ==0;
}
bool lose(){
   return badGuesses >=6;
}
bool isOver(){
     return win()||lose();
}

};
const string WORD_LIST[] = {
        "angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house", "island", "jewel",  "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
        "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
    };
const int WORD_COUNT = sizeof(WORD_LIST)/sizeof(string);

const string& chooseWord(){
    int randowIndex = rand()%WORD_COUNT;
    return WORD_LIST[randowIndex];
}
int main (int argc, int**argv){
 game Hangman;
 srand(time(0));
 Hangman.init(chooseWord());
 do{
    char input;
    cout <<Hangman.guessWord<<endl<<"Your bad guesses: "<<Hangman.badGuesses<<endl<<"Guess your word: ";
    cin>>input;
    Hangman.update(input);

}while(!Hangman.isOver());
if(Hangman.win()){
    cout <<"You win!";
}else cout <<"You lose! "<<endl<<"The secret word is: " <<Hangman.secretWord;
}

