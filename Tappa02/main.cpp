#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode({800, 600}), "Basket 2D");
// Sfondo
sf::RectangleShape sfondo({800.f, 600.f});
sfondo.setFillColor(sf::Color(235, 220, 190));

// Tabellone
sf::RectangleShape tabellone({200.f, 120.f});
tabellone.setPosition({300.f, 70.f});
tabellone.setFillColor(sf::Color::White);
tabellone.setOutlineThickness(3.f);
tabellone.setOutlineColor(sf::Color::Black);

// Ferro del canestro
sf::RectangleShape ferro({120.f, 8.f});
ferro.setPosition({340.f, 195.f});
ferro.setFillColor(sf::Color::Red);

// Pavimento
sf::RectangleShape pavimento({800.f, 100.f});
pavimento.setPosition({0.f, 500.f});
pavimento.setFillColor(sf::Color(190, 120, 70));
	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				window.close();
			}
		}

		window.clear();

			window.draw(sfondo);
			window.draw(tabellone);
			window.draw(ferro);
			window.draw(pavimento);

			window.display();
	}

	return 0;
}
