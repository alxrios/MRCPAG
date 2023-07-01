#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <string>

class ProgressBar
{
    public:
        ProgressBar();
        virtual ~ProgressBar();
		static std::string display(float);

    protected:

    private:
};

#endif // PROGRESSBAR_H