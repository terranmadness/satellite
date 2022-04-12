
// =================================================================== //
// =================================================================== //
// USE THE NAME "AIRSTRIKE" FOR THE GUI APPLICATION ASSOCIATED WITH SATELLITE



// =================================================================== //
// =================================================================== //

#ifndef SATELLITE_MAIN
#define SATELLITE_MAIN

#include "satellite_header.hpp"

satellite_system sat_function_about(satellite_system);
satellite_system testing(satellite_system);
satellite_system read_console_input(string, vector<string>, satellite_system);


// =================================================================== //
// =================================================================== //

class satellite_token
{
private:
  string satellite_token_body = "";
  unsigned long long int token_start_location = 0;
  unsigned long long int token_length = 0;
  unsigned long long int token_end_location = 0;

  string token_descriptor = "void";

  void set_token_descriptor(string descriptor_input)
  {
    token_descriptor = descriptor_input;
  }

  void set_token_body(string token_body_input)
  {
    satellite_token_body = token_body_input;
  }

  void set_token_integers(unsigned long long int input_token_start_location, unsigned long long int input_token_length, unsigned long long int input_token_end_location)
  {
    token_start_location = input_token_start_location;
    token_length = input_token_length;
    token_end_location = input_token_end_location;
  }

  string return_token_body()
  {
    return(satellite_token_body);
  }

public:

  void call_set_token_integers(unsigned long long int input_token_start_location, unsigned long long int input_token_length, unsigned long long int input_token_end_location)
  {
    set_token_integers(input_token_start_location, input_token_length, input_token_end_location);
  }

  void call_set_token_descriptor(string descriptor_input)
  {
    set_token_descriptor(descriptor_input);
  }

  void call_set_token_body(string token_body_input)
  {
    set_token_body(token_body_input);
  }

  string call_return_token_body()
  {
    return(return_token_body());
  }
};


// =================================================================== //
// =================================================================== //

int main()
{
  satellite_system satellite;
  satellite = satellite_compiler(satellite);

  satellite.call_display_message("divider", 0);
  satellite.call_display_message("divider", 0);
  satellite.call_display_message("SATELLITE BYTECODE SYSTEM", 0);
  satellite.call_display_message("VERSION 001", 0);
  satellite.call_display_message("REVISION H", 0);
  satellite.call_display_message("divider", 0);
  satellite.call_display_message("(C)OPYRIGHT 2022 THE PARADIGM CORPORATION", 0);
  satellite.call_display_message("(C)OPYRIGHT 2022 DRAX ENTERPRISE CORPORATION", 0);
  satellite.call_display_message("divider", 0);
  satellite.call_display_message("UPDATED MARCH 2022", 0);
  satellite.call_display_message("ORIGINALLY FORGED FEBRUARY 2022", 0);
  satellite.call_display_message("divider", 0);
  satellite.call_display_message("divider", 0);

  satellite.call_display_message("ENTER YOUR USERNAME!", 0);
  satellite.call_collect_input(0);
  satellite.call_display_message("entrance-console", 0);

  string local_console_input = "void";

  bool operate_console = true;
  bool console_input_is_valid = false;

  satellite = testing(satellite);

  while (operate_console == true)
  {
    console_input_is_valid = false;

    cout << "here1";

    cout << "  [SAT-console] >>";
    getline(cin, local_console_input);
    // satellite.call_collect_input(0);
    cout << "here2";

    string console_input = local_console_input;
    vector<string> console_input_arguments;

    // satellite = read_console_input(console_input, console_input_arguments, satellite);

    if (local_console_input == "exit" || local_console_input == "quit" || local_console_input == "EXIT" || local_console_input == "QUIT" || local_console_input == "exit()" || local_console_input == "exit();" || local_console_input == "EXIT()" || local_console_input == "EXIT();" || local_console_input == "QUIT()" || local_console_input == "QUIT();" || local_console_input == "quit()")
    {
      satellite.call_display_message("- - SHUTDOWN - - ", 0);
      operate_console = false;
      console_input_is_valid = true;
    }

    if (local_console_input == "about();" || local_console_input == "ABOUT();" || local_console_input == "ABOUT()" || local_console_input == "ABOUT();" || local_console_input == "ABOUT" || local_console_input == "about")
    {
      satellite = sat_function_about(satellite);

      console_input_is_valid = true;
    }

    if (local_console_input == "virtual_machine();" || local_console_input == "VIRTUAL_MACHINE();" || local_console_input == "VIRTUAL_MACHINE()" || local_console_input == "virtual_machine()" || local_console_input == "virtual_machine" || local_console_input == "VIRTUAL_MACHINE" || local_console_input == "VM();" || local_console_input == "vm();")
    {
      console_input_is_valid = true;

      satellite = satellite_virtual_machine(satellite);
    }

    if (local_console_input == "vm" || local_console_input == "VM" || local_console_input == "VM()" || local_console_input == "vm()")
    {
      console_input_is_valid = true;

      satellite = satellite_virtual_machine(satellite);
    }

    if (console_input_is_valid == false)
    {

      satellite.call_display_message("divider", 0);
      satellite.call_display_message("divider", 0);
      satellite.call_display_message("\t\t- - - !ERROR! - - -", 0);
      satellite.call_display_message("INPUT NOT RECOGNIZED! local_console_input = " + local_console_input, 0);
      satellite.call_display_message("divider", 0);
      satellite.call_display_message("divider", 0);
    }
  }

  return 0;

}

satellite_system sat_function_about(satellite_system satellite)
{
  satellite.call_display_message("\ndivider", 0);
  satellite.call_display_message("divider", 0);
  satellite.call_display_message("\nSATELLITE BYTECODE SYSTEM (about function)", 0);
  satellite.call_display_message("VERSION 001", 0);
  satellite.call_display_message("REVISION H\n", 0);
  satellite.call_display_message("divider", 0);
  satellite.call_display_message("\n(c) 2022 THE PARADIGM CORPORATION", 0);
  satellite.call_display_message("(c) 2022 DRAX ENTERPRISE CORPORATION\n", 0);
  satellite.call_display_message("divider", 0);
  satellite.call_display_message("SATELLITE BYTECODE TECHNOLOGY IS A SYSTEM CONSISTING OF A (1)", 0);
  satellite.call_display_message("BYTECODE COMPILER AND (2) VIRTUAL MACHINE, (3) AN", 0);
  satellite.call_display_message("INTERPRETER FOR LEARNING THE LANGUAGE. TOGETHER VIRTUAL", 0);
  satellite.call_display_message("MACHINE AND COMPILER WORK TOGETHER TO PROVIDE THE", 0);
  satellite.call_display_message("SATELLITE COMPILER WORK TOGETHER TO PROVIDE THE SATELLITE", 0);
  satellite.call_display_message("PROGRAMMING LANGUAGE CONSTRUCT. A COMPILER IS A TOOL THAT", 0);
  satellite.call_display_message("TRANSLATES SOURCE CODE WRITTEN IN THE SATELLITE LANGUAGE,", 0);
  satellite.call_display_message("AS DEFINED BY THE CREATOR OF SATELLITE, MYSELF, MADNESS,", 0);
  satellite.call_display_message("WITHIN THE CONFINES OF WHAT IS POSSIBLE WITH CURRENT", 0);
  satellite.call_display_message("TECHNIQUES AND TOOLS, INTO ANOTHER TYPE OF CODE: BYTECODE. ", 0);
  satellite.call_display_message("BYTECODE IS SOMETHING TAHT MACHINES UNDERSTAND, AND HUMANS,", 0);
  satellite.call_display_message("FOR THE MOST PART CANNOT. THIS BYTECODE IS A FORM OF MACHINE", 0);
  satellite.call_display_message("CODE, AND LOOKS A LOT LIKE \"A2 HB 86 C4\" WHICH IS MUCH CLOSER TO", 0);
  satellite.call_display_message("THE ACTUAL MACHINE CODE THAT RUNS ON YOUR PROCESSOR. THIS", 0);
  satellite.call_display_message("WAY IT IS LIKE FOOD THAT HAS ALREADY BEEN COOKED AND ONLY NEEDS", 0);
  satellite.call_display_message("TO BE HEATED UP IN THE MICROWAVE -- MOST OF THE WORK HAS", 0);
  satellite.call_display_message("ALREADY BEEN DONE, AND IN THIS WAY SATELLLITE CAN ACHIEVE", 0);
  satellite.call_display_message("SPEEDS SIMILAR TO THAT OF MACHINE CODE WITH LITTLE OVERHEAD", 0);
  satellite.call_display_message("WHAT DOES ALL THIS MEAN? YOUR SPENDING YOUR TIME LEARNING A", 0);
  satellite.call_display_message("LANGUAGE THAT IS ZIPPY-CAKE FAST!", 0);
  satellite.call_display_message("\t\t - MADNESS, MARCH \'22, ERIE, PENNSYLVANIA", 0);

  return(satellite);
}

satellite_system testing(satellite_system satellite)
{
  satellite.call_display_message("YOU HAVE REACHED THE \"testing()\" FUNCTION...", 0);

  satellite_data my_data_test;

  my_data_test.call_set_satellite_data_type("integer");
  my_data_test.call_echo_data_type();


  return(satellite);
}

satellite_system read_console_input(string console_input, vector<string> console_input_arguments, satellite_system satellite)
{
  bool console_input_is_a_character = false;
  unsigned long long int points_to_console_input = 0;
  bool parentheses_resolution = false;
  bool parentheses_not_found = false;
  if (console_input[0] == 'a' || console_input[0] == 'A')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'b' || console_input[0] == 'B')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'c' || console_input[0] == 'C')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'd' || console_input[0] == 'D')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'e' || console_input[0] == 'E')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'f' || console_input[0] == 'F')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'g' || console_input[0] == 'G')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'h' || console_input[0] == 'H')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'i' || console_input[0] == 'I')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'j' || console_input[0] == 'J')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'k' || console_input[0] == 'K')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'l' || console_input[0] == 'L')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'm' || console_input[0] == 'M')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'n' || console_input[0] == 'N')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'o' || console_input[0] == 'O')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'p' || console_input[0] == 'P')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'q' || console_input[0] == 'Q')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'r' || console_input[0] == 'R')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 's' || console_input[0] == 'S')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 't' || console_input[0] == 'T')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'u' || console_input[0] == 'U')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'v' || console_input[0] == 'V')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'w' || console_input[0] == 'W')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'x' || console_input[0] == 'X')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'y' || console_input[0] == 'Y')
  {
    console_input_is_a_character = true;
  }

  if (console_input[0] == 'z' || console_input[0] == 'Z')
  {
    console_input_is_a_character = true;
  }

  if (console_input_is_a_character == false)
  {
    satellite.call_display_message("ERROR! EXPECTED A CHARACTER!", 3);
  }

  unsigned long long int left_parentheses_location = 0;

  while (parentheses_resolution == false)
  {
    if (console_input[points_to_console_input] != '(')
    {
      parentheses_not_found = true;
    }

    if (console_input[points_to_console_input] == console_input.size())
    {
      parentheses_resolution = true;
    }

    if (console_input[points_to_console_input] == '(')
    {
      left_parentheses_location = points_to_console_input;
    }
  }

  if (parentheses_not_found == true)
  {
    satellite.call_display_message("ERROR! MISSING () PARENTHESES!", 1);
  }

  vector<satellite_token> token_vector;

  // satellite.call_set_token_registers(token_vector);

  if (parentheses_not_found == false)
  {
    satellite_token token_one;

    token_one.call_set_token_body(console_input.substr(0, left_parentheses_location));
    token_one.call_set_token_descriptor("keyword");
    token_one.call_set_token_integers(0, left_parentheses_location, left_parentheses_location - 1);

    token_vector.push_back(token_one);

    if (console_input[left_parentheses_location + 1] != '\"')
    {
      satellite.call_display_message("ERROR! MISSING QUOTATION MARK(S)!", 1);
    }

    if (console_input[left_parentheses_location + 1] == '\"')
    {
      satellite_token left_quotation_mark_token;

      left_quotation_mark_token.call_set_token_body("\"");
      left_quotation_mark_token.call_set_token_descriptor("left_quotation_mark");
      left_quotation_mark_token.call_set_token_integers(left_parentheses_location + 1, left_parentheses_location + 1, left_parentheses_location + 1);

      token_vector.push_back(left_quotation_mark_token);
    }
  }

  return(satellite);
}

satellite_system sat_global_parser(satellite_system satellite)
{
  return(satellite);
}

#endif
