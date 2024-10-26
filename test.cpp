#include <SFML/Graphics.hpp>
#include <vector>
#include <thread>
#include <chrono>
#include <iostream> // For std::cout, std::cin, std::cerr
#include <cstdlib> // For std::rand, std::srand
#include <algorithm> // For std::swap

using namespace std;
using namespace std::chrono_literals;

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int ARRAY_SIZE = 100;
const int BAR_WIDTH = WINDOW_WIDTH / ARRAY_SIZE;
const int DELAY = 50; // milliseconds

void drawArray(sf::RenderWindow &window, const vector<int>& array, int highlightedIndex, int sortedIndex) {
    window.clear();
    for (int i = 0; i < array.size(); ++i) {
        sf::RectangleShape bar(sf::Vector2f(BAR_WIDTH, array[i] * (WINDOW_HEIGHT / (float)ARRAY_SIZE)));
        bar.setPosition(i * BAR_WIDTH, WINDOW_HEIGHT - bar.getSize().y);

        if (i == highlightedIndex) {
            bar.setFillColor(sf::Color::Red);  // Highlight the currently compared element
        } else if (i <= sortedIndex) {
            bar.setFillColor(sf::Color::Green); // Highlight sorted elements
        } else {
            bar.setFillColor(sf::Color::White);
        }

        window.draw(bar);
    }
    window.display();
}

// Bubble Sort visualization
void bubbleSort(sf::RenderWindow &window, vector<int>& array) {
    int n = array.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
            drawArray(window, array, j, n - i - 1);
            std::this_thread::sleep_for(std::chrono::milliseconds(DELAY)); // Control speed
        }
    }
}

// Selection Sort visualization
void selectionSort(sf::RenderWindow &window, vector<int>& array) {
    int n = array.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        swap(array[i], array[minIndex]);
        drawArray(window, array, minIndex, i);
        this_thread:sleep_for(chrono::milliseconds(DELAY)); // Control speed
    }
}

// Insertion Sort visualization
void insertionSort(sf::RenderWindow &window, vector<int>& array) {
    int n = array.size();
    for (int i = 1; i < n; ++i) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
        drawArray(window, array, i, i);
        this_thread:sleep_for(chrono:milliseconds(DELAY)); // Control speed
    }
}

vector<int> generateRandomArray(int size, int maxValue) {
    vector<int> array(size);
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % maxValue + 1;
    }
    return array;
}

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Sorting Algorithm Visualization");

    vector<int> array = generateRandomArray(ARRAY_SIZE, ARRAY_SIZE);

    int choice;
    cout << "Choose sorting algorithm:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n";
    cin >> choice;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        switch (choice) {
            case 1:
                bubbleSort(window, array);
                break;
            case 2:
                selectionSort(window, array);
                break;
            case 3:
                insertionSort(window, array);
                break;
            default:
                cerr << "Invalid choice!";
                window.close();
                break;
        }

        drawArray(window, array, -1, array.size() - 1);
        window.display();
    }

    return 0;
}