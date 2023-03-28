//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Mar 22 02:13:55 2023 by ROOT version 6.26/04
// from TTree FlashTree/
// found on file: prodoverlay_corsika_cosmics_proton_genie_intrnue_spill_tpc_sbnd_reco2-c1fd0062-645e-4ed6-8c1a-97bec11a0c17_AnaTree-20230320T131800.root
//////////////////////////////////////////////////////////

#ifndef flashtreeClass_h
#define flashtreeClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"

class flashtreeClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           subrun;
   Int_t           event;
   Int_t           tpc;
   Double_t        flash_time;
   Double_t        flash_total_pe;
   Double_t        flash_y;
   Double_t        flash_yerr;
   Double_t        flash_z;
   Double_t        flash_zerr;
   vector<double>  *flash_pe_v;
   vector<double>  *flash_ophit_time;
   vector<double>  *flash_ophit_amp;
   vector<double>  *flash_ophit_area;
   vector<double>  *flash_ophit_width;
   vector<double>  *flash_ophit_pe;
   vector<int>     *flash_ophit_ch;
   vector<string>  *flash_ophit_chname;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_subrun;   //!
   TBranch        *b_event;   //!
   TBranch        *b_tpc;   //!
   TBranch        *b_flash_time;   //!
   TBranch        *b_flash_total_pe;   //!
   TBranch        *b_flash_y;   //!
   TBranch        *b_flash_yerr;   //!
   TBranch        *b_flash_z;   //!
   TBranch        *b_flash_zerr;   //!
   TBranch        *b_flash_pe_v;   //!
   TBranch        *b_flash_ophit_time;   //!
   TBranch        *b_flash_ophit_amp;   //!
   TBranch        *b_flash_ophit_area;   //!
   TBranch        *b_flash_ophit_width;   //!
   TBranch        *b_flash_ophit_pe;   //!
   TBranch        *b_flash_ophit_ch;   //!
   TBranch        *b_flash_ophit_chname;   //!

   flashtreeClass(TTree *tree=0);
   virtual ~flashtreeClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef flashtreeClass_cxx
flashtreeClass::flashtreeClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("prodoverlay_corsika_cosmics_proton_genie_intrnue_spill_tpc_sbnd_reco2-c1fd0062-645e-4ed6-8c1a-97bec11a0c17_AnaTree-20230320T131800.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("prodoverlay_corsika_cosmics_proton_genie_intrnue_spill_tpc_sbnd_reco2-c1fd0062-645e-4ed6-8c1a-97bec11a0c17_AnaTree-20230320T131800.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("prodoverlay_corsika_cosmics_proton_genie_intrnue_spill_tpc_sbnd_reco2-c1fd0062-645e-4ed6-8c1a-97bec11a0c17_AnaTree-20230320T131800.root:/flashana");
      dir->GetObject("FlashTree",tree);

   }
   Init(tree);
}

flashtreeClass::~flashtreeClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t flashtreeClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t flashtreeClass::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void flashtreeClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   flash_pe_v = 0;
   flash_ophit_time = 0;
   flash_ophit_amp = 0;
   flash_ophit_area = 0;
   flash_ophit_width = 0;
   flash_ophit_pe = 0;
   flash_ophit_ch = 0;
   flash_ophit_chname = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subrun", &subrun, &b_subrun);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("tpc", &tpc, &b_tpc);
   fChain->SetBranchAddress("flash_time", &flash_time, &b_flash_time);
   fChain->SetBranchAddress("flash_total_pe", &flash_total_pe, &b_flash_total_pe);
   fChain->SetBranchAddress("flash_y", &flash_y, &b_flash_y);
   fChain->SetBranchAddress("flash_yerr", &flash_yerr, &b_flash_yerr);
   fChain->SetBranchAddress("flash_z", &flash_z, &b_flash_z);
   fChain->SetBranchAddress("flash_zerr", &flash_zerr, &b_flash_zerr);
   fChain->SetBranchAddress("flash_pe_v", &flash_pe_v, &b_flash_pe_v);
   fChain->SetBranchAddress("flash_ophit_time", &flash_ophit_time, &b_flash_ophit_time);
   fChain->SetBranchAddress("flash_ophit_amp", &flash_ophit_amp, &b_flash_ophit_amp);
   fChain->SetBranchAddress("flash_ophit_area", &flash_ophit_area, &b_flash_ophit_area);
   fChain->SetBranchAddress("flash_ophit_width", &flash_ophit_width, &b_flash_ophit_width);
   fChain->SetBranchAddress("flash_ophit_pe", &flash_ophit_pe, &b_flash_ophit_pe);
   fChain->SetBranchAddress("flash_ophit_ch", &flash_ophit_ch, &b_flash_ophit_ch);
   fChain->SetBranchAddress("flash_ophit_chname", &flash_ophit_chname, &b_flash_ophit_chname);
   Notify();
}

Bool_t flashtreeClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void flashtreeClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t flashtreeClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef flashtreeClass_cxx
