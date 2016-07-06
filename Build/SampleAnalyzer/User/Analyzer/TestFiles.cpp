#include "SampleAnalyzer/User/Analyzer/TestFiles.h"
using namespace MA5;
using namespace std;

// -----------------------------------------------------------------------------
// Initialize
// function called one time at the beginning of the analysis
// -----------------------------------------------------------------------------
bool TestFiles::Initialize(const MA5::Configuration& cfg, const std::map<std::string,std::string>& parameters)
{
  cout << "BEGIN Initialization" << endl;
  // initialize variables, histos
  // Initializing PhysicsService for MC
  PHYSICS->mcConfig().Reset();

    // definition of the multiparticle "hadronic"
  PHYSICS->mcConfig().AddHadronicId(-20543);
  PHYSICS->mcConfig().AddHadronicId(-20533);
  PHYSICS->mcConfig().AddHadronicId(-20523);
  PHYSICS->mcConfig().AddHadronicId(-20513);
  PHYSICS->mcConfig().AddHadronicId(-20433);
  PHYSICS->mcConfig().AddHadronicId(-20423);
  PHYSICS->mcConfig().AddHadronicId(-20413);
  PHYSICS->mcConfig().AddHadronicId(-20323);
  PHYSICS->mcConfig().AddHadronicId(-20313);
  PHYSICS->mcConfig().AddHadronicId(-20213);
  PHYSICS->mcConfig().AddHadronicId(-10543);
  PHYSICS->mcConfig().AddHadronicId(-10541);
  PHYSICS->mcConfig().AddHadronicId(-10533);
  PHYSICS->mcConfig().AddHadronicId(-10531);
  PHYSICS->mcConfig().AddHadronicId(-10523);
  PHYSICS->mcConfig().AddHadronicId(-10521);
  PHYSICS->mcConfig().AddHadronicId(-10513);
  PHYSICS->mcConfig().AddHadronicId(-10511);
  PHYSICS->mcConfig().AddHadronicId(-10433);
  PHYSICS->mcConfig().AddHadronicId(-10431);
  PHYSICS->mcConfig().AddHadronicId(-10423);
  PHYSICS->mcConfig().AddHadronicId(-10421);
  PHYSICS->mcConfig().AddHadronicId(-10413);
  PHYSICS->mcConfig().AddHadronicId(-10411);
  PHYSICS->mcConfig().AddHadronicId(-10323);
  PHYSICS->mcConfig().AddHadronicId(-10321);
  PHYSICS->mcConfig().AddHadronicId(-10313);
  PHYSICS->mcConfig().AddHadronicId(-10311);
  PHYSICS->mcConfig().AddHadronicId(-10213);
  PHYSICS->mcConfig().AddHadronicId(-10211);
  PHYSICS->mcConfig().AddHadronicId(-5554);
  PHYSICS->mcConfig().AddHadronicId(-5544);
  PHYSICS->mcConfig().AddHadronicId(-5542);
  PHYSICS->mcConfig().AddHadronicId(-5534);
  PHYSICS->mcConfig().AddHadronicId(-5532);
  PHYSICS->mcConfig().AddHadronicId(-5524);
  PHYSICS->mcConfig().AddHadronicId(-5522);
  PHYSICS->mcConfig().AddHadronicId(-5514);
  PHYSICS->mcConfig().AddHadronicId(-5512);
  PHYSICS->mcConfig().AddHadronicId(-5503);
  PHYSICS->mcConfig().AddHadronicId(-5444);
  PHYSICS->mcConfig().AddHadronicId(-5442);
  PHYSICS->mcConfig().AddHadronicId(-5434);
  PHYSICS->mcConfig().AddHadronicId(-5432);
  PHYSICS->mcConfig().AddHadronicId(-5424);
  PHYSICS->mcConfig().AddHadronicId(-5422);
  PHYSICS->mcConfig().AddHadronicId(-5414);
  PHYSICS->mcConfig().AddHadronicId(-5412);
  PHYSICS->mcConfig().AddHadronicId(-5403);
  PHYSICS->mcConfig().AddHadronicId(-5401);
  PHYSICS->mcConfig().AddHadronicId(-5342);
  PHYSICS->mcConfig().AddHadronicId(-5334);
  PHYSICS->mcConfig().AddHadronicId(-5332);
  PHYSICS->mcConfig().AddHadronicId(-5324);
  PHYSICS->mcConfig().AddHadronicId(-5322);
  PHYSICS->mcConfig().AddHadronicId(-5314);
  PHYSICS->mcConfig().AddHadronicId(-5312);
  PHYSICS->mcConfig().AddHadronicId(-5303);
  PHYSICS->mcConfig().AddHadronicId(-5301);
  PHYSICS->mcConfig().AddHadronicId(-5242);
  PHYSICS->mcConfig().AddHadronicId(-5232);
  PHYSICS->mcConfig().AddHadronicId(-5224);
  PHYSICS->mcConfig().AddHadronicId(-5222);
  PHYSICS->mcConfig().AddHadronicId(-5214);
  PHYSICS->mcConfig().AddHadronicId(-5212);
  PHYSICS->mcConfig().AddHadronicId(-5203);
  PHYSICS->mcConfig().AddHadronicId(-5201);
  PHYSICS->mcConfig().AddHadronicId(-5142);
  PHYSICS->mcConfig().AddHadronicId(-5132);
  PHYSICS->mcConfig().AddHadronicId(-5122);
  PHYSICS->mcConfig().AddHadronicId(-5114);
  PHYSICS->mcConfig().AddHadronicId(-5112);
  PHYSICS->mcConfig().AddHadronicId(-5103);
  PHYSICS->mcConfig().AddHadronicId(-5101);
  PHYSICS->mcConfig().AddHadronicId(-4444);
  PHYSICS->mcConfig().AddHadronicId(-4434);
  PHYSICS->mcConfig().AddHadronicId(-4432);
  PHYSICS->mcConfig().AddHadronicId(-4424);
  PHYSICS->mcConfig().AddHadronicId(-4422);
  PHYSICS->mcConfig().AddHadronicId(-4414);
  PHYSICS->mcConfig().AddHadronicId(-4412);
  PHYSICS->mcConfig().AddHadronicId(-4403);
  PHYSICS->mcConfig().AddHadronicId(-4334);
  PHYSICS->mcConfig().AddHadronicId(-4332);
  PHYSICS->mcConfig().AddHadronicId(-4324);
  PHYSICS->mcConfig().AddHadronicId(-4322);
  PHYSICS->mcConfig().AddHadronicId(-4314);
  PHYSICS->mcConfig().AddHadronicId(-4312);
  PHYSICS->mcConfig().AddHadronicId(-4303);
  PHYSICS->mcConfig().AddHadronicId(-4301);
  PHYSICS->mcConfig().AddHadronicId(-4232);
  PHYSICS->mcConfig().AddHadronicId(-4224);
  PHYSICS->mcConfig().AddHadronicId(-4222);
  PHYSICS->mcConfig().AddHadronicId(-4214);
  PHYSICS->mcConfig().AddHadronicId(-4212);
  PHYSICS->mcConfig().AddHadronicId(-4203);
  PHYSICS->mcConfig().AddHadronicId(-4201);
  PHYSICS->mcConfig().AddHadronicId(-4132);
  PHYSICS->mcConfig().AddHadronicId(-4122);
  PHYSICS->mcConfig().AddHadronicId(-4114);
  PHYSICS->mcConfig().AddHadronicId(-4112);
  PHYSICS->mcConfig().AddHadronicId(-4103);
  PHYSICS->mcConfig().AddHadronicId(-4101);
  PHYSICS->mcConfig().AddHadronicId(-3334);
  PHYSICS->mcConfig().AddHadronicId(-3324);
  PHYSICS->mcConfig().AddHadronicId(-3322);
  PHYSICS->mcConfig().AddHadronicId(-3314);
  PHYSICS->mcConfig().AddHadronicId(-3312);
  PHYSICS->mcConfig().AddHadronicId(-3303);
  PHYSICS->mcConfig().AddHadronicId(-3224);
  PHYSICS->mcConfig().AddHadronicId(-3222);
  PHYSICS->mcConfig().AddHadronicId(-3214);
  PHYSICS->mcConfig().AddHadronicId(-3212);
  PHYSICS->mcConfig().AddHadronicId(-3203);
  PHYSICS->mcConfig().AddHadronicId(-3201);
  PHYSICS->mcConfig().AddHadronicId(-3122);
  PHYSICS->mcConfig().AddHadronicId(-3114);
  PHYSICS->mcConfig().AddHadronicId(-3112);
  PHYSICS->mcConfig().AddHadronicId(-3103);
  PHYSICS->mcConfig().AddHadronicId(-3101);
  PHYSICS->mcConfig().AddHadronicId(-2224);
  PHYSICS->mcConfig().AddHadronicId(-2214);
  PHYSICS->mcConfig().AddHadronicId(-2212);
  PHYSICS->mcConfig().AddHadronicId(-2203);
  PHYSICS->mcConfig().AddHadronicId(-2114);
  PHYSICS->mcConfig().AddHadronicId(-2112);
  PHYSICS->mcConfig().AddHadronicId(-2103);
  PHYSICS->mcConfig().AddHadronicId(-2101);
  PHYSICS->mcConfig().AddHadronicId(-1114);
  PHYSICS->mcConfig().AddHadronicId(-1103);
  PHYSICS->mcConfig().AddHadronicId(-545);
  PHYSICS->mcConfig().AddHadronicId(-543);
  PHYSICS->mcConfig().AddHadronicId(-541);
  PHYSICS->mcConfig().AddHadronicId(-535);
  PHYSICS->mcConfig().AddHadronicId(-533);
  PHYSICS->mcConfig().AddHadronicId(-531);
  PHYSICS->mcConfig().AddHadronicId(-525);
  PHYSICS->mcConfig().AddHadronicId(-523);
  PHYSICS->mcConfig().AddHadronicId(-521);
  PHYSICS->mcConfig().AddHadronicId(-515);
  PHYSICS->mcConfig().AddHadronicId(-513);
  PHYSICS->mcConfig().AddHadronicId(-511);
  PHYSICS->mcConfig().AddHadronicId(-435);
  PHYSICS->mcConfig().AddHadronicId(-433);
  PHYSICS->mcConfig().AddHadronicId(-431);
  PHYSICS->mcConfig().AddHadronicId(-425);
  PHYSICS->mcConfig().AddHadronicId(-423);
  PHYSICS->mcConfig().AddHadronicId(-421);
  PHYSICS->mcConfig().AddHadronicId(-415);
  PHYSICS->mcConfig().AddHadronicId(-413);
  PHYSICS->mcConfig().AddHadronicId(-411);
  PHYSICS->mcConfig().AddHadronicId(-325);
  PHYSICS->mcConfig().AddHadronicId(-323);
  PHYSICS->mcConfig().AddHadronicId(-321);
  PHYSICS->mcConfig().AddHadronicId(-315);
  PHYSICS->mcConfig().AddHadronicId(-313);
  PHYSICS->mcConfig().AddHadronicId(-311);
  PHYSICS->mcConfig().AddHadronicId(-215);
  PHYSICS->mcConfig().AddHadronicId(-213);
  PHYSICS->mcConfig().AddHadronicId(-211);
  PHYSICS->mcConfig().AddHadronicId(111);
  PHYSICS->mcConfig().AddHadronicId(113);
  PHYSICS->mcConfig().AddHadronicId(115);
  PHYSICS->mcConfig().AddHadronicId(130);
  PHYSICS->mcConfig().AddHadronicId(211);
  PHYSICS->mcConfig().AddHadronicId(213);
  PHYSICS->mcConfig().AddHadronicId(215);
  PHYSICS->mcConfig().AddHadronicId(221);
  PHYSICS->mcConfig().AddHadronicId(223);
  PHYSICS->mcConfig().AddHadronicId(225);
  PHYSICS->mcConfig().AddHadronicId(310);
  PHYSICS->mcConfig().AddHadronicId(311);
  PHYSICS->mcConfig().AddHadronicId(313);
  PHYSICS->mcConfig().AddHadronicId(315);
  PHYSICS->mcConfig().AddHadronicId(321);
  PHYSICS->mcConfig().AddHadronicId(323);
  PHYSICS->mcConfig().AddHadronicId(325);
  PHYSICS->mcConfig().AddHadronicId(331);
  PHYSICS->mcConfig().AddHadronicId(333);
  PHYSICS->mcConfig().AddHadronicId(335);
  PHYSICS->mcConfig().AddHadronicId(411);
  PHYSICS->mcConfig().AddHadronicId(413);
  PHYSICS->mcConfig().AddHadronicId(415);
  PHYSICS->mcConfig().AddHadronicId(421);
  PHYSICS->mcConfig().AddHadronicId(423);
  PHYSICS->mcConfig().AddHadronicId(425);
  PHYSICS->mcConfig().AddHadronicId(431);
  PHYSICS->mcConfig().AddHadronicId(433);
  PHYSICS->mcConfig().AddHadronicId(435);
  PHYSICS->mcConfig().AddHadronicId(441);
  PHYSICS->mcConfig().AddHadronicId(443);
  PHYSICS->mcConfig().AddHadronicId(445);
  PHYSICS->mcConfig().AddHadronicId(511);
  PHYSICS->mcConfig().AddHadronicId(513);
  PHYSICS->mcConfig().AddHadronicId(515);
  PHYSICS->mcConfig().AddHadronicId(521);
  PHYSICS->mcConfig().AddHadronicId(523);
  PHYSICS->mcConfig().AddHadronicId(525);
  PHYSICS->mcConfig().AddHadronicId(531);
  PHYSICS->mcConfig().AddHadronicId(533);
  PHYSICS->mcConfig().AddHadronicId(535);
  PHYSICS->mcConfig().AddHadronicId(541);
  PHYSICS->mcConfig().AddHadronicId(543);
  PHYSICS->mcConfig().AddHadronicId(545);
  PHYSICS->mcConfig().AddHadronicId(551);
  PHYSICS->mcConfig().AddHadronicId(553);
  PHYSICS->mcConfig().AddHadronicId(555);
  PHYSICS->mcConfig().AddHadronicId(1103);
  PHYSICS->mcConfig().AddHadronicId(1114);
  PHYSICS->mcConfig().AddHadronicId(2101);
  PHYSICS->mcConfig().AddHadronicId(2103);
  PHYSICS->mcConfig().AddHadronicId(2112);
  PHYSICS->mcConfig().AddHadronicId(2114);
  PHYSICS->mcConfig().AddHadronicId(2203);
  PHYSICS->mcConfig().AddHadronicId(2212);
  PHYSICS->mcConfig().AddHadronicId(2214);
  PHYSICS->mcConfig().AddHadronicId(2224);
  PHYSICS->mcConfig().AddHadronicId(3101);
  PHYSICS->mcConfig().AddHadronicId(3103);
  PHYSICS->mcConfig().AddHadronicId(3112);
  PHYSICS->mcConfig().AddHadronicId(3114);
  PHYSICS->mcConfig().AddHadronicId(3122);
  PHYSICS->mcConfig().AddHadronicId(3201);
  PHYSICS->mcConfig().AddHadronicId(3203);
  PHYSICS->mcConfig().AddHadronicId(3212);
  PHYSICS->mcConfig().AddHadronicId(3214);
  PHYSICS->mcConfig().AddHadronicId(3222);
  PHYSICS->mcConfig().AddHadronicId(3224);
  PHYSICS->mcConfig().AddHadronicId(3303);
  PHYSICS->mcConfig().AddHadronicId(3312);
  PHYSICS->mcConfig().AddHadronicId(3314);
  PHYSICS->mcConfig().AddHadronicId(3322);
  PHYSICS->mcConfig().AddHadronicId(3324);
  PHYSICS->mcConfig().AddHadronicId(3334);
  PHYSICS->mcConfig().AddHadronicId(4101);
  PHYSICS->mcConfig().AddHadronicId(4103);
  PHYSICS->mcConfig().AddHadronicId(4112);
  PHYSICS->mcConfig().AddHadronicId(4114);
  PHYSICS->mcConfig().AddHadronicId(4122);
  PHYSICS->mcConfig().AddHadronicId(4132);
  PHYSICS->mcConfig().AddHadronicId(4201);
  PHYSICS->mcConfig().AddHadronicId(4203);
  PHYSICS->mcConfig().AddHadronicId(4212);
  PHYSICS->mcConfig().AddHadronicId(4214);
  PHYSICS->mcConfig().AddHadronicId(4222);
  PHYSICS->mcConfig().AddHadronicId(4224);
  PHYSICS->mcConfig().AddHadronicId(4232);
  PHYSICS->mcConfig().AddHadronicId(4301);
  PHYSICS->mcConfig().AddHadronicId(4303);
  PHYSICS->mcConfig().AddHadronicId(4312);
  PHYSICS->mcConfig().AddHadronicId(4314);
  PHYSICS->mcConfig().AddHadronicId(4322);
  PHYSICS->mcConfig().AddHadronicId(4324);
  PHYSICS->mcConfig().AddHadronicId(4332);
  PHYSICS->mcConfig().AddHadronicId(4334);
  PHYSICS->mcConfig().AddHadronicId(4403);
  PHYSICS->mcConfig().AddHadronicId(4412);
  PHYSICS->mcConfig().AddHadronicId(4414);
  PHYSICS->mcConfig().AddHadronicId(4422);
  PHYSICS->mcConfig().AddHadronicId(4424);
  PHYSICS->mcConfig().AddHadronicId(4432);
  PHYSICS->mcConfig().AddHadronicId(4434);
  PHYSICS->mcConfig().AddHadronicId(4444);
  PHYSICS->mcConfig().AddHadronicId(5101);
  PHYSICS->mcConfig().AddHadronicId(5103);
  PHYSICS->mcConfig().AddHadronicId(5112);
  PHYSICS->mcConfig().AddHadronicId(5114);
  PHYSICS->mcConfig().AddHadronicId(5122);
  PHYSICS->mcConfig().AddHadronicId(5132);
  PHYSICS->mcConfig().AddHadronicId(5142);
  PHYSICS->mcConfig().AddHadronicId(5201);
  PHYSICS->mcConfig().AddHadronicId(5203);
  PHYSICS->mcConfig().AddHadronicId(5212);
  PHYSICS->mcConfig().AddHadronicId(5214);
  PHYSICS->mcConfig().AddHadronicId(5222);
  PHYSICS->mcConfig().AddHadronicId(5224);
  PHYSICS->mcConfig().AddHadronicId(5232);
  PHYSICS->mcConfig().AddHadronicId(5242);
  PHYSICS->mcConfig().AddHadronicId(5301);
  PHYSICS->mcConfig().AddHadronicId(5303);
  PHYSICS->mcConfig().AddHadronicId(5312);
  PHYSICS->mcConfig().AddHadronicId(5314);
  PHYSICS->mcConfig().AddHadronicId(5322);
  PHYSICS->mcConfig().AddHadronicId(5324);
  PHYSICS->mcConfig().AddHadronicId(5332);
  PHYSICS->mcConfig().AddHadronicId(5334);
  PHYSICS->mcConfig().AddHadronicId(5342);
  PHYSICS->mcConfig().AddHadronicId(5401);
  PHYSICS->mcConfig().AddHadronicId(5403);
  PHYSICS->mcConfig().AddHadronicId(5412);
  PHYSICS->mcConfig().AddHadronicId(5414);
  PHYSICS->mcConfig().AddHadronicId(5422);
  PHYSICS->mcConfig().AddHadronicId(5424);
  PHYSICS->mcConfig().AddHadronicId(5432);
  PHYSICS->mcConfig().AddHadronicId(5434);
  PHYSICS->mcConfig().AddHadronicId(5442);
  PHYSICS->mcConfig().AddHadronicId(5444);
  PHYSICS->mcConfig().AddHadronicId(5503);
  PHYSICS->mcConfig().AddHadronicId(5512);
  PHYSICS->mcConfig().AddHadronicId(5514);
  PHYSICS->mcConfig().AddHadronicId(5522);
  PHYSICS->mcConfig().AddHadronicId(5524);
  PHYSICS->mcConfig().AddHadronicId(5532);
  PHYSICS->mcConfig().AddHadronicId(5534);
  PHYSICS->mcConfig().AddHadronicId(5542);
  PHYSICS->mcConfig().AddHadronicId(5544);
  PHYSICS->mcConfig().AddHadronicId(5554);
  PHYSICS->mcConfig().AddHadronicId(10111);
  PHYSICS->mcConfig().AddHadronicId(10113);
  PHYSICS->mcConfig().AddHadronicId(10211);
  PHYSICS->mcConfig().AddHadronicId(10213);
  PHYSICS->mcConfig().AddHadronicId(10221);
  PHYSICS->mcConfig().AddHadronicId(10223);
  PHYSICS->mcConfig().AddHadronicId(10311);
  PHYSICS->mcConfig().AddHadronicId(10313);
  PHYSICS->mcConfig().AddHadronicId(10321);
  PHYSICS->mcConfig().AddHadronicId(10323);
  PHYSICS->mcConfig().AddHadronicId(10331);
  PHYSICS->mcConfig().AddHadronicId(10333);
  PHYSICS->mcConfig().AddHadronicId(10411);
  PHYSICS->mcConfig().AddHadronicId(10413);
  PHYSICS->mcConfig().AddHadronicId(10421);
  PHYSICS->mcConfig().AddHadronicId(10423);
  PHYSICS->mcConfig().AddHadronicId(10431);
  PHYSICS->mcConfig().AddHadronicId(10433);
  PHYSICS->mcConfig().AddHadronicId(10441);
  PHYSICS->mcConfig().AddHadronicId(10443);
  PHYSICS->mcConfig().AddHadronicId(10511);
  PHYSICS->mcConfig().AddHadronicId(10513);
  PHYSICS->mcConfig().AddHadronicId(10521);
  PHYSICS->mcConfig().AddHadronicId(10523);
  PHYSICS->mcConfig().AddHadronicId(10531);
  PHYSICS->mcConfig().AddHadronicId(10533);
  PHYSICS->mcConfig().AddHadronicId(10541);
  PHYSICS->mcConfig().AddHadronicId(10543);
  PHYSICS->mcConfig().AddHadronicId(10551);
  PHYSICS->mcConfig().AddHadronicId(10553);
  PHYSICS->mcConfig().AddHadronicId(20113);
  PHYSICS->mcConfig().AddHadronicId(20213);
  PHYSICS->mcConfig().AddHadronicId(20223);
  PHYSICS->mcConfig().AddHadronicId(20313);
  PHYSICS->mcConfig().AddHadronicId(20323);
  PHYSICS->mcConfig().AddHadronicId(20333);
  PHYSICS->mcConfig().AddHadronicId(20413);
  PHYSICS->mcConfig().AddHadronicId(20423);
  PHYSICS->mcConfig().AddHadronicId(20433);
  PHYSICS->mcConfig().AddHadronicId(20443);
  PHYSICS->mcConfig().AddHadronicId(20513);
  PHYSICS->mcConfig().AddHadronicId(20523);
  PHYSICS->mcConfig().AddHadronicId(20533);
  PHYSICS->mcConfig().AddHadronicId(20543);
  PHYSICS->mcConfig().AddHadronicId(20553);
  PHYSICS->mcConfig().AddHadronicId(100443);
  PHYSICS->mcConfig().AddHadronicId(100553);
  PHYSICS->mcConfig().AddHadronicId(9900440);
  PHYSICS->mcConfig().AddHadronicId(9900441);
  PHYSICS->mcConfig().AddHadronicId(9900443);
  PHYSICS->mcConfig().AddHadronicId(9900551);
  PHYSICS->mcConfig().AddHadronicId(9900553);
  PHYSICS->mcConfig().AddHadronicId(9910441);
  PHYSICS->mcConfig().AddHadronicId(9910551);

  // definition of the multiparticle "invisible"
  PHYSICS->mcConfig().AddInvisibleId(-16);
  PHYSICS->mcConfig().AddInvisibleId(-14);
  PHYSICS->mcConfig().AddInvisibleId(-12);
  PHYSICS->mcConfig().AddInvisibleId(12);
  PHYSICS->mcConfig().AddInvisibleId(14);
  PHYSICS->mcConfig().AddInvisibleId(16);
  //Define the dark matter as invisible
  PHYSICS->mcConfig().AddInvisibleId(-9000006);
  PHYSICS->mcConfig().AddInvisibleId(9000006);

  // Initializing PhysicsService for RECO
  PHYSICS->recConfig().Reset();

  PHYSICS->recConfig().UseDeltaRIsolation(0.5);

//Create file for writing output
  data_total_SR1.open("../Output/data_total_SR1.txt", std::ios::out | std::ios::app);
  data_total_SR2.open("../Output/data_total_SR2.txt", std::ios::out | std::ios::app);
  data_total_SR3.open("../Output/data_total_SR3.txt", std::ios::out | std::ios::app);
  data_total_SR4.open("../Output/data_total_SR4.txt", std::ios::out | std::ios::app);
  data_total_SR5.open("../Output/data_total_SR5.txt", std::ios::out | std::ios::app);
  data_total_SR6.open("../Output/data_total_SR6.txt", std::ios::out | std::ios::app);
  data_total_SR7.open("../Output/data_total_SR7.txt", std::ios::out | std::ios::app);
  data_total_SR8.open("../Output/data_total_SR8.txt", std::ios::out | std::ios::app);
  data_total_SR9.open("../Output/data_total_SR9.txt", std::ios::out | std::ios::app);


  TotalData=0;

  for (int i = 0; i < 201; ++i)
  {
    //define the values of MCut and initialize a vector with those values
    if(i<51)
    {
      MCut[i]=i*10;
    } else {
      MCut[i]=550+(i-51)*50;
    }
    //This is a counting experiment, we want to start at zero in all signal regions. Here we initialize the count in all the signal regions to 0.
    SR1Data_total[i]=0;
    SR2Data_total[i]=0;
    SR3Data_total[i]=0;
    SR4Data_total[i]=0;
    SR5Data_total[i]=0;
    SR6Data_total[i]=0;
    SR7Data_total[i]=0;
    SR8Data_total[i]=0;
    SR9Data_total[i]=0;
    }
  

  cout << "END   Initialization" << endl;
  return true;
}

// -----------------------------------------------------------------------------
// Finalize
// function called one time at the end of the analysis
// -----------------------------------------------------------------------------
void TestFiles::Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files)
{
  cout << "BEGIN Finalization" << endl;
  
  // The first entry in the file for each signal region is the cross-section
  data_total_SR1 << summary.mc()->xsection();
  data_total_SR2 << summary.mc()->xsection();
  data_total_SR3 << summary.mc()->xsection();
  data_total_SR4 << summary.mc()->xsection();
  data_total_SR5 << summary.mc()->xsection();
  data_total_SR6 << summary.mc()->xsection();
  data_total_SR7 << summary.mc()->xsection();
  data_total_SR8 << summary.mc()->xsection();
  data_total_SR9 << summary.mc()->xsection();
  //Not we fill in the fraction of events that passed all the cuts (including the requirement sqrt(s_hat)<MCut)
  for (int i = 0; i < 201; ++i)
   {
     data_total_SR1 << " " << ((double) SR1Data_total[i]) / ((double) TotalData);
     data_total_SR2 << " " << ((double) SR2Data_total[i]) / ((double) TotalData);
     data_total_SR3 << " " << ((double) SR3Data_total[i]) / ((double) TotalData);
     data_total_SR4 << " " << ((double) SR4Data_total[i]) / ((double) TotalData);
     data_total_SR5 << " " << ((double) SR5Data_total[i]) / ((double) TotalData);
     data_total_SR6 << " " << ((double) SR6Data_total[i]) / ((double) TotalData);
     data_total_SR7 << " " << ((double) SR7Data_total[i]) / ((double) TotalData);
     data_total_SR8 << " " << ((double) SR8Data_total[i]) / ((double) TotalData);
     data_total_SR9 << " " << ((double) SR9Data_total[i]) / ((double) TotalData);
   } 
   //we end the file with a new line
   data_total_SR1 << endl;
   data_total_SR2 << endl;
   data_total_SR3 << endl;
   data_total_SR4 << endl;
   data_total_SR5 << endl;
   data_total_SR6 << endl;
   data_total_SR7 << endl;
   data_total_SR8 << endl;
   data_total_SR9 << endl;
   //and close it
  data_total_SR1.close();
  data_total_SR2.close();
  data_total_SR3.close();
  data_total_SR4.close();
  data_total_SR5.close();
  data_total_SR6.close();
  data_total_SR7.close();
  data_total_SR8.close();
  data_total_SR9.close();
}

// -----------------------------------------------------------------------------
// Execute
// function called each time one event is read
// -----------------------------------------------------------------------------
bool TestFiles::Execute(SampleFormat& sample, const EventFormat& event)
{
  //counting the total number of events
  TotalData+=1;
  //initializing different vectors that we need in order to implement the cuts
  TLorentzVector PChiJets;
  TLorentzVector PInit1;
  TLorentzVector PInit2;
  TLorentzVector PJets;

  //We have to find the minimal angle, so we initialize it to a big value
  double DeltaPhi=10.0;

  //checking that all events are weighted equally
  Float_t __event_weight__ = 1.0;
  if (weighted_events_ && event.mc()!=0) __event_weight__ = event.mc()->weight();

  if (sample.mc()!=0) sample.mc()->addWeightedEvents(__event_weight__);
  if (__event_weight__!=1)
  {
   cout << __event_weight__ << endl; 
  }
  

  //find the energy scale of the process q q > chi chi
  if (event.mc()!=0)
  {
    for (unsigned int i=0;i<event.mc()->particles().size();i++)
    {
      // Particle "i"
      const MCParticleFormat& part = event.mc()->particles()[i];
      
      if (PHYSICS->Id->IsFinalState(part))
      {
        if (abs(part.pdgid())==9000006) {
          PChiJets+=part.momentum();
        }
      }
    }
  }
  

  if (event.rec()!=0)
  {
    if (event.rec()->electrons().size()!=0)
    {
      for (unsigned int i = 0; i < event.rec()->electrons().size(); ++i)
      {
        if (event.rec()->electrons()[i].pt()>7)
        {
          //cout << "Event vetoed: Electrons" << endl;
          return true;
        }
      }
    }
    if (event.rec()->muons().size()!=0)
    {
      for (unsigned int i = 0; i < event.rec()->muons().size(); ++i)
      {
        if (event.rec()->muons()[i].pt()>7)
        {
          //cout << "Event vetoed: Muons" << endl;
          return true;
        }
      }
    }
    if (event.rec()->jets().size()==0)
    {
      //cout << "No Jets found" << endl;
      return true;
    }
    
    //find leading jet
    std::vector<const RecJetFormat*> Jets;
    for (unsigned int i = 0; i < event.rec()->jets().size(); ++i)
    {
      Jets.push_back(&event.rec()->jets()[i]);
      PChiJets+=event.rec()->jets()[i].momentum();
      //PChiTChannelChi+=event.rec()->jets()[i].momentum();
      //PChiTChannelAntiChi+=event.rec()->jets()[i].momentum();
      PJets+=event.rec()->jets()[i].momentum();
      if (DeltaPhi>event.rec()->jets()[i].dphi_0_pi(event.rec()->MET()) && event.rec()->jets()[i].pt()>30 && abs(event.rec()->jets()[i].eta())<4.5)
      {
        DeltaPhi=event.rec()->jets()[i].dphi_0_pi(event.rec()->MET());
      }
      //HT+=event.rec()->jets()[i].pt();
      if (Jets[i]->pt()>20 && abs(Jets[i]->eta()<4.5))
      {
        if (Jets[i]->EEoverHE()!=0)
        {
          //cout << "Event vetoed: EM fraction in Calorimeter" << endl;
          return true;
        }
      }
    }
    SORTER->sort(Jets,PTordering);

    //variable to compare to MCut (this is sqrt(s_hat))
    double EChiJets=PChiJets.Mag();


    //apply cuts
    if (Jets[0]->pt()>120.0)
    {
      //cout << "passed Jet>120 cut, ";
      if (abs(Jets[0]->eta())<2.0)
      {
        //cout << "passed eta<2 cut, ";
        if (Jets[0]->pt()/event.rec()->MET().e()>0.5)
        {
          //cout << "passed fraction cut, ";
          if (DeltaPhi>1.0)
          {
            //cout << "passed phi cut, ";
            //Signal Region 1
            if (event.rec()->MET().e()>150)
            {
              //cout << "in signal region 1 : ";
              //inBin1[index]+=1;
              for (int i = 0; i < 201; ++i)
              {
                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR1Data_total[i]+=1;
                }
              }
            }

            //Signal Region 2
            if (event.rec()->MET().e()>200)
            {
              //cout << "in signal region 2 : ";
              //inBin2[index]+=1;
              for (int i = 0; i < 201; ++i)
              {
                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR2Data_total[i]+=1;
                }
              }
            }

            //Signal Region 3
            if (event.rec()->MET().e()>250)
            {
              //cout << "in signal region 3 : ";
              //inBin3[index]+=1;
              for (int i = 0; i < 201; ++i)
              {

                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR3Data_total[i]+=1;
                }
              }
            }

            //Signal Region 4
            if (event.rec()->MET().e()>300)
            {
              //cout << "in signal region 4 : ";
              //inBin4[index]+=1;
              for (int i = 0; i < 201; ++i)
              {
                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR4Data_total[i]+=1;
                }
              }
            }

            //Signal Region 5
            if (event.rec()->MET().e()>350)
            {
              //cout << "in signal region 5 : ";
              //inBin5[index]+=1;
              for (int i = 0; i < 201; ++i)
              {
                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR5Data_total[i]+=1;
                }
              }
            }

            //Signal Region 6
            if (event.rec()->MET().e()>400)
            {
              //cout << "in signal region 6 : ";
              //inBin6[index]+=1;
              for (int i = 0; i < 201; ++i)
              {
                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR6Data_total[i]+=1;
                }
              }
            }

            //Signal Region 7
            if (event.rec()->MET().e()>500)
            {
              //cout << "in signal region 7 : ";
              //inBin7[index]+=1;
              for (int i = 0; i < 201; ++i)
              {
                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR7Data_total[i]+=1;
                }
              }
            }

            //Signal Region 8
            if (event.rec()->MET().e()>600)
            {
              //cout << "in signal region 8 : ";
              //inBin8[index]+=1;
              for (int i = 0; i < 201; ++i)
              {
                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR8Data_total[i]+=1;
                }
              }
            }

            //Signal Region 9
            if (event.rec()->MET().e()>700)
            {
              //cout << "in signal region 9 : ";
              //inBin9[index]+=1;
              for (int i = 0; i < 201; ++i)
              {
                if (EChiJets<MCut[i])
                {
                  //cout << "passed MCut with MCut = " << MCut[i];
                  SR9Data_total[i]+=1;
                }
              }
            }

          }
        }
      }
    }
  }
  return true;
}

