// https://onlinejudge.org/external/1/162.pdf
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	string card;
	while (1)
	{
		// Init
		int turn = 0;
		vector<list<int>> players(2);
		
        // Read
		for (int i = 0; i < 52; ++i, turn = !turn)
		{
			cin >> card;

			// If # -> finish program
			if (card[0] == '#')
				return 0;

			// Evaluate card (based on "value to cover")
			switch (card[1])
			{
				case 'J':
					players[turn].push_front(1);
					break;
				case 'Q':
					players[turn].push_front(2);
					break;
				case 'K':
					players[turn].push_front(3);
					break;
				case 'A':
					players[turn].push_front(4);
					break;
				default:
					players[turn].push_front(0);
			}
		}

		list<int> gameDeck;
		bool cycle = false;
		
        // Continue the game (while current player has cards)
		while (!players[turn].empty())
		{
			// Get value of current card
			int currentCard = players[turn].front();
			
            // Delete card from player's deck
			players[turn].pop_front();

			// Insert current card on game's deck
			gameDeck.push_back(currentCard);

			// Change turn
			turn = !turn;

			// While current card value is nonzero
			while (currentCard)
			{
				// Current player has cards?
				if (players[turn].empty())
				{
					cycle = false;
					break;
				}

				cycle = true;

				// Get current player's card
				int card = players[turn].front();

				// Delete card from player's deck
				players[turn].pop_front();

				// Insert current card on game's deck
				gameDeck.push_back(card);

				// Face card?
				if (card)
				{
                    // Change current player and card
					turn = !turn;
					currentCard = card;
				}
				else
                {
				    // Normal card - just decrease the value of current card
					--currentCard;
                }
			}
			
			if (cycle)
			{
                // Was a cycle -> insert cards to last player that played a face card
				cycle = false;
				turn = !turn;
				while (!gameDeck.empty())
				{
					players[turn].push_back(gameDeck.front());
					gameDeck.pop_front();
				}
			}
		}

		// If non-dealer's deck is empty, then the winner is the dealer
		if (players[0].empty())
			cout << "1 " << setw(2) << players[1].size() << "\n";
		else
			cout << "2 " << setw(2) << players[0].size() << "\n";
	}

	return  0;    
}