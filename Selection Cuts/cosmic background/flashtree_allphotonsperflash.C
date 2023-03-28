
// all photons in an interaction

#define flashtree_allphotonsperflash_cxx
#include "flashtree_allphotonsperflash.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void flashtree_allphotonsperflash::Loop()
{
//   In a ROOT session, you can do:
//      root> .L flashtree_allphotonsperflash.C
//      root> flashtree_allphotonsperflash t
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
   if (fChain == 0) return;

   TH1F* h2=new TH1F("h2","",100,0,4000);

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;


     if(flash_time<0 || flash_time>1.8 ){
        //if(flash_total_pe<1800 && flash_total_pe>500 ){

      h2->Fill(flash_total_pe);

      std::cout << jentry <<std::endl;
      //  }
      }
   }
   h2->GetXaxis()->SetTitle("Photons per Flash");
   h2->GetYaxis()->SetTitle("Number of Flahes");
   h2->SetTitle("");
   h2->SetLineWidth(2);
   h2->SetLineColor(kRed);
   h2->Draw("");
}
