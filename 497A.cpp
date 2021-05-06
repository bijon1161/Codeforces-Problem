
#include <bits/stdc++.h>
using namespace std;
bool vowel(char c) {
  return c=='a'||c=='o'||c=='u'||c=='i'||c =='e';
}
bool consonant(char c) {
  return !vowel(c);
}
int main(){
  string s;
  cin>>s;
  char e=s[s.size()-1];
  if (consonant(e) && e != 'n') {
    cout <<"NO"<<"\n";
    return 0;
  }
  bool ok = true;
  for (int i = 0; ok && i<s.size()-1; i++) {
    if (s[i] != 'n'&&consonant(s[i])&&consonant(s[i + 1])) {
      ok = false;
      break;
    }
  }
  if (ok) {
    cout<<"YES"<<"\n";
  } else {
    cout<<"NO";
  }
  return 0;
}
