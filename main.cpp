
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

void boostCalculator() {
    double boost, seconds;
    cout << "Current boost (0-100): ";
    cin >> boost;
    cout << "Boost usage duration (seconds): ";
    cin >> seconds;

    if (!cin || boost < 0 || boost > 100 || seconds < 0) {
        cout << "Invalid input.\n";
        return;
    }

    // Approximate standard boost consumption.
    double remaining = max(0.0, boost - 33.3 * seconds);
    cout << fixed << setprecision(1);
    cout << "Estimated remaining boost: "
         << remaining << "\n";
}

void ballTrajectory() {
    double velocity, time;
    cout << "Initial vertical velocity (m/s): ";
    cin >> velocity;
    cout << "Time (seconds): ";
    cin >> time;

    if (!cin || time < 0) {
        cout << "Invalid input.\n";
        return;
    }

    // Simplified physics example, not an exact
    // Rocket League physics simulation.
    constexpr double gravity = 9.81;
    double height = velocity * time
                  - 0.5 * gravity * time * time;

    cout << fixed << setprecision(2);
    cout << "Estimated displacement: "
         << height << " m\n";
}

void trainingChecklist() {
    cout << "\nROCKET LEAGUE TRAINING\n";
    cout << "1. Aerial control practice\n";
    cout << "2. Ground dribbling\n";
    cout << "3. Boost pathing\n";
    cout << "4. Shadow defense\n";
    cout << "5. Shooting accuracy\n";
    cout << "6. Rotation awareness\n";
}

int main() {
    int choice = -1;

    while (choice != 0) {
        cout << "\n=== ROCKET LEAGUE C++ TOOLS ===\n";
        cout << "1. Boost Calculator\n";
        cout << "2. Ball Trajectory Example\n";
        cout << "3. Training Checklist\n";
        cout << "0. Exit\n";
        cout << "Select: ";

        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(
                numeric_limits<streamsize>::max(), '\n'
            );
            cout << "Invalid selection.\n";
            continue;
        }

        switch (choice) {
            case 1: boostCalculator(); break;
            case 2: ballTrajectory(); break;
            case 3: trainingChecklist(); break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid selection.\n";
        }

        if (!cin) {
            cin.clear();
            cin.ignore(
                numeric_limits<streamsize>::max(), '\n'
            );
        }
    }

    return 0;
}
