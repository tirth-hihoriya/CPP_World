#include <iostream>

using namespace std;

class Log
{
    public:
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;
    private:
        int m_Loglevel = LogLevelInfo;      // `m_` is a convention for private class member variables
    public:
        void Setlevel(int level)
        {
                m_Loglevel = level;
        } 
        void Warn(const char* message)
        {
            if(m_Loglevel >= LogLevelWarning)
            cout << "[Warning] : " <<  message << endl;
        }
        void Error(const char* message)
        {
            if(m_Loglevel >= LogLevelError)
            cout << "[Error] : " <<  message << endl;
        }
        void Info(const char* message)
        {
            if(m_Loglevel >= LogLevelInfo)
            cout << "[Info] : " <<  message << endl;
        }
    

};

int main()
{
    Log log;
    log.Setlevel(log.LogLevelInfo);
    log.Warn("Its a warning...!!!"); 
    log.Error("Its an Error...!!!");
    log.Info("Its an Info ...!!");


}