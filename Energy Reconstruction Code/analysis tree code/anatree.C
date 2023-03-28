//analysis code for energy of each event

#define anatree_cxx
#include "anatree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <cmath>

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
   TH1F * photonenergy=new TH1F("","",50,0,0.4);

	
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   double penergy=0;
   double nelectrons=0;
   double nphoton=0;
   double nproton = 0;
   double nneutron = 0;
   double nother = 0;
   double numElements = 0;
   double test = 0;

   double d = 0;
   double t = 0;
   double h = 0;
   double alpha = 0;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {


     	Long64_t ientry = LoadTree(jentry);
      	if (ientry < 0) break;
    	  nb = fChain->GetEntry(jentry);   nbytes += nb;

   	
      //HEREEEEEEEEEE    
      for (unsigned int jparticle=0; jparticle<geant_list_size; jparticle++) {
   

    	 //std::cout <<"event, penergy, pdg " << event << " " << penergy << " " << pdg[jparticle] << std::endl;
         

        //this was the original condition but then i realsied there may be other particles in there that are making eng smaller
     	 //if(pdg[jparticle]==11 || pdg[jparticle]==22 || pdg[jparticle]==2212 || pdg[jparticle]==2112)
       
         		 
         //{ penergy+=Eng[jparticle]; }
       // { 




        

         /// add this condition because idk where the 37 GEV and big negative is coming from and its messing up results
         
        if (Eng[jparticle] >= -20  )
        {
         if (pdg[jparticle]==11 )
         {penergy+=  sqrt(pow(Eng[jparticle],2) - pow(0.0005109989,2));}

         if (pdg[jparticle]==22)
         {penergy+=Eng[jparticle];}

         if (pdg[jparticle]==2212)
         {penergy+=  sqrt(pow(Eng[jparticle],2) - pow(0.938272088,2));}

         if (pdg[jparticle]==2112)
         {penergy+=  sqrt(pow(Eng[jparticle],2) - pow(0.93956541,2));}


         if (pdg[jparticle]==1000020040	)
         {penergy+=  sqrt(pow(Eng[jparticle],2) - pow(3.72737924,2));}


          if (pdg[jparticle]==1000010020	)
         {penergy+=  sqrt(pow(Eng[jparticle],2) - pow(1.87561339,2));}

         //added this for all other particles because dep eng was sometimes larger than eng

       // if (pdg[jparticle]!=11 && pdg[jparticle]!=22 && pdg[jparticle]!=2212 && pdg[jparticle]!=2112)
        //  {penergy+=sqrt(pow(Eng[jparticle],2) - pow(36.4,2));}

      //  }
            
            
            
            
            }

             
             




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


         if(pdg[jparticle]==1000010020 )
         { d+=1; }

        if(pdg[jparticle]!=11 && pdg[jparticle]!=22 && pdg[jparticle]!=2212 && pdg[jparticle]!=2112)
        { nother+=1; }

         





  	 }  // end of loop on jparticle

    numElements = nelectrons + nphoton + nproton + nneutron + nother;

    
      // CONDITION FOR THE PARTICLE TYPE/POSITION
      
        //if(numElements>=5)
       // {
      //	photonenergy->Fill(penergy);


       //  std::cout << penergy << std::endl;
         
       // }




       // NO CONDITION

        //photonenergy->Fill(penergy);
        //std::cout <<penergy<<std::endl;



       // TEST TO PRINT OUT PROPERTIES FOR A CERTAIN ENERGY

       //if (penergy>0.15)
       // {

         //std::cout <<"ele"<<nelectrons<<"photon"<<nphoton<<"proton"<<nproton<<"neutron"<<nneutron<<"other"<<nother<<std::endl;

         //photonenergy->Fill(penergy);

         //for (int i = numElements - 1; i >= 0; i--) 
        // cout << StartPointx[i] <<","<<StartPointy[i]<<std::endl;
       // }
       // std::cout <<"new event"<<std::endl;




       // so now i want to create something that only allows me to print the events which do not have the error

           for (int i = numElements - 1; i >= 0; i--) 
           {
              if(StartPointx[i]==-99999 || StartPointy[i]==-99999  
             || StartPointx[i]>= 100 || StartPointx[i]<= -100 || StartPointy[i]>= 100|| StartPointy[i]<= -100|| StartPointz[i]>= 300 || StartPointz[i]<= 100)
              {

                test+=1;


              }

           }
           if (test == 0 ){
           //if (nneutron != 0  || nproton != 0 ){
           // if(nphoton == 0 && nother == 1){
            //
            if(nproton != 0 || nneutron != 0 ){

           // photonenergy->Fill(penergy);


            
           std::cout <<penergy<<std::endl;

           //}}
           }}

           //photonenergy->Fill(penergy);


            // photonenergy->Fill(penergy);
            //std::cout <<penergy<<std::endl;
   
    

         
     	penergy=0;
      nelectrons=0;
      nphoton=0;
      nproton=0;
      nneutron=0;
      nother=0;
      test=0;


      d = 0;
     t = 0;
    h = 0;
    alpha = 0;

        
      // if (Cut(ientry) < 0) continue;
   	}  //end of for loop on jentry
gStyle->SetOptStat(0);
photonenergy->GetXaxis()->SetTitle("Energy (GeV)");
photonenergy->GetYaxis()->SetTitle("Number of Particles");
photonenergy->SetTitle("Kinetic Energy of all Particles in an Event");
photonenergy->SetLineWidth(2);
photonenergy->SetLineColor(kRed);
photonenergy->Draw();



   
}
