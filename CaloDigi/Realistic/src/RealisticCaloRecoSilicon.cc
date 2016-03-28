#include "RealisticCaloRecoSilicon.h"
#include <algorithm>
#include <cassert>
#include <iostream>

#include "DD4hep/LCDD.h"
#include "DD4hep/DD4hepUnits.h"
#include "DD4hep/DetType.h"
#include "DD4hep/DetectorSelector.h"
#include "DDRec/DetectorData.h"

using std::cout;
using std::endl;

RealisticCaloRecoSilicon aRealisticCaloRecoSilicon;

RealisticCaloRecoSilicon::RealisticCaloRecoSilicon() : RealisticCaloReco::Processor("RealisticCaloRecoSilicon") {
  _description = "Performs fist reconstruction of silicon ECAL hits";
}

void RealisticCaloRecoSilicon::init() {
  RealisticCaloReco::init();
}


float RealisticCaloRecoSilicon::reconstructEnergy(const CalorimeterHit* hit) {
  // here the input energy should be in MIPs
  float energy = hit->getEnergy();
  // what layer is this hit in?
  int layer   = (*_idDecoder) (hit)[_cellIDLayerString];
  // now correct for sampling fraction
  energy *= getLayerCalib( layer );
  return energy;
}
