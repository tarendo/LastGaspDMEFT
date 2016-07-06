#ifndef analysis_TestFiles_h
#define analysis_TestFiles_h

#include "SampleAnalyzer/Process/Analyzer/AnalyzerBase.h"

namespace MA5
{
class TestFiles : public AnalyzerBase
{
  INIT_ANALYSIS(TestFiles,"TestFiles")

 public:
  virtual bool Initialize(const MA5::Configuration& cfg, const std::map<std::string,std::string>& parameters);
  virtual void Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files);
  virtual bool Execute(SampleFormat& sample, const EventFormat& event);

 private:


 	ofstream data_total_SR1;
 	ofstream data_total_SR2;
 	ofstream data_total_SR3;
 	ofstream data_total_SR4;
 	ofstream data_total_SR5;
 	ofstream data_total_SR6;
 	ofstream data_total_SR7;
 	ofstream data_total_SR8;
 	ofstream data_total_SR9;


 	int TotalData;
 	int MCut[201];


 	int SR1Data_total[201];
 	int SR2Data_total[201];
 	int SR3Data_total[201];
 	int SR4Data_total[201];
 	int SR5Data_total[201];
 	int SR6Data_total[201];
 	int SR7Data_total[201];
 	int SR8Data_total[201];
 	int SR9Data_total[201];
};
}

#endif