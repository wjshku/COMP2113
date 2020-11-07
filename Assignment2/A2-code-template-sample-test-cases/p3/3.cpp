#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Search for a word w in a file named fn
// word: word to search for
// fn: name of file to search
// nLines: (output) number of lines w appear in fn
// total: (output) total number of occurrences of w in fn
// return 0 if file operation is successful
// return 1 otherwise
int SearchWord(string word, string fn, int &nLines, int &total)
{
	string line;
	int start,
	    pos,
	    temp = 0; //in order to find all words in a line

	ifstream fin;
	fin.open(fn.c_str());
	if ( fin.fail() ){
	//	cout << "Error in file opening!"<< endl;
 		return 1;
 	}
	
	nLines = 0;
	total = 0;

	for(int i = 0; i<word.length();i++){ //transform word to lowercase
                        word[i] = tolower(word[i]);
                }

	//cout<<"need to find: "<<word<<endl;
	while(getline(fin,line)){
		start = 0;
		//cout<<line<<endl;
		for(int i = 0; i<line.length();i++){ //transform to lowercase
			line[i] = tolower(line[i]);
		}

		
		while(line.find(word,start)!=-1){
			pos = line.find(word,start);
                        start = line.find(word,start) + word.length();
			if(pos ==0 && line[pos + word.length()] == ' '){
				temp++;
                                //cout<<"in front"<<endl;
                        }else if(pos + word.length() == line.length() && line[pos - 1] == ' '){
			       	temp++;
                                //cout<<"in the end"<<endl;
                        }else if(line[pos - 1] == ' '&& line[pos + word.length()] == ' '){
				temp++;
                                //cout<<"in middle"<<endl;
			}
		}
		if(temp > 0) nLines++;
		total += temp;
		temp = 0;
	}
	fin.close();
	return 0;
}



// argc is the number of arguments from the command line
// argv[0] == program name
// argv[1..argc-1] are the arguments
// e.g., if this program's name is "prog" and the following command is run
// at the command prompt:
// > ./prog word file1 file2
// then in the main function, argc is 4, and argv[0] is "./prog",
// argv[1] is "word", argv[2] = "file1", argv[3] = "file2"
//
// usage: ./wordsearch word_to_search file1 file2 files3 ...
//
int main(int argc, char* argv[])
{
  if (argc < 3) {
    cout << "usage: " << argv[0] << " [word_to_search] [file1] [file2] [file3]...\n";
    exit(1);
  }

  string word = argv[1];  // word to search for

  // loop through all the filenames in the command line argument
  for (int i = 2; i < argc; ++i) {
    string filename = argv[i];
    int lineCount=0, totalCount=0;
    // search word in file
    if (SearchWord(word, filename, lineCount, totalCount))
      cout << filename << ": error opening file" << endl;
    else
      cout << filename << ": " << lineCount << " " << totalCount << endl;
  }


  return 0;

}
