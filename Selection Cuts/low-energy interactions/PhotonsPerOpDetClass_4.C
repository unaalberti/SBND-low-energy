// code for at least m,n photons that see *given* number of photons

#define PhotonsPerOpDetClass_4_cxx
#include "PhotonsPerOpDetClass_4.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void PhotonsPerOpDetClass_4::Loop()
{
//   In a ROOT session, you can do:
//      root> .L PhotonsPerOpDetClass.C
//      root> PhotonsPerOpDetClass t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

   //TH1F * photons_hist=new TH1F("","",30,0,30);
   TH2D * h2=new TH2D("","",20,0,20,5,0,5);
  // TH1F* h2=new TH1F("h2","",100,0,2500);
   
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

    double photons=0;
    double photons1=0;
    


   // preliminary if statements
   

  
   // loop over 800 events start
   for (int i = 1; i <= 800; ++i) 

   {

      if(CountAll<1800 && CountAll>500 ){

      // loop over m
 //  for (int k = 0; k <= 20; ++k) {

 //  for (int n = 0; n <= 5; ++n) {

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {

      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      if (isPMT == true)
   {
   if (EventID == i)
   {
   


      
      /// code for number of pmt with at least *give* number of photons starts here
      if(OpChannel == 6 ||
OpChannel == 8 ||
OpChannel == 10 ||
OpChannel == 12 ||
OpChannel  == 14||
OpChannel  == 16 ||
OpChannel == 60 ||
OpChannel == 62 ||
OpChannel == 64 ||
OpChannel == 66 ||
OpChannel == 68 ||
OpChannel == 70 ||
OpChannel == 84 ||
OpChannel == 86 ||
OpChannel == 88 ||
OpChannel == 90 ||
OpChannel == 92 ||
OpChannel == 94 ||
OpChannel == 138 ||
OpChannel == 140 ||
OpChannel == 142 ||
OpChannel == 144 ||
OpChannel == 146 ||
OpChannel == 148 ||
OpChannel == 162 ||
OpChannel == 164 ||
OpChannel == 166 ||
OpChannel == 168 ||
OpChannel == 170 ||
OpChannel == 172 ||
OpChannel == 216 ||
OpChannel == 218 ||
OpChannel == 220 ||
OpChannel == 222 ||
OpChannel == 224 ||
OpChannel == 226 ||
OpChannel == 240 ||
OpChannel == 242 ||
OpChannel == 244 ||
OpChannel == 246 ||
OpChannel == 248 ||
OpChannel == 250 ||
OpChannel == 294 ||
OpChannel == 296 ||
OpChannel == 300 ||
OpChannel == 302 ||
OpChannel == 7 ||
OpChannel == 9 ||
OpChannel ==11 ||
OpChannel == 13 ||
OpChannel == 15 ||
OpChannel == 17 ||
OpChannel == 61 ||
OpChannel == 62 ||
OpChannel == 63 ||
OpChannel == 65 ||
OpChannel == 67 ||
OpChannel == 69 ||
OpChannel == 71 ||
OpChannel == 85 ||
OpChannel == 87 ||
OpChannel == 89 ||
OpChannel == 91 ||
OpChannel == 93 ||
OpChannel == 95 ||
OpChannel == 139 ||
OpChannel == 141 ||
OpChannel == 143 ||
OpChannel == 145 ||
OpChannel == 147 ||
OpChannel == 149 ||
OpChannel == 163 ||
OpChannel == 165 ||
OpChannel == 167 ||
OpChannel == 169 ||
OpChannel == 171 ||
OpChannel == 217 ||
OpChannel == 219 ||
OpChannel == 221 ||
OpChannel == 223 ||
OpChannel == 225 ||
OpChannel == 243 ||
OpChannel == 245 ||
OpChannel == 295 ||
OpChannel == 297 ||
OpChannel == 298 ||
OpChannel == 304 ){
      if(CountAll <= 24 && CountAll >= 9)
      {
         photons += 1;
         
      }}
      ////end here

      if(OpChannel == 36 ||
      OpChannel == 38 ||
      OpChannel == 40||

      
      OpChannel == 114 ||
      OpChannel == 116 ||
      OpChannel == 118 ||

      OpChannel == 192 ||
      OpChannel == 194 ||
      OpChannel == 196 ||

      OpChannel == 270 ||
      OpChannel == 272 ||
      OpChannel == 274 ||




      OpChannel == 37 ||
      OpChannel == 39 ||
      OpChannel == 41||

      OpChannel == 115 ||
      OpChannel == 117 ||
      OpChannel == 119 ||

      OpChannel == 193 ||
      OpChannel == 195 ||
      OpChannel == 197 ||

      OpChannel == 271 ||
      OpChannel == 273 ||
      OpChannel == 275 
      
      
      ) {
      /// code for number of pmt with at least *give* number of photons starts here
      if(CountAll <= 9 && CountAll >= 5)
      {
         photons1 += 1;
         
      }}
      ////end here

   
   }

   

   }
   }

   if (photons >= k && photons1 >= n)
   {
    //photons_hist->Fill(k,1);

    h2->Fill(k,n,1);
   }

   //photons_hist->Fill(photons);
   photons = 0;
   photons1 = 0;

 //  } //loop over n end
  // } //loop over m end
std::cout << i <<std::endl;
   }
}
//loop over 800 events end
   

   
   



   

   //photons_hist->Draw();
   h2->Scale(1./800);
   h2->Draw("colz");
}



   