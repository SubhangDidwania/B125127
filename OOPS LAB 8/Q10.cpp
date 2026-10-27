#include <iostream>
using namespace std;

class Recommender {
public:
    virtual double generateRecommendation(int userRating, int popularity) const = 0;
};

class PersonalizedRecommender : public Recommender {
public:
    double generateRecommendation(int userRating, int popularity) const override {
        return (0.7 * userRating) + (0.3 * popularity);
    }
};

class TrendingRecommender : public Recommender {
public:
    double generateRecommendation(int userRating, int popularity) const override {
        return (0.3 * userRating) + (0.7 * popularity);
    }
};

int main() {
    int userRating = 80;
    int popularity = 60;

    Recommender* personalized = new PersonalizedRecommender();
    Recommender* trending = new TrendingRecommender();

    cout << "User rating: " << userRating << endl;
    cout << "Popularity: " << popularity << endl;
    cout << "Personalized recommendation score: " << personalized->generateRecommendation(userRating, popularity) << endl;
    cout << "Trending recommendation score: " << trending->generateRecommendation(userRating, popularity) << endl;

    delete personalized;
    delete trending;

    return 0;
}
