#ifndef WRITECLASS_H
#define WRITECLASS_H

class WriteClass
{
    public:
        WriteClass();
        virtual ~WriteClass();
		static void writeFile();
		/*This function is to read input
		   from the user and writing it
		   to a txt file using c++ funcitons
		   for avoid formating issues.
		   Only use once.*/
		static void writeFile2();

    protected:

    private:
};

#endif // WRITECLASS_H