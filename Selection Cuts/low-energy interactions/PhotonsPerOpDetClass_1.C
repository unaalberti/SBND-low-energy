// code for average number of photons per pmt
// can be 2d or 3d


#define PhotonsPerOpDetClass_1_cxx
#include "PhotonsPerOpDetClass_1.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <vector>
#include <iostream>
#include <math.h>

void PhotonsPerOpDetClass_1::Loop()
{
//   In a ROOT session, you can do:
//      root> .L PhotonsPerOpDetClass_1.C
//      root> PhotonsPerOpDetClass_1 t
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

   TH1F * photons_hist=new TH1F("","",50,0,30);
   //TH1F * photons_hist=new TH1F("","",50,0,500);

   //TH2D * h2=new TH2D("","",32,0,500,24,200,200);

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

    double photons=0;
    double posy=0;
    double posz=0;
    


    // loop over 312 op channels
  for (int i = 1; i <= 312; ++i) {

   
   //std::vector< int > arr;
   std::vector<int> myVector;




   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      //for (int i = 1; i <= 312; ++i) {

      if (isPMT == true){

     if (OpChannel == i){

     if (CountAll>= 1){


      if(

   //condition for reflected and direct PMT
   
   OpChannel != 36 &&
      OpChannel != 38 &&
      OpChannel != 40 &&

      
      OpChannel != 114 &&
      OpChannel != 116 &&
      OpChannel != 118 &&

      OpChannel != 192 &&
      OpChannel != 194 &&
      OpChannel != 196 &&

      OpChannel != 270 &&
      OpChannel != 272 &&
      OpChannel != 274 &&




      OpChannel != 37 &&
      OpChannel != 39 &&
      OpChannel != 41 &&

      OpChannel != 115 &&
      OpChannel != 117 &&
      OpChannel != 119 &&

      OpChannel != 193 &&
      OpChannel != 195 &&
      OpChannel != 197 &&

      OpChannel != 271 &&
      OpChannel != 273 &&
      OpChannel != 275 ){

         

/*
      
   /////////////////hereeeeeee



      OpChannel == 36 ||
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
      
      */
     // ){
            

      

         
        // std::cout <<OpChannel<<std::endl;
         //EmptyArray[i] = CountAll;
         myVector.push_back(CountAll);

         posy = OpDetY;
         posz = OpDetZ;


      }
      


     }



//arr.push_back(CountAll);




        


       }
      }
    //  }

     


   }

   //cout << arr;
   //std::cout <<EmptyArray<<std::endl;

   int sum = 0;
   
   for(int j = 0; j < myVector.size(); j++) {
     sum = sum + myVector[j];
  }

   double average = (double)sum / myVector.size();

   //std::cout <<average<<std::endl;

   

      if (!isnan(average)) {


    //uncomment for average
   photons_hist->Fill(average);

   //new to get position
  // photons_hist->Fill(posz,average);

   //now in 3d
  // h2->Fill(posz,posy,average);
   }


   posy = 0;
   posz = 0;

}
gStyle->SetOptStat(0);
photons_hist->GetXaxis()->SetTitle("Average Number of Photons");
photons_hist->GetYaxis()->SetTitle("Number of PMTs");
photons_hist->SetTitle("");
photons_hist->SetLineWidth(2);
photons_hist->SetLineColor(kRed);
photons_hist->Draw();
//h2->Draw("colz");
}


