#pragma once
#include <iostream>
#include <fstream>
class LogTool
{
public:
	LogTool();
	~LogTool();


private:
	std::ofstream m_fileLog;
};

LogTool* GetLogTool();
