#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string result;
    if(S == 'M') {
        if(height < 1.7) {
            result = "Short";
        } else if(height >= 1.7 && height < 1.85) {
            result = "Normal";
        } else result = "Tall";
    } else {
        if(height < 1.6) {
            result = "Short";
        } else if(height >= 1.6 && height < 1.75) {
            result = "Normal";
        } else result = "Tall";
    }
    std::cout << result << std::endl;
    // use return to return your result
    // make use of control flow statements
    return result;
}