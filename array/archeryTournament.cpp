#include <iostream>

main()
{
	std::cout << "Archery Tournament with 5 players" << "\n";
	std::cout << "===================================================================" << "\n\n";
	
	int a, b, c, d, e, scores[5];
	int position[5] = {1, 2, 3, 4, 5};
	
	std::cout << "Insert scores (0 - 5) for Player 1 (ex: 0 0 0 0 0) : ";
	std::cin >> a >> b >> c >> d >> e;
	scores[0] = a + b + c + d + e;
	std::cout << "\n";
	
	std::cout << "Insert scores (0 - 5) for Player 2 (ex: 0 0 0 0 0) : ";
	std::cin >> a >> b >> c >> d >> e;
	scores[1] = a + b + c + d + e;
	std::cout << "\n";
	
	std::cout << "Insert scores (0 - 5) for Player 3 (ex: 0 0 0 0 0) : ";
	std::cin >> a >> b >> c >> d >> e;
	scores[2] = a + b + c + d + e;
	std::cout << "\n";
	
	std::cout << "Insert scores (0 - 5) for Player 4 (ex: 0 0 0 0 0) : ";
	std::cin >> a >> b >> c >> d >> e;
	scores[3] = a + b + c + d + e;
	std::cout << "\n";
	
	std::cout << "Insert scores (0 - 5) for Player 5 (ex: 0 0 0 0 0) : ";
	std::cin >> a >> b >> c >> d >> e;
	scores[4] = a + b + c + d + e;
	
	std::cout << "\n" << "The Results : " << "\n\n";
	
	for(int n = 0; n <= 2; n++) {
		int max = scores[n];
		int post = n;
		for(int o = n + 1; o <= 4; o++) {
			if(scores[o] > max) {
				max = scores[o];
				scores[o] = scores[n];
				scores[n] = max;
				
				post = position[o];
				position[o] = position[n];
				position[n] = post; 
			}
		}
	}
	
	std::cout << "First Place :" << "\n";
	std::cout << "Participant " << position[0] << "\n";
	std::cout << "Total score : " << scores[0] << "\n\n";
	
	std::cout << "Second Place :" << "\n";
	std::cout << "Participant " << position[1] << "\n";
	std::cout << "Total score : " << scores[1] << "\n\n";
	
	std::cout << "Third Place :" << "\n";
	std::cout << "Participant " << position[2] << "\n";
	std::cout << "Total score : " << scores[2] << "\n\n";
	
}
