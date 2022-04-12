
// ofstream:to open file
// istream:read file

#include<iostream>
#include<fstream>

using namespace std;

void open(const *filename,ios::openmode);

ios::app  //app means append mode

ios::in //file is open to read

ios::out //file is open to write

ios::binary //another mode where file is open in binary mode

ios::ate //sets inital position at end of file

ios::trunc //previous content is replace by new content

ofstream outfile;

outfile.open('filename',ios::out|ios::truc);

// open file

// by using constructor ---method=1

ifstream(const char * filename,ios_base::openmode mode=ios_base::in);
ifstream fin(filename,openmode) by default openmode = ios::in ifstream fin("filename");


// by using open method --method-2

ifstream fin;
fin.open(filename,openmode)
fin.open("filename");

filename.close();