#ifndef PhysicsTools_PatUtils_interface_EventSelector_h
#define PhysicsTools_PatUtils_interface_EventSelector_h

/**
  \class    EventSelector EventSelector.h "CommonTools/Utils/interface/EventSelector.h"
  \brief    A selector of events. 

  This is a placeholder. 

  \author Salvatore Rappoccio
  \version  $Id: PatEventSelector.h,v 1.1.2.1 2009/09/23 16:29:22 srappocc Exp $
*/


#include "PhysicsTools/Utilities/interface/Selector.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/Electron.h"
#include "DataFormats/PatCandidates/interface/Muon.h"
#include "DataFormats/PatCandidates/interface/MET.h"
#include "DataFormats/PatCandidates/interface/Photon.h"
#include "DataFormats/PatCandidates/interface/Tau.h"
#include "DataFormats/PatCandidates/interface/TriggerEvent.h"
#include <fstream>
#include <functional>

namespace pat {

  struct PatSummaryEvent {
    std::vector<pat::Jet>       jets;
    std::vector<pat::MET>       METs;
    std::vector<pat::Electron>  electrons;
    std::vector<pat::Muon>      muons;
    std::vector<pat::Tau>       taus;
    std::vector<pat::Photon>    photons;
    pat::TriggerEvent const *   triggerEvent;
  };

typedef Selector<PatSummaryEvent> PatEventSelector;

}

#endif