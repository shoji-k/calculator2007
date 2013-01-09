#include <vcl.h>
#pragma hdrstop

#include <TestFramework.hpp>

#include "Calclator.h"

class TTestCalclator : public TTestCase
{
public:
  __fastcall virtual TTestCalclator(AnsiString name) : TTestCase(name) {}
  virtual void __fastcall SetUp();
  virtual void __fastcall TearDown();
  
__published:
  void __fastcall Testplus();
};


void __fastcall TTestCalclator::SetUp()
{

}

void __fastcall TTestCalclator::TearDown()
{
}

void __fastcall TTestCalclator::Testplus()
{
	//int plus(int, int);
  	Calclator aCalc;

	CheckEquals(2, aCalc.plus(1,1));
	CheckEquals(3, aCalc.plus(1,2));
	CheckEquals(0, aCalc.plus(1,1));
}



static void registerTests()
{
  _di_ITestSuite iSuite;
  TTestSuite* testSuite = new TTestSuite("Testing Calclator.h");
  if (testSuite->GetInterface(iSuite)) {
    testSuite->AddTests(__classid(TTestCalclator));
    Testframework::RegisterTest(iSuite);
  } else {
    delete testSuite;
  }
}
#pragma startup registerTests 33


/* [For debug purposes only - To be removed soon!!]
GenerateHeaderComment=true
DefaultExtension=.cpp
FileName=C:\Documents and Settings\koba\My Documents\RAD Studio\Projects\TestCalclator.cpp
TestFramework=DUnit / C++ Win32
OutputPersonality=CPlusPlusBuilder.Personality
TestProject=C:\Documents and Settings\koba\My Documents\RAD Studio\Projects\Project1Tests.cbproj
UnitUnderTest=D:\workspace\buildersample\calculator3\Calclator.h
NameOfUnitUnderTest=Calclator.h
TestCaseBaseClass=TTestCase
TestCasePrefix=Test
UnitName=TestCalclator
Namespace=TestCalclator
TestClasses=
  <0>
    Name=Calclator
    Methods=
      <0>
        Name=plus
        Signature=int plus(int, int)
TestClass=
Method=
*/
