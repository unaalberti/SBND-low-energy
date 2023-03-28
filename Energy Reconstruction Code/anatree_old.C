//analysis code for deposited energy of each event

#define anatree_cxx
#include "anatree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void anatree::Loop()
{
//   In a ROOT session, you can do:
//      root> .L anatree.C
//      root> anatree t
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
   TH1F * photonenergy=new TH1F("","",50,0,130);

	
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   int currentevent=0;
   double penergy=0;
   double nelectrons=0;
   double nphoton=0;
   double nproton = 0;
   double nneutron = 0;
   double nother = 0;
   double numElements = 0;
   double test = 0;

   double alpha = 0;
   double d = 0;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

    // if (event > currentevent)
    // {currentevent = event;
     // photonenergy->Fill(penergy);
     // nelectrons_hist->Fill(nelectrons);
     // penergy=0;
     //nelectrons=0;
     // if(nelectrons==1 && nprotons <1 && nphotons <1)
       //  {//do somethnig}
        // else if (nelectrons ==1 && nprotons >=1 && nphotons <1)
        // {do something else}
   //  }

     //std::cout <<"event, penergy, pdg " << event << " " << penergy << " " << *pdg << std::endl;

      if(*pdg==11)
      //{ penergy+=*Eng; }
      { penergy+=total_DepEnergy; }
      //nelectrons++;}



       //loop to count the number of each type of particle in the event  
      for (unsigned int jparticle=0; jparticle<geant_list_size; jparticle++) {

        //add stuff to group by particle

        //if one of the particles in the event is electron then add 1
         if(pdg[jparticle]==11 )
         { nelectrons+=1; }

         if(pdg[jparticle]==22 )
         { nphoton+=1; }

         if(pdg[jparticle]==2212 )
         { nproton+=1; }

         if(pdg[jparticle]==2112 )
         { nneutron+=1; }

         if(pdg[jparticle]==1000020040 )
         { alpha+=1; }


         if(pdg[jparticle]== 1000010020 )
         { d+=1; }


         if(pdg[jparticle]!=11 && pdg[jparticle]!=22 && pdg[jparticle]!=2212 && pdg[jparticle]!=2112)
         { nother+=1; }
  	 }  // end of loop on jparticle


     numElements = nelectrons + nphoton + nproton + nneutron + nother;

      //getting energies in different groups
      if(nneutron != 0 && nproton !=  0)
        {


      
     // photonenergy->Fill(penergy);
    //  std::cout <<penergy<<std::endl;

        }




      //energy with no groups

       // photonenergy->Fill(penergy);
    //  std::cout <<penergy<<std::endl;






      //checking charactaristics for a certain energy

        if (penergy<=0.05)
        {

         // photonenergy->Fill(penergy);

        //std::cout <<"ele"<<nelectrons<<"photon"<<nphoton<<"proton"<<nproton<<"neutron"<<nneutron<<"other"<<nother<<std::endl;

         //for (int i = numElements - 1; i >= 0; i--) 
        //  cout << StartPointx[i] <<","<<StartPointy[i]<<";    ";
        }


        for (int i = numElements - 1; i >= 0; i--) 
           {
              if(StartPointx[i]==-99999 || StartPointy[i]==-99999  
              || StartPointx[i]>= 100 || StartPointx[i]<= -100 || StartPointy[i]>= 100|| StartPointy[i]<= -100|| StartPointz[i]>= 300 || StartPointz[i]<= 100)
              //|| StartPointx[i]>= 190 || StartPointx[i]<= -190 || StartPointy[i]>= 190 || StartPointy[i]<= -190
             // || StartPointx[i]>= 190 || StartPointx[i]<= -190 || StartPointy[i]>= 190 || StartPointy[i]<= -190)
              {

                test+=1;


              }

           }
            if (test == 0 ){
           if ( nproton != 0 || nneutron != 0 ){

            //photonenergy->Fill(penergy);
            std::cout <<penergy<<std::endl;

           }
            }


          //  photonenergy->Fill(penergy);
           // std::cout <<penergy<<std::endl;







      penergy=0;
      nelectrons=0;
      nphoton=0;
      nproton=0;
      nneutron=0;
      nother=0;
      test=0;

      alpha = 0;
      d = 0;

      // if (Cut(ientry) < 0) continue;
   }


gStyle->SetOptStat(0);
photonenergy->GetXaxis()->SetTitle("Energy (MeV)");
photonenergy->GetYaxis()->SetTitle("Number of Particles");
photonenergy->SetTitle("Deposited Energy of all Particles in an Event");
photonenergy->SetLineWidth(2);
photonenergy->SetLineColor(kRed);

photonenergy->Draw();

}
