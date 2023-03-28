// code for at least n, m pmt to see *given* light


#define flashtreeClass_cxx
#include "flashtreeClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void flashtreeClass::Loop()
{
//   In a ROOT session, you can do:
//      root> .L flashtreeClass.C
//      root> flashtreeClass t
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
TH2D * h2=new TH2D("","",15,0,15,5,0,5);


   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

    double photons=0;
    double photons1=0;


    // loop over 100 events start
  // for (int i = 1; i <= 100; ++i) 
  // {

    // loop over m
   



   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      std::cout << jentry<< std::endl;


     
      // if (Cut(ientry) < 0) continue;
       
       // if time os correct
       // std::cout << " flashtime " << flash_time << " event " << event << std::endl;


      //if(flash_time<0 || flash_time>1800 ){

         
      
      if(flash_time<0 || flash_time>1.8 ){
        


         //for (int k = 0; k <= 15; ++k) {

   //for (int n = 0; n <= 5; ++n) {

      // loop over the op channels within that flash
    for (unsigned int l = 0; l < (*flash_ophit_ch).size(); l++) {

       
      
      // if (event == jentry){


         if ((*flash_ophit_ch)[l] == 6 ||
(*flash_ophit_ch)[l] == 8 ||
(*flash_ophit_ch)[l] == 10 ||
(*flash_ophit_ch)[l] == 12 ||
(*flash_ophit_ch)[l]  == 14||
(*flash_ophit_ch)[l]  == 16 ||
(*flash_ophit_ch)[l] == 60 ||
(*flash_ophit_ch)[l] == 62 ||
(*flash_ophit_ch)[l] == 64 ||
(*flash_ophit_ch)[l]== 66 ||
(*flash_ophit_ch)[l] == 68 ||
(*flash_ophit_ch)[l] == 70 ||
(*flash_ophit_ch)[l] == 84 ||
(*flash_ophit_ch)[l] == 86 ||
(*flash_ophit_ch)[l] == 88 ||
(*flash_ophit_ch)[l] == 90 ||
(*flash_ophit_ch)[l] == 92 ||
(*flash_ophit_ch)[l] == 94 ||
(*flash_ophit_ch)[l] == 138 ||
(*flash_ophit_ch)[l] == 140 ||
(*flash_ophit_ch)[l] == 142 ||
(*flash_ophit_ch)[l] == 144 ||
(*flash_ophit_ch)[l] == 146 ||
(*flash_ophit_ch)[l] == 148 ||
(*flash_ophit_ch)[l] == 162 ||
(*flash_ophit_ch)[l] == 164 ||
(*flash_ophit_ch)[l] == 166 ||
(*flash_ophit_ch)[l] == 168 ||
(*flash_ophit_ch)[l] == 170 ||
(*flash_ophit_ch)[l] == 172 ||
(*flash_ophit_ch)[l] == 216 ||
(*flash_ophit_ch)[l] == 218 ||
(*flash_ophit_ch)[l] == 220 ||
(*flash_ophit_ch)[l] == 222 ||
(*flash_ophit_ch)[l] == 224 ||
(*flash_ophit_ch)[l] == 226 ||
(*flash_ophit_ch)[l] == 240 ||
(*flash_ophit_ch)[l] == 242 ||
(*flash_ophit_ch)[l] == 244 ||
(*flash_ophit_ch)[l] == 246 ||
(*flash_ophit_ch)[l]== 248 ||
(*flash_ophit_ch)[l] == 250 ||
(*flash_ophit_ch)[l] == 294 ||
(*flash_ophit_ch)[l] == 296 ||
(*flash_ophit_ch)[l] == 300 ||
(*flash_ophit_ch)[l] == 302 ||
(*flash_ophit_ch)[l] == 7 ||
(*flash_ophit_ch)[l] == 9 ||
(*flash_ophit_ch)[l] ==11 ||
(*flash_ophit_ch)[l] == 13 ||
(*flash_ophit_ch)[l] == 15 ||
(*flash_ophit_ch)[l] == 17 ||
(*flash_ophit_ch)[l] == 61 ||
(*flash_ophit_ch)[l] == 62 ||
(*flash_ophit_ch)[l] == 63 ||
(*flash_ophit_ch)[l] == 65 ||
(*flash_ophit_ch)[l] == 67 ||
(*flash_ophit_ch)[l] == 69 ||
(*flash_ophit_ch)[l] == 71 ||
(*flash_ophit_ch)[l] == 85 ||
(*flash_ophit_ch)[l] == 87 ||
(*flash_ophit_ch)[l] == 89 ||
(*flash_ophit_ch)[l] == 91 ||
(*flash_ophit_ch)[l] == 93 ||
(*flash_ophit_ch)[l] == 95 ||
(*flash_ophit_ch)[l] == 139 ||
(*flash_ophit_ch)[l] == 141 ||
(*flash_ophit_ch)[l] == 143 ||
(*flash_ophit_ch)[l] == 145 ||
(*flash_ophit_ch)[l] == 147 ||
(*flash_ophit_ch)[l] == 149 ||
(*flash_ophit_ch)[l] == 163 ||
(*flash_ophit_ch)[l] == 165 ||
(*flash_ophit_ch)[l] == 167 ||
(*flash_ophit_ch)[l] == 169 ||
(*flash_ophit_ch)[l] == 171 ||
(*flash_ophit_ch)[l] == 217 ||
(*flash_ophit_ch)[l] == 219 ||
(*flash_ophit_ch)[l] == 221 ||
(*flash_ophit_ch)[l] == 223 ||
(*flash_ophit_ch)[l] == 225 ||
(*flash_ophit_ch)[l] == 243 ||
(*flash_ophit_ch)[l] == 245 ||
(*flash_ophit_ch)[l] == 295 ||
(*flash_ophit_ch)[l] == 297 ||
(*flash_ophit_ch)[l] == 298 ||
(*flash_ophit_ch)[l] == 304){ 

         
   if((*flash_ophit_pe)[l] <= 24 && (*flash_ophit_pe)[l] >= 9)
      {
         photons += 1;
         
      }


      } //chaneel for dir and ref if statement



       if ((*flash_ophit_ch)[l] == 36 ||
      (*flash_ophit_ch)[l] == 38 ||
      (*flash_ophit_ch)[l] == 40||

      
      (*flash_ophit_ch)[l] == 114 ||
      (*flash_ophit_ch)[l] == 116 ||
      (*flash_ophit_ch)[l] == 118 ||

    (*flash_ophit_ch)[l] == 192 ||
      (*flash_ophit_ch)[l] == 194 ||
      (*flash_ophit_ch)[l]== 196 ||

     (*flash_ophit_ch)[l] == 270 ||
    (*flash_ophit_ch)[l] == 272 ||
      (*flash_ophit_ch)[l] == 274 ||




      (*flash_ophit_ch)[l] == 37 ||
     (*flash_ophit_ch)[l] == 39 ||
     (*flash_ophit_ch)[l] == 41||

      (*flash_ophit_ch)[l] == 115 ||
      (*flash_ophit_ch)[l]== 117 ||
      (*flash_ophit_ch)[l] == 119 ||

      (*flash_ophit_ch)[l] == 193 ||
      (*flash_ophit_ch)[l]== 195 ||
      (*flash_ophit_ch)[l] == 197 ||

      (*flash_ophit_ch)[l] == 271 ||
     (*flash_ophit_ch)[l] == 273 ||
     (*flash_ophit_ch)[l] == 275 ){

      

         
     if((*flash_ophit_pe)[l] <= 9 && (*flash_ophit_pe)[l] >= 5)
      {
         photons1 += 1;
         
      }

     



       } //chaneel for  ref only if statement


      // }//event id if statment

       

   

  
  
    } // loop over all op chanels end

   // if (photons >= k && photons1 >= n)
   if (photons >= 6 && photons1 >= 1)
   {
    if(flash_total_pe<1800 && flash_total_pe>500 ){
    //photons_hist->Fill(k,1);

    h2->Fill(6,1,1);
   }}


   photons = 0;
   photons1 = 0;
   

  //   }} // k and m loop end

    }// correct flash time

     //  if (photons >= k && photons1 >= n)
  // {
    //photons_hist->Fill(k,1);

  //  h2->Fill(k,n,1);
 //  }

 //  }} //k and m loop

   

   } // loop over flash end

    
  //  if (photons >= k && photons1 >= n)
 //  {
    //photons_hist->Fill(k,1);

  //  h2->Fill(k,n,1);
 //  }

   //photons_hist->Fill(photons);
  // photons = 0;
   //photons1 = 0;


   //}//loop over n end
   //}//loop over m end

  // std::cout << i <<std::endl;


   //}//end of events loop

    //h2->Scale(1./3769);
    h2->Draw("colz");


}
