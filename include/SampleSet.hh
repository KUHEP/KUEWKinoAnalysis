#ifndef SampleSet_HH
#define SampleSet_HH

#include <string>

using std::string;

vector<string> g_File;
vector<string> g_Tree;
vector<string> g_Title;
vector<bool> g_Bkg;
vector<int> g_Color;
vector<int> g_Hist;

class SampleSet {
public:
  SampleSet();
    
  virtual ~SampleSet();

  void SetBkg(bool is_bkg);
  bool GetBkg() const;
  
  void   AddFile(const string& filename);
  int    GetNFile() const;
  string GetFile(int n);
  
  void   SetTitle(const string& title);
  string GetTitle() const;
  
  void SetColor(int icolor);
  int  GetColor() const;
  
  void SetSkip(int iskip);
  int  GetSkip() const;
  
  void   SetScale(double scale);
  double GetScale() const;
  
private:
  bool m_IsBkg;
  std::vector<string> m_FileNames;
  string m_Title;
  int m_Color;
  int m_Skip;
  double m_Scale;

};

#endif

inline SampleSet::SampleSet(){
  m_IsBkg = true;
  m_Title = "";
  m_Color = kBlue;
  m_Skip = 1;
  m_Scale = 1.;
}
    
inline SampleSet::~SampleSet() {}

inline void SetBkg(bool is_bkg){
  m_IsBkg = is_bkg;
}

inline bool GetBkg() const {
  return m_IsBkg;
}
  
inline void AddFile(const string& filename){
  m_FileNames.push_back(filename);
}

inline int GetNFile() const {
  return m_FileNames.size();
}

inline string GetFile(int n){
  int N = GetNFile();
  if(n < 0 || n >= N)
    return "NO FILE";
  return m_FileNames[n];
}
  
inline void SetTitle(const string& title){
  m_Title = title;
}

inline string GetTitle() const {
  return m_Title;
}
  
inline void SetColor(int icolor){
  m_Color = icolor;
}

inline int  GetColor() const {
  return m_Color;
}
  
inline void SetSkip(int iskip){
  m_Skip = iskip;
}

inline int  GetSkip() const {
  return m_Skip;
}
  
void SetScale(double scale){
  m_Scale = scale;
}

double GetScale() const {
  return m_Scale;
}
