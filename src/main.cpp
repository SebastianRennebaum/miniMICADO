#include <iostream>
#include <fstream>

#include "runtimeInfo.h"
#include "node.h"
#include "MissionAnalysis.h"
#include "Segment.h"
#include "Propeller.h"
#include "BladeElementTheory.h"


using namespace std;

runtimeInfo *myRuntimeInfo;//Pointer auf Objekt f�r Logfile und Consolenoutput
//vector<string> Input;//Input der guiSettings.xml Datei

int main()
{
    try
    {
        node& configXML=aixml::openDocument("miniMICADO_conf.xml");
        myRuntimeInfo=new runtimeInfo(configXML,"miniMICADO");

        MissionAnalysis myMissionAnalysis(configXML);


//        BladeElementTheory myBET;
//        myBET.calcBET(3,20,100,100,3);

//        Segment mySegment(configXML,5);
//
//        cout << mySegment.HorizontalAcceleration << endl << mySegment.VerticalDistance << endl;
//        getchar();

        return 0;
    }
    catch (const char * text)
    {
        cout<<text<<endl;
        exit(1);
    }
    catch (const string& text)
    {
        cout<<text<<endl;
        exit(1);
    }
    catch (const exception& e)
    {
        cout<<"Folgender C++-Standardfehler ist aufgetreten: " << e.what() << endl;
        exit(1);
    }
    catch (...)
    {
        cout<<"Ein nicht abgefangener Fehler ist aufgetreten - Beende."<<endl;
        exit(1);
    }
}

/*! \mainpage Projektvorlage
  Diese Projektvorlage ist ma�geblich f�r die Entwicklung von Programmen, die in der Vorentwurfsumgebung des ILR der RWTH Aachen
  eingebunden werden sollen.
  \section sec An example section
  This page contains the subsections \ref subsection1 and \ref subsection2.
  Einige Informationen zu Programmierstandards sind in \ref page2 zu finden.
  \subsection subsection1 The first subsection
  Text.
  \subsection subsection2 The second subsection
  More text.
*/

/*! \page page2 Programmierstandards
  Even more info.
*/
/*! \file ../projekte/A320/A320.xml
  Dateiinfo
*/
