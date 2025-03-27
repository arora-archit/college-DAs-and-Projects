#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class QnA
{
    public:
    const string questions[33] = {
        "In ODI Cricket, who created the record of scoring the fastest century in just 31 balls?",
        "If you call someone ‘Makkhichoos’ then what are you calling him?",
        "How many players of a Kho-Kho team can play on the field during the match?",
        "Which of these Indian cities is closest to the Pakistani city of Lahore?",
        "The language spoken by the people by Pakistan is?",
        "The term 'Googly' is associated with?",
        "India first took part in the Olympic Games in the year?",
        "Where are Kangaroos found?",
        "Oval stadium in England is associated with?",
        "In 2011 India won the World Cup. Who was adjudicated as the man of the series in the tournament?",
        "Eden Gardens in Kolkata is ----- stadium.",
        "Ronaldo is associated with?",
        "ICC’s 2007, the World Cup Cricket was held in?",
        "Wankhede Stadium is at?",
        "World’s most ancient game is?",
        "Stethoscope was invented by?",
        "A dye is prepared from?",
        "Which disease is caused by the fungi?",
        "Which is the Land of the Rising Sun?",
        "The desert that lies on the boundary between India and Pakistan is?",
        "In which kingdom is the story of the 'Bahubali' series of films mainly set?",
        "What is the common name for surgery conducted on coronary arteries that supply blood to the heart?",
        "In July 2017, Narendra Modi became the first Indian Prime Minister to visit which country?",
        "Which of these musical instruments is held in one hand and played with the other?",
        "On the last day of his life Bhagat Singh was reading a book about the Ideology of which revolutionary?",
        "Which Air Force officer had the unique honor of leading the fly-past over the Red Fort in Delhi on 15 August 1947?",
        "Which image appears on the flip side of the new 2000 Rs Note, launched in 2016?",
        "Which Indian hill station gets its name from the Tibetan words that mean 'land of the thunderbolt'?",
        "Which of these diseases is transmitted by mosquitoes?",
        "Who among these has served as the Ambassador of India to the United Nations?",
        "Who was the first Indian to win the World Junior Badminton Championships?",
        "Which of the following is a recipient of the Nobel Peace Prize?",
        "The cave temples at the historical site of Elephanta are dedicated to which God?"
    };
    const string options[33][4] = {
        {"Corey Anderson", "AB De Villiers", "Shahid Afridi", "Rohit Sharma"},
        {"Evil", "Humble", "Dishonest", "Miserly"},
        {"10", "9", "7", "8"},
        {"Srinagar", "Jaisalmer", "Amritsar", "Udhampur"},
        {"Hindi", "Palauan", "Sindhi", "English"},
        {"Cricket", "Football", "Badminton", "Hockey"},
        {"1920", "1928", "1972", "1976"},
        {"Bangladesh", "Kenya", "Pakistan", "Australia"},
        {"Polo", "Cricket", "Hockey", "Football"},
        {"Virat Kohli", "Yuvraj Singh", "M.S. Dhoni", "Zaheer Khan"},
        {"Tennis", "Cricket", "Hockey", "Polo"},
        {"Cricket", "Football", "Hockey", "Tennis"},
        {"Australia", "West Indies", "South Africa", "India"},
        {"Kolkata", "Mumbai", "Delhi", "Jaipur"},
        {"Wrestling", "Swimming", "Boxing", "Running"},
        {"Bessemer", "Rane Laennec", "Henry Becquerel", "None of these"},
        {"Sida", "Tridax", "Tephrosia", "Indigofera"},
        {"Polio", "Malaria", "Dermatitis", "Cholera"},
        {"China", "Taiwan", "Japan", "Australia"},
        {"Thar", "Sahara", "Gobi", "None of these"},
        {"Magadh", "Mahishmati", "Kalinga", "Badami"},
        {"Cataract", "Gastric", "Bypass", "Debriment"},
        {"Israel", "Jordan", "Saudi Arabia", "Qatar"},
        {"Tabla", "Santoor", "Mridangam", "Dafli"},
        {"Antonio Gramsci", "Che Guevera", "Leon Trotsky", "Vladimir Lenin"},
        {"Arjan Singh", "Pratap Chandra Lal", "Subroto Mukarjee", "Aspy Engineer"},
        {"Parliament of India", "Tractor", "Red Fort", "Mangalyaan"},
        {"Gangtok", "Aizawl", "Darjeeling", "Kohima"},
        {"Rabies", "Tetanus", "Japanese Encephalitis", "Plague"},
        {"Mohd Hamid Ansari", "I K Gujral", "Mohd Hidayatullah", "Zakir Hussain"},
        {"P V Sindhu", "Aparna Balan", "Saina Nehwal", "Jwala Gutta"},
        {"Mahatma Gandhi", "Swami Vivekananda", "Rabindranath Tagore", "Mother Teresa"},
        {"Hanuman", "Vishnu", "Shiva", "Kamadeva"}
    };

    const int answers[33] = {2, 4, 2, 3, 3, 1, 1, 4, 2, 2, 2, 2, 2, 2, 1, 3, 4, 3, 3, 1, 2, 3, 1, 4, 4, 1, 4, 3, 3, 1, 3, 4, 3};

};

class FiftyFifty {
public:
    string options[33][4] = {
        {"", "AB De Villiers", "", "Rohit Sharma"},
        {"Evil", "", "", "Miserly"},
        {"", "9", "", "8"},
        {"", "Jaisalmer", "Amritsar", ""},
        {"", "", "Sindhi", "English"},
        {"Cricket", "Football", "", ""},
        {"1920", "", "1972", ""},
        {"Bangladesh", "", "", "Australia"},
        {"", "Cricket", "Hockey", ""},
        {"", "Yuvraj Singh", "", "Zaheer Khan"},
        {"", "Cricket", "Hockey", ""},
        {"", "Football", "", "Tennis"},
        {"Australia", "West Indies", "", ""},
        {"Kolkata", "Mumbai", "", ""},
        {"Wrestling", "", "", "Running"},
        {"", "Rane Laennec", "Henry Becquerel", ""},
        {"", "Tridax", "", "Indigofera"},
        {"", "Malaria", "Dermatitis", ""},
        {"", "", "Japan", "Australia"},
        {"Thar", "", "Gobi", ""},
        {"", "Mahishmati", "", "Badami"},
        {"", "Gastric", "Bypass", ""},
        {"Israel", "Jordan", "", ""},
        {"", "", "Mridangam", "Dafli"},
        {"Antonio Gramsci", "", "", "Vladimir Lenin"},
        {"Arjan Singh", "Pratap Chandra Lal", "", ""},
        {"", "", "Red Fort", "Mangalyaan"},
        {"Gangtok", "", "Darjeeling", ""},
        {"", "", "Japanese Encephalitis", "Plague"},
        {"Mohd Hamid Ansari", "I K Gujral", "", ""},
        {"", "Aparna Balan", "Saina Nehwal", ""},
        {"Mahatma Gandhi", "", "", "Mother Teresa"},
        {"Hanuman", "", "Shiva", ""}
    };
};

class KBCGame : public QnA, public FiftyFifty {
private:
    string playerName;
    bool lifelineAvailable[3];
    long prizeAmounts[16] = {1000, 2000, 3000, 5000, 10000, 20000, 40000, 80000, 160000,
                           320000, 640000, 1250000, 2500000, 5000000, 10000000, 70000000};
    bool questionUsed[33];
    const int TOTAL_QUESTIONS = 33;
    
    int getRandomUnusedQuestion() {
        int availableQuestions = 0;
        
        for (int i = 0; i < TOTAL_QUESTIONS; i++) {
            if (!questionUsed[i]) {
                availableQuestions++;
            }
        }
        
        if (availableQuestions == 0) {
            return -1;
        }
        
        int targetIndex = rand() % availableQuestions;
        int currentIndex = -1;
        
        for (int i = 0; i < TOTAL_QUESTIONS; i++) {
            if (!questionUsed[i]) {
                currentIndex++;
                if (currentIndex == targetIndex) {
                    return i;
                }
            }
        }
        
        return -1;
    }
    
    void displayQuestion(int qIndex, int qNum) {
        cout << "\n\nQuestion " << qNum << endl;
        cout << QnA::questions[qIndex] << endl;
        
        cout << "1. " << QnA::options[qIndex][0] << endl;
        cout << "2. " << QnA::options[qIndex][1] << endl;
        cout << "3. " << QnA::options[qIndex][2] << endl;
        cout << "4. " << QnA::options[qIndex][3] << endl;
    }
    
    bool useFiftyFifty(int qIndex) {
        cout << "50-50 Lifeline Used:\n";
        cout << QnA::questions[qIndex] << endl;
    
        for (int i = 0; i < 4; i++) {
            if (!(FiftyFifty::options[qIndex][i].empty())) {
                cout << (i + 1) << ". " << FiftyFifty::options[qIndex][i] << endl;
            } else {
                cout << (i + 1) << ". " << endl;
            }
        }
    
        lifelineAvailable[0] = false;
    
        int userChoice;
        cout << "Enter your answer (1-4): ";
        cin >> userChoice;
    
        if (userChoice == QnA::answers[qIndex]) {
            cout << "Correct answer!" << endl;
            return true;
        } else {
            cout << "Wrong answer! Game over." << endl;
            return false;
        }
    }
    
    
    bool useDoubleDip(int qIndex) {
        cout << "Double Dip Lifeline Used:" << endl;
    
        int firstGuess;
        cout << "Enter your first guess (1-4): ";
        cin >> firstGuess;
    
        if (firstGuess == QnA::answers[qIndex]) {
            cout << "Correct answer!" << endl;
            lifelineAvailable[1] = false;
            return true;
        }
    
        cout << "That was incorrect. Enter your second guess (1-4): ";
        int secondGuess;
        cin >> secondGuess;
    
        if (secondGuess == QnA::answers[qIndex]) {
            cout << "Correct answer!" << endl;
            lifelineAvailable[1] = false;
            return true;
        } else {
            cout << "Wrong answer! Game over." << endl;
            return false;
        }
    }
    
    
    bool useFlipQuestion(int &qIndex, int questionNumber) {
        
        cout << "Flip the Question Lifeline Used:" << endl;
    
        questionUsed[qIndex] = true;
        lifelineAvailable[2] = false;
    
        int newQuestionIndex = getRandomUnusedQuestion();
    
        if (newQuestionIndex == -1) {
            cout << "No more questions available to flip to!" << endl;
            return false;
        }
    
        qIndex = newQuestionIndex;
    
        displayQuestion(qIndex, questionNumber);
    
        cout << "Enter your answer (1-4): ";
        int answer;
        cin >> answer;
    
        if (answer == QnA::answers[qIndex]) {
            cout << "Correct answer!" << endl;
            return true;
        } else {
            cout << "Wrong answer!" << endl;
            return false;
        }
    }
    

public:
    KBCGame(string name) : playerName(name) {
        lifelineAvailable[0] = true;
        lifelineAvailable[1] = true;
        lifelineAvailable[2] = true;
        
        for (int i = 0; i < TOTAL_QUESTIONS; i++) {
            questionUsed[i] = false;
        }
        
        srand(time(nullptr));
    }
    
    void play() {
    
        int questionNumber = 1;
        long amountWon = 0;
        bool gameRunning = true;
    
        while (gameRunning && questionNumber <= 16) {
            int questionIndex = getRandomUnusedQuestion();
            if (questionIndex == -1) {
                cout << "No more questions available! Game ending." << endl;
                break;
            }
    
            displayQuestion(questionIndex, questionNumber);
    
            int userChoice;
            while (true) {
                cout << "Enter your answer (1-4) or 9 for lifelines: ";
                cin >> userChoice;
    
                if ((userChoice >= 1 && userChoice <= 4) || userChoice == 9) {
                    break;
                } else {
                    cout << "Invalid choice! Please enter a number between 1 and 4, or 9 for lifelines." << endl;
                }
            }
    
            if (userChoice == 9) {
                bool anyLifelineAvailable = lifelineAvailable[0] || lifelineAvailable[1] || lifelineAvailable[2];
    
                if (!anyLifelineAvailable) {
                    cout << "You have no lifelines left!" << endl;
                } else {
                    int selectedLifeline;
                    while (true) {
                        cout << "Available lifelines: ";
                        if (lifelineAvailable[0]) cout << "1-Fifty-Fifty ";
                        if (lifelineAvailable[1]) cout << "2-Double Dip ";
                        if (lifelineAvailable[2]) cout << "3-Flip the Question ";
                        cout << endl;
    
                        cout << "Which lifeline do you want to use? ";
                        cin >> selectedLifeline;
    
                        if ((selectedLifeline == 1 && lifelineAvailable[0]) ||
                            (selectedLifeline == 2 && lifelineAvailable[1]) ||
                            (selectedLifeline == 3 && lifelineAvailable[2])) {
                            break;
                        } else {
                            cout << "Invalid lifeline selection! Choose an available lifeline." << endl;
                        }
                    }
    
                    bool lifeline_success = false;
                    if (selectedLifeline == 1) {
                        lifeline_success = useFiftyFifty(questionIndex);
                    } else if (selectedLifeline == 2) {
                        lifeline_success = useDoubleDip(questionIndex);
                    } else if (selectedLifeline == 3) {
                        lifeline_success = useFlipQuestion(questionIndex, questionNumber);
                    }
    
                    if (lifeline_success) {
                        amountWon = prizeAmounts[questionNumber - 1];
                    } else {
                        cout << "Wrong answer! Game over." << endl;
                        gameRunning = false;
                        break;
                    }
                }
            } else if (userChoice >= 1 && userChoice <= 4) {
                if (userChoice == QnA::answers[questionIndex]) {
                    cout << "Correct answer!" << endl;
                    amountWon = prizeAmounts[questionNumber - 1];
                } else {
                    cout << "Wrong answer! Game over." << endl;
                    gameRunning = false;
                    break;
                }
            }
    
            questionUsed[questionIndex] = true;
            questionNumber++;
        }
    
        cout << "Game over! " << playerName << ", you won ₹" << amountWon << "!" << endl;
    }
    
    
};

int main() {
    string playerName;
    cout << R"( _   __                   ______                                _____                                _   _ 
| | / /                   | ___ \                              /  __ \                              | | (_)
| |/ /  __ _ _   _ _ __   | |_/ / __ _ _ __   ___  __ _  __ _  | /  \/_ __ ___  _ __ ___ _ __   __ _| |_ _ 
|    \ / _` | | | | '_ \  | ___ \/ _` | '_ \ / _ \/ _` |/ _` | | |   | '__/ _ \| '__/ _ \ '_ \ / _` | __| |
| |\  \ (_| | |_| | | | | | |_/ / (_| | | | |  __/ (_| | (_| | | \__/\ | | (_) | | |  __/ |_) | (_| | |_| |
\_| \_/\__,_|\__,_|_| |_| \____/ \__,_|_| |_|\___|\__, |\__,_|  \____/_|  \___/|_|  \___| .__/ \__,_|\__|_|
                                                   __/ |                                | |                
                                                  |___/                                 |_|                )";
    cout << "\n\nEnter your name: ";
    getline(cin, playerName);
    cout << "Welcome, " << playerName << "!" << endl;
    KBCGame game(playerName);
    game.play();
    return 0;
}
