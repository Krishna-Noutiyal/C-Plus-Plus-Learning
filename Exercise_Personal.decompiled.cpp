
int __cdecl main(int _Argc,char **_Argv,char **_Env)

{
  basic_ostream *pbVar1;
  int local_bc; // cin after middle finger
  basic_string local_b8 [40]; // cin to see special msg
  double local_90; // Computer
  double local_88; // Hindi
  double local_80; // Science
  double local_78; // Maths
  double local_70; // English
  basic_string local_68 [32];
  allocator local_48 [32]; 
  double local_28; // Percentage
  undefined4 local_20; // Max Marks
  int local_1c; // Marks sum
  
  __main();
  std::__cxx11::basic_string<>::basic_string();
  pbVar1 = std::operator<<((basic_ostream *)&_ZSt4cout,"Hello Stranger !!");
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar1,std::endl<>);
  std::operator<<((basic_ostream *)&_ZSt4cout,"Can you tell me your name : ");
  std::operator>>((basic_istream *)__fu0__ZSt3cin,local_68);
  pbVar1 = std::operator<<((basic_ostream *)&_ZSt4cout,"\nHello ");
  std::operator+(local_48,local_68," !!");
  pbVar1 = std::operator<<(pbVar1,(basic_string *)local_48);
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar1,std::endl<>);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  pbVar1 = std::operator<<((basic_ostream *)&_ZSt4cout,
                           "\nI would like to know your marks out of 100 in These subject : ");
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar1,std::endl<>);
  std::operator<<((basic_ostream *)&_ZSt4cout,"\nEnglish : ");
  std::basic_istream<>::operator>>((basic_istream<> *)__fu0__ZSt3cin,&local_70);
  std::operator<<((basic_ostream *)&_ZSt4cout,"\nHindi : ");
  std::basic_istream<>::operator>>((basic_istream<> *)__fu0__ZSt3cin,&local_88);
  std::operator<<((basic_ostream *)&_ZSt4cout,"\nMaths : ");
  std::basic_istream<>::operator>>((basic_istream<> *)__fu0__ZSt3cin,&local_78);
  std::operator<<((basic_ostream *)&_ZSt4cout,"\nScience : ");
  std::basic_istream<>::operator>>((basic_istream<> *)__fu0__ZSt3cin,&local_80);
  std::operator<<((basic_ostream *)&_ZSt4cout,"\nComputer : ");
  std::basic_istream<>::operator>>((basic_istream<> *)__fu0__ZSt3cin,&local_90);
  pbVar1 = std::operator<<((basic_ostream *)&_ZSt4cout,"\n\nThank you !!");
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar1,std::endl<>);
  local_1c = (int)(local_90 + local_70 + local_88 + local_78 + local_80);
  local_20 = 500;
  local_28 = ((double)local_1c / 500.0) * 100.0;
  pbVar1 = (basic_ostream *)std::basic_ostream<>::operator<<((basic_ostream<> *)&_ZSt4cout,local_28)
  ;
  pbVar1 = std::operator<<(pbVar1,"%");
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar1,std::endl<>);
  std::operator<<((basic_ostream *)&_ZSt4cout,"\nASCII representation of your %age : ");
  pbVar1 = std::operator<<((basic_ostream *)&_ZSt4cout,(char)(int)local_28);
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar1,std::endl<>);
  std::__cxx11::basic_string<>::basic_string();
  std::operator<<((basic_ostream *)&_ZSt4cout,"\n\nType yes to see a msg from Krishna :");
  std::operator>>((basic_istream *)__fu0__ZSt3cin,local_b8);
  std::operator<<((basic_ostream *)&_ZSt4cout,"               ||\n");
  std::operator<<((basic_ostream *)&_ZSt4cout,"               ||\n");
  std::operator<<((basic_ostream *)&_ZSt4cout,"               ||\n");
  std::operator<<((basic_ostream *)&_ZSt4cout,"         ______||______\n");
  std::operator<<((basic_ostream *)&_ZSt4cout,"        ||  |  ||  |  ||\n");
  std::operator<<((basic_ostream *)&_ZSt4cout,"        ||__|__||__|__||\n");
  std::operator<<((basic_ostream *)&_ZSt4cout,"\nEnter to Exit : ");
  std::basic_istream<>::operator>>((basic_istream<> *)__fu0__ZSt3cin,&local_bc);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_b8);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_68);
  return 0;
}

