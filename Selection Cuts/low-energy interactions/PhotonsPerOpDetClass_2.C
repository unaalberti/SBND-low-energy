//code to work out centre of charge and rms
// rms of each event and then average

#define PhotonsPerOpDetClass_2_cxx
#include "PhotonsPerOpDetClass_2.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void PhotonsPerOpDetClass_2::Loop()
{
//   In a ROOT session, you can do:
//      root> .L PhotonsPerOpDetClass_2.C
//      root> PhotonsPerOpDetClass_2 t
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
TH1F * photons_hist=new TH1F("","",200,0,500);
TH1F * photons_hist1=new TH1F("","",10,0,500);

//TH2D * h2=new TH2D("","",40,0,500,20,-200,200);

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   double photons=0;

   std::vector<int> myVector_rmsy;
   std::vector<int> myVector_rmsz;


//loop for events
   for (int j = 1; j <= 2000; ++j) {

      //std::vector< int > arr;
   std::vector<int> myVectory;
   std::vector<int> myVectorz;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if (isPMT == true){

        if (EventID == j) {





/*
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
      
      
      ){
         */   



         for (int i = 1; i <= CountAll; ++i){

            myVectory.push_back(OpDetY);
            myVectorz.push_back(OpDetZ);

            //photons_hist->Fill(OpDetY);
            //photons_hist1->Fill(OpDetZ);

         //   h2->Fill(OpDetZ,OpDetY); 


         }
        //}
        }



      }

   }
     //for(int k = 0; k < myVectory.size(); k++){ 
    //std::cout <<myVectory[k]<<std::endl;}
    

// find y centre for y for onbe event
   int sumy = 0;
   
   for(int k = 0; k < myVectory.size(); k++) {
     sumy = sumy + myVectory[j];
  }

   double averagey = (double)sumy / myVectory.size();
   //std::cout <<averagey<<std::endl;


    // Subtract num from each element in the vector
    for (int m = 0; m < myVectory.size(); m++) {
        myVectory[m] -= averagey;
     
    }


    for (int m = 0; m < myVectory.size(); m++) {
   
        myVectory[m] = std::pow(myVectory[m], 2);
    }

    //for(int k = 0; k < myVectory.size(); k++){ 
   // std::cout <<myVectory[k]<<std::endl;}



    // Compute the sum of all elements in the vector
    int sumy1 = 0;
    for (int n = 0; n < myVectory.size(); n++) {
        sumy1 += myVectory[n];
    }

    double div_sum_y = sumy1/myVectory.size();

    //std::cout <<div_sum_y<<std::endl;

    double sqrt_sum_y = std::sqrt(div_sum_y);

    if (sqrt_sum_y >0 && sqrt_sum_y< 200){

    //std::cout <<sqrt_sum_y<<std::endl;

    myVector_rmsy.push_back(sqrt_sum_y);

   //photons_hist->Fill(sqrt_sum_y);
    }












// find z centre for z for onbe event
   int sumz = 0;
   
   for(int k = 0; k < myVectorz.size(); k++) {
     sumz = sumz + myVectorz[j];
  }

   double averagez = (double)sumz / myVectorz.size();

    // Subtract num from each element in the vector
    for (int m = 0; m < myVectorz.size(); m++) {
        myVectorz[m] -= averagez;
        myVectorz[m] = std::pow(myVectorz[m], 2);
    }

    // Compute the sum of all elements in the vector
    int sumz1 = 0;
    for (int n = 0; n < myVectorz.size(); n++) {
        sumz1 += myVectorz[n];
    }

    double div_sum_z = sumz1/myVectorz.size();

    double sqrt_sum_z = std::sqrt(div_sum_z);

     if (sqrt_sum_z >0 && sqrt_sum_z< 500){

    myVector_rmsz.push_back(sqrt_sum_z);


    photons_hist->Fill(sqrt_sum_z);

   // std::cout << sqrt_sum_z <<std::endl;

     }

    








   }//end of an event

   //for(int k = 0; k < myVector_rmsy.size(); k++){ 
   // std::cout <<myVector_rmsy[k]<<std::endl;}

   //take average of all rms values

   int rmsy = 0;
   
   for(int k = 0; k < myVector_rmsy.size(); k++) {
   
   if (myVector_rmsy[k] < 1000 ){
      
     rmsy = rmsy + myVector_rmsy[k];
   }
  }

   double rms_y_fin = (double)rmsy / myVector_rmsy.size();

    std::cout <<rms_y_fin<<std::endl;

    




      int rmsz = 0;
   
   for(int k = 0; k < myVector_rmsz.size(); k++) {


      if (myVector_rmsz[k] < 1000 ){
     rmsz = rmsz + myVector_rmsz[k];
      }
  }

   double rms_z_fin = (double)rmsz / myVector_rmsz.size();

    std::cout <<rms_z_fin<<std::endl;

   photons_hist->GetXaxis()->SetTitle("");
   photons_hist->GetYaxis()->SetTitle("");
   photons_hist->SetTitle("");
   photons_hist->SetLineWidth(2);
   photons_hist->SetLineColor(kRed);
    photons_hist->Draw();
   //photons_hist1->Draw();
   //h2->Draw("colz");
}
