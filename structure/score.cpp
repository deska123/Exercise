#include<iostream>

/** 
 * This single .exe program functionates to calculate total score and final grade
 * consists of some score components by using score struct
 *
 * @author Dennis Pratama Kamah 
 * @version 2017.06.24
**/

struct Score
{
	char id[10];
	char studentName[100];
	int assignmentScore;
	int quizScore;
	int midTestScore;
	int finalTestScore;
	int finalScore;
	char finalGrade;
};

main()
{
	Score score;
	std::cout << "Input student ID (10 characters) : ";
	std::cin >> score.id;
	std::cout << "Input student name : ";
	std::cin >> score.studentName;
	std::cout << "Input score of assignment (0-100) : ";
	std::cin >> score.assignmentScore;
	std::cout << "Input score of quiz (0-100) : ";
	std::cin >> score.quizScore;
	std::cout << "Input score of Mid-term Test (0-100) : ";
	std::cin >> score.midTestScore;
	std::cout << "Input score of Final-term Test (0-100) : ";
	std::cin >> score.finalTestScore;
	
	std::cout << "\n";
	
	std::cout << "Score Components : \n";
	
	int assignment = 0.1 * score.assignmentScore;
	std::cout << "10% of assignment : " << assignment << "\n"; 
	
	int quiz = 0.2 * score.quizScore;
	std::cout << "20% of quiz : " << quiz << "\n"; 
	
	int mid = 0.3 * score.midTestScore;
	std::cout << "30% of mid-term : " << mid << "\n"; 
	
	int final = 0.4 * score.finalTestScore;
	std::cout << "40% of final-term : " << final << "\n"; 
	
	std::cout << "\n";
	
	score.finalScore = assignment + quiz + mid + final;
	std::cout << "Total Score : " << score.finalScore << "\n";
	
	if(score.finalScore > 0 && score.finalScore <= 40) {
		score.finalGrade = 'E';
	} else if(score.finalScore > 40 && score.finalScore <= 55) {
		score.finalGrade = 'D';
	} else if(score.finalScore > 55 && score.finalScore <= 70) {
		score.finalGrade = 'C';
	} else if(score.finalScore > 70 && score.finalScore <= 85) {
		score.finalGrade = 'B';
	} else {
		score.finalGrade = 'A';
	}
	
	std::cout << "Final Grade : " << score.finalGrade << "\n";
}
