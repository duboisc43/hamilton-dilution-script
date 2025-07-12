Method "1_to_4_Dilution_Pre_PCR"

Begin
  // Define labware and tips
  LoadLabware("96well_plate", "Plate1", Pos(1))
  LoadLabware("96well_plate", "Plate2", Pos(2))
  LoadLabware("TipRack", "Tips", Pos(3))

  // Define variables
  Variable SourceWell, DestWell, Tip
  Variable DiluentVol = 75
  Variable SampleVol = 25

  // Loop through each well for dilution
  ForEachWell(SourceWell in Plate1)
    DestWell = GetWell(Plate2, WellIndex(SourceWell))

    // Pick up tip
    Tip = GetTip(Tips)
    PickUpTip(Tip)

    // Add diluent first
    Aspirate(DiluentVol, DestWell)
    Dispense(DiluentVol, DestWell)

    // Transfer sample
    Aspirate(SampleVol, SourceWell)
    Dispense(SampleVol, DestWell)

    // Mix
    Mix(3, 50, DestWell)

    // Drop tip
    DropTip(Tip)
  EndFor

End
