//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Feb 27 18:19:48 2023 by ROOT version 6.26/04
// from TTree PhotonsPerOpDet/PhotonsPerOpDet
// found on file: reco2_output_800eventss_new_AnaTree-20230209T105557.root
//////////////////////////////////////////////////////////

#ifndef PhotonsPerOpDetClass_1_h
#define PhotonsPerOpDetClass_1_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class PhotonsPerOpDetClass_1 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           EventID;
   Int_t           OpChannel;
   Float_t         OpDetX;
   Float_t         OpDetY;
   Float_t         OpDetZ;
   Bool_t          isPMT;
   Int_t           CountAll;
   Int_t           CountDirect;
   Int_t           CountReflected;

   // List of branches
   TBranch        *b_EventID;   //!
   TBranch        *b_OpChannel;   //!
   TBranch        *b_OpDetX;   //!
   TBranch        *b_OpDetY;   //!
   TBranch        *b_OpDetZ;   //!
   TBranch        *b_isPMT;   //!
   TBranch        *b_CountAll;   //!
   TBranch        *b_CountDirect;   //!
   TBranch        *b_CountReflected;   //!

   PhotonsPerOpDetClass_1(TTree *tree=0);
   virtual ~PhotonsPerOpDetClass_1();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef PhotonsPerOpDetClass_1_cxx
PhotonsPerOpDetClass_1::PhotonsPerOpDetClass_1(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("reco2_output_2000_AnaTree-20230315T101145.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("reco2_output_2000_AnaTree-20230315T101145.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("reco2_output_2000_AnaTree-20230315T101145.root:/opdetanalyzer");
      dir->GetObject("PhotonsPerOpDet",tree);

   }
   Init(tree);
}

PhotonsPerOpDetClass_1::~PhotonsPerOpDetClass_1()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t PhotonsPerOpDetClass_1::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t PhotonsPerOpDetClass_1::LoadTree(Long64_t entry)
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

void PhotonsPerOpDetClass_1::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EventID", &EventID, &b_EventID);
   fChain->SetBranchAddress("OpChannel", &OpChannel, &b_OpChannel);
   fChain->SetBranchAddress("OpDetX", &OpDetX, &b_OpDetX);
   fChain->SetBranchAddress("OpDetY", &OpDetY, &b_OpDetY);
   fChain->SetBranchAddress("OpDetZ", &OpDetZ, &b_OpDetZ);
   fChain->SetBranchAddress("isPMT", &isPMT, &b_isPMT);
   fChain->SetBranchAddress("CountAll", &CountAll, &b_CountAll);
   fChain->SetBranchAddress("CountDirect", &CountDirect, &b_CountDirect);
   fChain->SetBranchAddress("CountReflected", &CountReflected, &b_CountReflected);
   Notify();
}

Bool_t PhotonsPerOpDetClass_1::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void PhotonsPerOpDetClass_1::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t PhotonsPerOpDetClass_1::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef PhotonsPerOpDetClass_1_cxx
