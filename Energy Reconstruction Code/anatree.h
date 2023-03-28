//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Nov 23 14:19:44 2022 by ROOT version 6.26/04
// from TTree anatree/analysis tree
// found on file: anatree_output+new.root
//////////////////////////////////////////////////////////

#ifndef anatree_h
#define anatree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class anatree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           subrun;
   Int_t           event;
   Double_t        evttime;
   Double_t        beamtime;
   Double_t        pot;
   Char_t          isdata;
   Float_t         taulife;
   Int_t           no_hits;
   Int_t           num_pfps;
   Int_t           pfp_sliceid[3];   //[num_pfps]
   Int_t           pfp_pdg[3];   //[num_pfps]
   Int_t           num_slices;
   Int_t           num_nuslices;
   Int_t           best_nuslice_id;
   Int_t           best_nuslice_pfpid;
   Int_t           best_nuslice_pdg;
   Int_t           best_nuslice_origin;
   Float_t         best_nuslice_score;
   Float_t         best_nuslice_hitcomp;
   Float_t         best_nuslice_hitpurity;
   Float_t         best_nuslice_lephitcomp;
   Float_t         best_nuslice_lephitpurity;
   Int_t           mcevts_truth;
   Int_t           nuScatterCode_truth[1];   //[mcevts_truth]
   Int_t           nuID_truth[1];   //[mcevts_truth]
   Int_t           nuPDG_truth[1];   //[mcevts_truth]
   Int_t           ccnc_truth[1];   //[mcevts_truth]
   Int_t           mode_truth[1];   //[mcevts_truth]
   Float_t         enu_truth[1];   //[mcevts_truth]
   Float_t         Q2_truth[1];   //[mcevts_truth]
   Float_t         W_truth[1];   //[mcevts_truth]
   Int_t           hitnuc_truth[1];   //[mcevts_truth]
   Float_t         nuvtxx_truth[1];   //[mcevts_truth]
   Float_t         nuvtxy_truth[1];   //[mcevts_truth]
   Float_t         nuvtxz_truth[1];   //[mcevts_truth]
   Float_t         nu_dcosx_truth[1];   //[mcevts_truth]
   Float_t         nu_dcosy_truth[1];   //[mcevts_truth]
   Float_t         nu_dcosz_truth[1];   //[mcevts_truth]
   Float_t         lep_mom_truth[1];   //[mcevts_truth]
   Float_t         lep_dcosx_truth[1];   //[mcevts_truth]
   Float_t         lep_dcosy_truth[1];   //[mcevts_truth]
   Float_t         lep_dcosz_truth[1];   //[mcevts_truth]
   Float_t         tpx_flux[1];   //[mcevts_truth]
   Float_t         tpy_flux[1];   //[mcevts_truth]
   Float_t         tpz_flux[1];   //[mcevts_truth]
   Int_t           tptype_flux[1];   //[mcevts_truth]
   Int_t           genie_no_primaries;
   Int_t           genie_primaries_pdg[1];   //[genie_no_primaries]
   Float_t         genie_Eng[1];   //[genie_no_primaries]
   Float_t         genie_Px[1];   //[genie_no_primaries]
   Float_t         genie_Py[1];   //[genie_no_primaries]
   Float_t         genie_Pz[1];   //[genie_no_primaries]
   Float_t         genie_P[1];   //[genie_no_primaries]
   Int_t           genie_status_code[1];   //[genie_no_primaries]
   Float_t         genie_mass[1];   //[genie_no_primaries]
   Int_t           genie_trackID[1];   //[genie_no_primaries]
   Int_t           genie_ND[1];   //[genie_no_primaries]
   Int_t           genie_mother[1];   //[genie_no_primaries]
   Int_t           mcevts_truthcry;
   Int_t           cry_no_primaries;
   Int_t           cry_primaries_pdg[11];   //[cry_no_primaries]
   Float_t         cry_Eng[11];   //[cry_no_primaries]
   Float_t         cry_Px[11];   //[cry_no_primaries]
   Float_t         cry_Py[11];   //[cry_no_primaries]
   Float_t         cry_Pz[11];   //[cry_no_primaries]
   Float_t         cry_P[11];   //[cry_no_primaries]
   Float_t         cry_StartPointx[11];   //[cry_no_primaries]
   Float_t         cry_StartPointy[11];   //[cry_no_primaries]
   Float_t         cry_StartPointz[11];   //[cry_no_primaries]
   Int_t           cry_status_code[11];   //[cry_no_primaries]
   Float_t         cry_mass[11];   //[cry_no_primaries]
   Int_t           cry_trackID[11];   //[cry_no_primaries]
   Int_t           cry_ND[11];   //[cry_no_primaries]
   Int_t           cry_mother[11];   //[cry_no_primaries]
   Int_t           no_primaries;
   Int_t           geant_list_size;
   Int_t           geant_list_size_in_tpcAV;
   Int_t           pdg[23];   //[geant_list_size]
   Int_t           status[23];   //[geant_list_size]
   Float_t         Mass[23];   //[geant_list_size]
   Float_t         Eng[23];   //[geant_list_size]
   Float_t         EndE[23];   //[geant_list_size]
   Float_t         Px[23];   //[geant_list_size]
   Float_t         Py[23];   //[geant_list_size]
   Float_t         Pz[23];   //[geant_list_size]
   Float_t         P[23];   //[geant_list_size]
   Float_t         StartPointx[23];   //[geant_list_size]
   Float_t         StartPointy[23];   //[geant_list_size]
   Float_t         StartPointz[23];   //[geant_list_size]
   Float_t         StartT[23];   //[geant_list_size]
   Float_t         EndPointx[23];   //[geant_list_size]
   Float_t         EndPointy[23];   //[geant_list_size]
   Float_t         EndPointz[23];   //[geant_list_size]
   Float_t         EndT[23];   //[geant_list_size]
   Float_t         theta[23];   //[geant_list_size]
   Float_t         phi[23];   //[geant_list_size]
   Float_t         theta_xz[23];   //[geant_list_size]
   Float_t         theta_yz[23];   //[geant_list_size]
   Float_t         pathlen[23];   //[geant_list_size]
   Int_t           inTPCActive[23];   //[geant_list_size]
   Float_t         StartPointx_tpcAV[23];   //[geant_list_size]
   Float_t         StartPointy_tpcAV[23];   //[geant_list_size]
   Float_t         StartPointz_tpcAV[23];   //[geant_list_size]
   Float_t         EndPointx_tpcAV[23];   //[geant_list_size]
   Float_t         EndPointy_tpcAV[23];   //[geant_list_size]
   Float_t         EndPointz_tpcAV[23];   //[geant_list_size]
   Int_t           NumberDaughters[23];   //[geant_list_size]
   Int_t           Mother[23];   //[geant_list_size]
   Int_t           TrackId[23];   //[geant_list_size]
   Int_t           MergedId[23];   //[geant_list_size]
   Int_t           MotherNuId[23];   //[geant_list_size]
   Int_t           process_primary[23];   //[geant_list_size]
   vector<string>  *processname;
   Float_t         DepEnergy[23];   //[geant_list_size]
   Float_t         NumElectrons[23];   //[geant_list_size]
   Float_t         total_DepEnergy;
   Float_t         total_NumElectrons;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_subrun;   //!
   TBranch        *b_event;   //!
   TBranch        *b_evttime;   //!
   TBranch        *b_beamtime;   //!
   TBranch        *b_pot;   //!
   TBranch        *b_isdata;   //!
   TBranch        *b_taulife;   //!
   TBranch        *b_no_hits;   //!
   TBranch        *b_num_pfps;   //!
   TBranch        *b_pfp_sliceid;   //!
   TBranch        *b_pfp_pdg;   //!
   TBranch        *b_num_slices;   //!
   TBranch        *b_num_nuslices;   //!
   TBranch        *b_best_nuslice_id;   //!
   TBranch        *b_best_nuslice_pfpid;   //!
   TBranch        *b_best_nuslice_pdg;   //!
   TBranch        *b_best_nuslice_origin;   //!
   TBranch        *b_best_nuslice_score;   //!
   TBranch        *b_best_nuslice_hitcomp;   //!
   TBranch        *b_best_nuslice_hitpurity;   //!
   TBranch        *b_best_nuslice_lephitcomp;   //!
   TBranch        *b_best_nuslice_lephitpurity;   //!
   TBranch        *b_mcevts_truth;   //!
   TBranch        *b_nuScatterCode_truth;   //!
   TBranch        *b_nuID_truth;   //!
   TBranch        *b_nuPDG_truth;   //!
   TBranch        *b_ccnc_truth;   //!
   TBranch        *b_mode_truth;   //!
   TBranch        *b_enu_truth;   //!
   TBranch        *b_Q2_truth;   //!
   TBranch        *b_W_truth;   //!
   TBranch        *b_hitnuc_truth;   //!
   TBranch        *b_nuvtxx_truth;   //!
   TBranch        *b_nuvtxy_truth;   //!
   TBranch        *b_nuvtxz_truth;   //!
   TBranch        *b_nu_dcosx_truth;   //!
   TBranch        *b_nu_dcosy_truth;   //!
   TBranch        *b_nu_dcosz_truth;   //!
   TBranch        *b_lep_mom_truth;   //!
   TBranch        *b_lep_dcosx_truth;   //!
   TBranch        *b_lep_dcosy_truth;   //!
   TBranch        *b_lep_dcosz_truth;   //!
   TBranch        *b_tpx_flux;   //!
   TBranch        *b_tpy_flux;   //!
   TBranch        *b_tpz_flux;   //!
   TBranch        *b_tptype_flux;   //!
   TBranch        *b_genie_no_primaries;   //!
   TBranch        *b_genie_primaries_pdg;   //!
   TBranch        *b_genie_Eng;   //!
   TBranch        *b_genie_Px;   //!
   TBranch        *b_genie_Py;   //!
   TBranch        *b_genie_Pz;   //!
   TBranch        *b_genie_P;   //!
   TBranch        *b_genie_status_code;   //!
   TBranch        *b_genie_mass;   //!
   TBranch        *b_genie_trackID;   //!
   TBranch        *b_genie_ND;   //!
   TBranch        *b_genie_mother;   //!
   TBranch        *b_mcevts_truthcry;   //!
   TBranch        *b_cry_no_primaries;   //!
   TBranch        *b_cry_primaries_pdg;   //!
   TBranch        *b_cry_Eng;   //!
   TBranch        *b_cry_Px;   //!
   TBranch        *b_cry_Py;   //!
   TBranch        *b_cry_Pz;   //!
   TBranch        *b_cry_P;   //!
   TBranch        *b_cry_StartPointx;   //!
   TBranch        *b_cry_StartPointy;   //!
   TBranch        *b_cry_StartPointz;   //!
   TBranch        *b_cry_status_code;   //!
   TBranch        *b_cry_mass;   //!
   TBranch        *b_cry_trackID;   //!
   TBranch        *b_cry_ND;   //!
   TBranch        *b_cry_mother;   //!
   TBranch        *b_no_primaries;   //!
   TBranch        *b_geant_list_size;   //!
   TBranch        *b_geant_list_size_in_tpcAV;   //!
   TBranch        *b_pdg;   //!
   TBranch        *b_status;   //!
   TBranch        *b_Mass;   //!
   TBranch        *b_Eng;   //!
   TBranch        *b_EndE;   //!
   TBranch        *b_Px;   //!
   TBranch        *b_Py;   //!
   TBranch        *b_Pz;   //!
   TBranch        *b_P;   //!
   TBranch        *b_StartPointx;   //!
   TBranch        *b_StartPointy;   //!
   TBranch        *b_StartPointz;   //!
   TBranch        *b_StartT;   //!
   TBranch        *b_EndPointx;   //!
   TBranch        *b_EndPointy;   //!
   TBranch        *b_EndPointz;   //!
   TBranch        *b_EndT;   //!
   TBranch        *b_theta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_theta_xz;   //!
   TBranch        *b_theta_yz;   //!
   TBranch        *b_pathlen;   //!
   TBranch        *b_inTPCActive;   //!
   TBranch        *b_StartPointx_tpcAV;   //!
   TBranch        *b_StartPointy_tpcAV;   //!
   TBranch        *b_StartPointz_tpcAV;   //!
   TBranch        *b_EndPointx_tpcAV;   //!
   TBranch        *b_EndPointy_tpcAV;   //!
   TBranch        *b_EndPointz_tpcAV;   //!
   TBranch        *b_NumberDaughters;   //!
   TBranch        *b_Mother;   //!
   TBranch        *b_TrackId;   //!
   TBranch        *b_MergedId;   //!
   TBranch        *b_MotherNuId;   //!
   TBranch        *b_process_primary;   //!
   TBranch        *b_processname;   //!
   TBranch        *b_DepEnergy;   //!
   TBranch        *b_NumElectrons;   //!
   TBranch        *b_total_DepEnergy;   //!
   TBranch        *b_total_NumElectrons;   //!

   anatree(TTree *tree=0);
   virtual ~anatree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef anatree_cxx
anatree::anatree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("reco2_output_2000_AnaTree-20230315T101145.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("reco2_output_2000_AnaTree-20230315T101145.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("reco2_output_2000_AnaTree-20230315T101145.root:/analysistree");
      dir->GetObject("anatree",tree);

   }
   Init(tree);
}

anatree::~anatree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t anatree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t anatree::LoadTree(Long64_t entry)
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

void anatree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   processname = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subrun", &subrun, &b_subrun);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("evttime", &evttime, &b_evttime);
   fChain->SetBranchAddress("beamtime", &beamtime, &b_beamtime);
   fChain->SetBranchAddress("pot", &pot, &b_pot);
   fChain->SetBranchAddress("isdata", &isdata, &b_isdata);
   fChain->SetBranchAddress("taulife", &taulife, &b_taulife);
   fChain->SetBranchAddress("no_hits", &no_hits, &b_no_hits);
   fChain->SetBranchAddress("num_pfps", &num_pfps, &b_num_pfps);
   fChain->SetBranchAddress("pfp_sliceid", pfp_sliceid, &b_pfp_sliceid);
   fChain->SetBranchAddress("pfp_pdg", pfp_pdg, &b_pfp_pdg);
   fChain->SetBranchAddress("num_slices", &num_slices, &b_num_slices);
   fChain->SetBranchAddress("num_nuslices", &num_nuslices, &b_num_nuslices);
   fChain->SetBranchAddress("best_nuslice_id", &best_nuslice_id, &b_best_nuslice_id);
   fChain->SetBranchAddress("best_nuslice_pfpid", &best_nuslice_pfpid, &b_best_nuslice_pfpid);
   fChain->SetBranchAddress("best_nuslice_pdg", &best_nuslice_pdg, &b_best_nuslice_pdg);
   fChain->SetBranchAddress("best_nuslice_origin", &best_nuslice_origin, &b_best_nuslice_origin);
   fChain->SetBranchAddress("best_nuslice_score", &best_nuslice_score, &b_best_nuslice_score);
   fChain->SetBranchAddress("best_nuslice_hitcomp", &best_nuslice_hitcomp, &b_best_nuslice_hitcomp);
   fChain->SetBranchAddress("best_nuslice_hitpurity", &best_nuslice_hitpurity, &b_best_nuslice_hitpurity);
   fChain->SetBranchAddress("best_nuslice_lephitcomp", &best_nuslice_lephitcomp, &b_best_nuslice_lephitcomp);
   fChain->SetBranchAddress("best_nuslice_lephitpurity", &best_nuslice_lephitpurity, &b_best_nuslice_lephitpurity);
   fChain->SetBranchAddress("mcevts_truth", &mcevts_truth, &b_mcevts_truth);
   fChain->SetBranchAddress("nuScatterCode_truth", &nuScatterCode_truth, &b_nuScatterCode_truth);
   fChain->SetBranchAddress("nuID_truth", &nuID_truth, &b_nuID_truth);
   fChain->SetBranchAddress("nuPDG_truth", &nuPDG_truth, &b_nuPDG_truth);
   fChain->SetBranchAddress("ccnc_truth", &ccnc_truth, &b_ccnc_truth);
   fChain->SetBranchAddress("mode_truth", &mode_truth, &b_mode_truth);
   fChain->SetBranchAddress("enu_truth", &enu_truth, &b_enu_truth);
   fChain->SetBranchAddress("Q2_truth", &Q2_truth, &b_Q2_truth);
   fChain->SetBranchAddress("W_truth", &W_truth, &b_W_truth);
   fChain->SetBranchAddress("hitnuc_truth", &hitnuc_truth, &b_hitnuc_truth);
   fChain->SetBranchAddress("nuvtxx_truth", &nuvtxx_truth, &b_nuvtxx_truth);
   fChain->SetBranchAddress("nuvtxy_truth", &nuvtxy_truth, &b_nuvtxy_truth);
   fChain->SetBranchAddress("nuvtxz_truth", &nuvtxz_truth, &b_nuvtxz_truth);
   fChain->SetBranchAddress("nu_dcosx_truth", &nu_dcosx_truth, &b_nu_dcosx_truth);
   fChain->SetBranchAddress("nu_dcosy_truth", &nu_dcosy_truth, &b_nu_dcosy_truth);
   fChain->SetBranchAddress("nu_dcosz_truth", &nu_dcosz_truth, &b_nu_dcosz_truth);
   fChain->SetBranchAddress("lep_mom_truth", &lep_mom_truth, &b_lep_mom_truth);
   fChain->SetBranchAddress("lep_dcosx_truth", &lep_dcosx_truth, &b_lep_dcosx_truth);
   fChain->SetBranchAddress("lep_dcosy_truth", &lep_dcosy_truth, &b_lep_dcosy_truth);
   fChain->SetBranchAddress("lep_dcosz_truth", &lep_dcosz_truth, &b_lep_dcosz_truth);
   fChain->SetBranchAddress("tpx_flux", &tpx_flux, &b_tpx_flux);
   fChain->SetBranchAddress("tpy_flux", &tpy_flux, &b_tpy_flux);
   fChain->SetBranchAddress("tpz_flux", &tpz_flux, &b_tpz_flux);
   fChain->SetBranchAddress("tptype_flux", &tptype_flux, &b_tptype_flux);
   fChain->SetBranchAddress("genie_no_primaries", &genie_no_primaries, &b_genie_no_primaries);
   fChain->SetBranchAddress("genie_primaries_pdg", &genie_primaries_pdg, &b_genie_primaries_pdg);
   fChain->SetBranchAddress("genie_Eng", &genie_Eng, &b_genie_Eng);
   fChain->SetBranchAddress("genie_Px", &genie_Px, &b_genie_Px);
   fChain->SetBranchAddress("genie_Py", &genie_Py, &b_genie_Py);
   fChain->SetBranchAddress("genie_Pz", &genie_Pz, &b_genie_Pz);
   fChain->SetBranchAddress("genie_P", &genie_P, &b_genie_P);
   fChain->SetBranchAddress("genie_status_code", &genie_status_code, &b_genie_status_code);
   fChain->SetBranchAddress("genie_mass", &genie_mass, &b_genie_mass);
   fChain->SetBranchAddress("genie_trackID", &genie_trackID, &b_genie_trackID);
   fChain->SetBranchAddress("genie_ND", &genie_ND, &b_genie_ND);
   fChain->SetBranchAddress("genie_mother", &genie_mother, &b_genie_mother);
   fChain->SetBranchAddress("mcevts_truthcry", &mcevts_truthcry, &b_mcevts_truthcry);
   fChain->SetBranchAddress("cry_no_primaries", &cry_no_primaries, &b_cry_no_primaries);
   fChain->SetBranchAddress("cry_primaries_pdg", cry_primaries_pdg, &b_cry_primaries_pdg);
   fChain->SetBranchAddress("cry_Eng", cry_Eng, &b_cry_Eng);
   fChain->SetBranchAddress("cry_Px", cry_Px, &b_cry_Px);
   fChain->SetBranchAddress("cry_Py", cry_Py, &b_cry_Py);
   fChain->SetBranchAddress("cry_Pz", cry_Pz, &b_cry_Pz);
   fChain->SetBranchAddress("cry_P", cry_P, &b_cry_P);
   fChain->SetBranchAddress("cry_StartPointx", cry_StartPointx, &b_cry_StartPointx);
   fChain->SetBranchAddress("cry_StartPointy", cry_StartPointy, &b_cry_StartPointy);
   fChain->SetBranchAddress("cry_StartPointz", cry_StartPointz, &b_cry_StartPointz);
   fChain->SetBranchAddress("cry_status_code", cry_status_code, &b_cry_status_code);
   fChain->SetBranchAddress("cry_mass", cry_mass, &b_cry_mass);
   fChain->SetBranchAddress("cry_trackID", cry_trackID, &b_cry_trackID);
   fChain->SetBranchAddress("cry_ND", cry_ND, &b_cry_ND);
   fChain->SetBranchAddress("cry_mother", cry_mother, &b_cry_mother);
   fChain->SetBranchAddress("no_primaries", &no_primaries, &b_no_primaries);
   fChain->SetBranchAddress("geant_list_size", &geant_list_size, &b_geant_list_size);
   fChain->SetBranchAddress("geant_list_size_in_tpcAV", &geant_list_size_in_tpcAV, &b_geant_list_size_in_tpcAV);
   fChain->SetBranchAddress("pdg", pdg, &b_pdg);
   fChain->SetBranchAddress("status", status, &b_status);
   fChain->SetBranchAddress("Mass", Mass, &b_Mass);
   fChain->SetBranchAddress("Eng", Eng, &b_Eng);
   fChain->SetBranchAddress("EndE", EndE, &b_EndE);
   fChain->SetBranchAddress("Px", Px, &b_Px);
   fChain->SetBranchAddress("Py", Py, &b_Py);
   fChain->SetBranchAddress("Pz", Pz, &b_Pz);
   fChain->SetBranchAddress("P", P, &b_P);
   fChain->SetBranchAddress("StartPointx", StartPointx, &b_StartPointx);
   fChain->SetBranchAddress("StartPointy", StartPointy, &b_StartPointy);
   fChain->SetBranchAddress("StartPointz", StartPointz, &b_StartPointz);
   fChain->SetBranchAddress("StartT", StartT, &b_StartT);
   fChain->SetBranchAddress("EndPointx", EndPointx, &b_EndPointx);
   fChain->SetBranchAddress("EndPointy", EndPointy, &b_EndPointy);
   fChain->SetBranchAddress("EndPointz", EndPointz, &b_EndPointz);
   fChain->SetBranchAddress("EndT", EndT, &b_EndT);
   fChain->SetBranchAddress("theta", theta, &b_theta);
   fChain->SetBranchAddress("phi", phi, &b_phi);
   fChain->SetBranchAddress("theta_xz", theta_xz, &b_theta_xz);
   fChain->SetBranchAddress("theta_yz", theta_yz, &b_theta_yz);
   fChain->SetBranchAddress("pathlen", pathlen, &b_pathlen);
   fChain->SetBranchAddress("inTPCActive", inTPCActive, &b_inTPCActive);
   fChain->SetBranchAddress("StartPointx_tpcAV", StartPointx_tpcAV, &b_StartPointx_tpcAV);
   fChain->SetBranchAddress("StartPointy_tpcAV", StartPointy_tpcAV, &b_StartPointy_tpcAV);
   fChain->SetBranchAddress("StartPointz_tpcAV", StartPointz_tpcAV, &b_StartPointz_tpcAV);
   fChain->SetBranchAddress("EndPointx_tpcAV", EndPointx_tpcAV, &b_EndPointx_tpcAV);
   fChain->SetBranchAddress("EndPointy_tpcAV", EndPointy_tpcAV, &b_EndPointy_tpcAV);
   fChain->SetBranchAddress("EndPointz_tpcAV", EndPointz_tpcAV, &b_EndPointz_tpcAV);
   fChain->SetBranchAddress("NumberDaughters", NumberDaughters, &b_NumberDaughters);
   fChain->SetBranchAddress("Mother", Mother, &b_Mother);
   fChain->SetBranchAddress("TrackId", TrackId, &b_TrackId);
   fChain->SetBranchAddress("MergedId", MergedId, &b_MergedId);
   fChain->SetBranchAddress("MotherNuId", MotherNuId, &b_MotherNuId);
   fChain->SetBranchAddress("process_primary", process_primary, &b_process_primary);
   fChain->SetBranchAddress("processname", &processname, &b_processname);
   fChain->SetBranchAddress("DepEnergy", DepEnergy, &b_DepEnergy);
   fChain->SetBranchAddress("NumElectrons", NumElectrons, &b_NumElectrons);
   fChain->SetBranchAddress("total_DepEnergy", &total_DepEnergy, &b_total_DepEnergy);
   fChain->SetBranchAddress("total_NumElectrons", &total_NumElectrons, &b_total_NumElectrons);
   Notify();
}

Bool_t anatree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void anatree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t anatree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef anatree_cxx
