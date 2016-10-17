#include <iostream>
#include <chrono>

using namespace std;

bool isPrimeRootN(long long int number) {
    for (long long int i = 2; i*i < number; i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}

bool isPrimeN(long long int number) {
    for (long long int i = 2; i < number; i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}


int main() {


    cout << "Is 7 prime?: " << isPrimeN(7) << endl;
    cout << "Is 7 prime?: " << isPrimeRootN(7) << endl;


    chrono::time_point<chrono::system_clock> start, end;

    start = chrono::system_clock::now();

    //TODO - Enter in timed call here
    cout << "Is the number prime " << isPrimeN(57757791939599) << '\n';
    //cout << "Is the number prime " << isPrimeRootN(57757791939599) << '\n';

    end = chrono::system_clock::now();


    chrono::duration<double> elapsed_seconds = end - start;
    time_t end_time = chrono::system_clock::to_time_t(end);
    cout << "elapsed time: " << elapsed_seconds.count() << "s\n";


    return 0;
}