#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>


int main() {
    double probability;
    double pct_a;
    double pct_b;
    std:: string team_a;
    std:: string team_b;
    std:: unordered_map<std::string, double> data;

    // Win Percentages of NBA Teams
    data["Heat"] = 0.646;
    data["Celtics"] = 0.622;
    data["Bucks"] = 0.622;
    data["76ers"] = 0.622;
    data["Raptors"] = 0.585;
    data["Bulls"] = 0.561;
    data["Nets"] = 0.537;
    data["Cavaliers"] = 0.537;
    data["Hawks"] = 0.524;
    data["Hornets"] = 0.524;
    data["Knicks"] = 0.451;
    data["Wizards"] = 0.427;
    data["Pacers"] = 0.305;
    data["Pistons"] = 0.280;
    data["Magic"] = 0.268;
    data["Suns"] = 0.780;
    data["Grizzlies"] = 0.683;
    data["Warriors"] = 0.646;
    data["Mavericks"] = 0.561;
    data["Jazz"] = 0.598;
    data["Nuggets"] = 0.585;
    data["Timberwolves"] = 0.561;
    data["Clippers"] = 0.512;
    data["Pelicans"] = 0.439;
    data["Spurs"] = 0.415;
    data["Lakers"] = 0.402;
    data["Kings"] = 0.366;
    data["Trail Blazers"] = 0.329;
    data["Thunder"] = 0.293;
    data["Rockets"] = 0.244;

    // Get Input From User
    std:: cout << "Team A:" << std:: endl;
    std:: getline(std:: cin, team_a);
    std:: cout << "Team B:" << std:: endl;
    std:: getline(std:: cin, team_b);

    // Find Key
    // Checking If Team Exists
    if(data.find(team_a) == data.end() || data.find(team_b) == data.end()) {
        // Finding Which Team Exists
        if(data.find(team_a) != data.end()) {
            std:: cout << "We couldn't find team B." << std:: endl;
        }   else if(data.find(team_b) != data.end()) {
            std:: cout << "We couldn't find team A." << std:: endl;
        }   else {
            std:: cout << "We couldn't find either team." << std:: endl;
        }

    }   else {
        // Getting Win Percentages
        pct_a = data[team_a];
        pct_b = data[team_b];

        // Calculate
        probability = (pct_a * (1 - pct_b) * 100) / (pct_a * (1 - pct_b) + pct_b * (1 - pct_a));

        // Give User Results
        std::cout << "The " << team_a << " have a " << std::round(probability) << "% chance of beating the " << team_b
                  << "." << std::endl;
    }
    // Press any key to close
    std:: cout << "Press ENTER to close.";
    std:: getchar();
    return 0;
}
