void SetUp(){

    #if defined(_WIN32) || defined(_WIN64)
        std::cout << "Windows OS\n";
    #elif defined(__unix__) || defined(__unix)
        std::cout << "Unix-like OS\n";
    #elif defined(__APPLE__) || defined(__MACH__)
        std::cout << "Mac OS\n";
    #elif defined(__linux__)
        std::cout << "Linux OS\n";
    #else
        std::cout << "Unknown OS\n";
    #endif

}


int main(){
	SetUp();
}