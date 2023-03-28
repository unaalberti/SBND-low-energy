// general class 
#define PhotonsPerOpDetClass_cxx
#include "PhotonsPerOpDetClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void PhotonsPerOpDetClass::Loop()
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
   TH1F * photons_hist=new TH1F("","",50,0,200);
   
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

    double photons=0;
    


   // preliminary if statements
   

  
   // loop over 800 events start
   for (int i = 1; i <= 800; ++i) 

   {

      // loop over m
   for (int k = 1; k <=20; ++i) {

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
      if(CountDirect <= 20 && CountDirect >= 6)
      {
         photons += 1;
         
      }
      ////end here

   
   }

   

   }
   }

   if (photons >= k)
   {
    photons_hist->Fill(1,k);
   }

   //photons_hist->Fill(photons);
   photons = 0;

   } //loop over m end

}
//loop over 800 events end
   

   
   



   

   photons_hist->Draw();
}
