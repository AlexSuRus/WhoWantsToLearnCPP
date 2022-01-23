#include "filehandle.h"
#include "question.h"
#include <fstream>
#include<iostream>


using namespace std;
filehandle::filehandle()
{
}

question filehandle::readfromfile(int pos)
{
   question qobj;

   fin.open("questions.txt",ios::binary);
   fin.seekg(0);
   for(int i=1;i<pos;i++)
   {
       if(!fin.read((char *)&qobj,sizeof(qobj)))
       {
           cout<<"\nEnd of File reached !";
           exit(0);
       }


   }

   if(fin.read((char *)&qobj,sizeof(qobj)))
   {

   cout<<"\nQuestion: "<<qobj.questions;
   cout<<"\nAnswer1: "<<qobj.answer1;
   cout<<"\nAnswer2: "<<qobj.answer2;
   cout<<"\nAnswer3: "<<qobj.answer3;
   cout<<"\nAnswer4: "<<qobj.answer4;
   cout<<"\nthe answer option is"<<qobj.getanswer();
   }
   else
    {
       cout<<"Unable to open file";
   }
   fin.close();
   return qobj;
}

void filehandle::writetofile(question qobj)
{
    fout.open("questions.txt",ios::app);
    fout.write((char *)&qobj,sizeof(qobj));
    cout<<"File written";
    fout.close();
}
QString filehandle::getinfooffile()
{
   question qobj;

   fin.open("questions.txt",ios::binary);
   fin.seekg(0);
   for(int i=0;;i++)
   {
       if(!fin.read((char *)&qobj,sizeof(qobj)))
       {
           //Code to convert int to string format
           char char_type[10];
           sprintf(char_type, "%d", i);
           cout<<"no of questions in file:"<<char_type;
          //----------------------------------------
           QString qs(char_type);
             return qs;

       }


   }


   fin.close();
}
