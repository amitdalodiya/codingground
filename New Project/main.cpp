#include <iostream>

using namespace std;
class BootFileLoader 
{
public:
  //BootFileLoader( unsigned int ipAddr, bool forceTFTP );
  static BootFileLoader *instance(  );

private:
  

  static BootFileLoader *mBootFileLoader;
  static bool mBootFilePassed;

  bool parseBootFile();

  char mBldSystemZipFileName[ 64 ];
  char mBrdSystemZipFileName[ 64 ];
  char mBotSystemZipFileName[ 64 ];
};

BootFileLoader *BootFileLoader::mBootFileLoader = 0;
bool BootFileLoader::mBootFilePassed = false;
BootFileLoader *BootFileLoader::instance(  )
{
// this was not taking boot-mode every time when we change pers boot mode.
//might be we need to create new object every time to make it behave correctly.
//this seems to bad style.
  cout<< mBootFileLoader<< endl;
  //if(mBootFileLoader)
    //delete mBootFileLoader;
 cout<< mBootFileLoader<< endl;
  //mBootFileLoader = 0;
  //if ( mBootFileLoader == 0 )
    mBootFileLoader = new BootFileLoader( );

  return mBootFileLoader;
}
int main()
{
   cout << "Hello World" << endl; 
   BootFileLoader::instance(  );
   BootFileLoader::instance(  );
   BootFileLoader::instance(  );
   BootFileLoader::instance(  );
   BootFileLoader::instance(  );
   
   return 0;
}

