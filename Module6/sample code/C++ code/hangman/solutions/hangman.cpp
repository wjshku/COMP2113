#include<iostream>
#include<cstdlib>
#include<ctime>

#include<string>

using namespace std;

string init_answer( int );
void show_hangman( int );
bool isGuessInWord( string, char );
void update_answer( string, string &, char );

int main()
{
    string wordlist[10] = { "engineering", "hangman", "brainstorm", "random",
        "envelope", "interface", "iceberg", "humour", "lemon", "commander"};

    // choose a random word from the above list
    srand( time(0) );
    // TODO:  Task 1: fill in the index to choose a random word from the word list
    string word = wordlist[ rand()%10 ];

    // initialize the answer string
    // TODO:  Task 3: call init_answer and assign it to answer
    string answer = init_answer( word.length() );

    bool endgame = false;       // indicate whether end game or not
    int num_wrong_guess = 0;    // the number of wrong guesses

    char guess;                 // the guess letter input by user

    while (!endgame)
    {
        cout << "Word: " << answer << endl;
        show_hangman( num_wrong_guess );

        // determine if it's an end game
        // TODO:  Task 4: fill in the end-of-game conditions
        if ( word == answer )
        {
            cout << "You win!" << endl;
            endgame = true;
        }
        else if (num_wrong_guess == 6)
        {
            cout << "You lose!" << endl;
            endgame = true;
        }
        else {

            cout << "Guess a letter: ";
            cin >> guess;

            if ( isGuessInWord( word, guess) )
                update_answer( word, answer, guess );
            else
                num_wrong_guess++;
        }

    }

    return 0;
}

// return a string containing a sequence of '-' with specified length
string init_answer( int length )
{
    string g;

    // TODO: Task 2: compose the string g so that its length = length and
    // it only contains the letter '-'
    for (int i = 0; i < length; i++)
        g += '-';

    return g;
}

// show the hangman diagram
// state is the number of wrong guess
void show_hangman( int state )
{
    // first line
    cout << "       |" << endl;

    // second line
    if (state >= 1)
        cout << "       O" << endl;
    else
        cout << endl;

    // TODO: Task 7: Complete displaying the 3rd and 4th lines
    // of the hangman figure

    // third line
    if (state == 2)
        cout << "       |" << endl;
    else if (state == 3)
        cout << "      /|" << endl;
    else if (state > 3)
        cout << "      /|\\" << endl;
    else
        cout << endl;

    // fourth line
    if (state == 5)
        cout << "      /" << endl;
    else if (state == 6)
        cout << "      / \\" << endl;
    else
        cout << endl;

}

// return if the letter c appears in the string w
bool isGuessInWord( string w, char c)
{
    // TODO:  Task 5:  complete the function return a boolean value
    // to indicate whether c appears in w
    return (w.find(c) != string::npos);
}

// assume that w and ans are of the same length
// copy all occurrences of letter c in string w to the corresponding
// positions in string ans
// e.g. string w = "xyzxyz"
// and string ans = "------", char c = 'y'
// then ans will become "-y--y-"
void update_answer( string w, string & ans, char c)
{
    // TODO:  Task 6
    for (int i = 0; i < w.length(); ++i)
        if (w[i] == c)
            ans[i] = c;
}
