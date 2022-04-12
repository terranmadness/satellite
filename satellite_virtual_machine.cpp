#ifndef SATELLITE_VIRTUAL_MACHINE
#define SATELLITE_VIRTUAL_MACHINE

#include "satellite_header.hpp"

satellite_system satellite_virtual_machine(satellite_system satellite)
{
  satellite.call_display_message("divider", 3);
  satellite.call_display_message("satellite_virtual_machine();", 3);
  satellite.call_display_message("divider", 3);
  satellite.call_display_message("SATELLITE VIRTUAL MACHINE -- BYTECODE EXECUTION ENGINE", 3);
  satellite.call_display_message("THE VIRTUAL MACHINE REQUIRES THAT YOU SUPPLY IT WITH A VALID,", 3);
  satellite.call_display_message("ALREADY COMPILED BYTECODE FILE! THIS FILE WILL HAVE THE", 3);
  satellite.call_display_message("\".SATE\" PLEASE SUPPLY THAT FILE NOW...", 3);
  satellite.call_display_message("divider", 3);
  satellite.call_display_message("divider", 3);

  satellite.call_display_message("ENTER THE RELATIVE OR ABSOLUTE FILENAME NOW:", 3);
  satellite.call_collect_input(3);
  satellite.call_load_virtual_machine();

  satellite.call_load_program();

  satellite.call_display_message("PAUSED FOR INPUT.", 3);
  satellite.call_collect_input(3);

  return(satellite);
}

#endif
