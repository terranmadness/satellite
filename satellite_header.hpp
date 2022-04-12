#ifndef SATELLITE_HEADER
#define SATELLITE_HEADER

#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <fstream>

using namespace std;

class satellite_data
{
private:
  bitset<8> satellite_data_type;

  string satellite_data_name = "void";
  string system_name = "";

  signed long long int data_slot_integer;
  unsigned long long int data_slot_unsigned_integer;
  string data_slot_satellite_string;
  bool data_slot_bit;
  bitset<64> data_slot_64_bit;
  bitset<512> data_slot_512_bit;
  bitset<3> mbit;
  bitset<192> data_slot_64_mbit;
  bitset<1536> data_slot_512_mbit;
  vector<signed long long int> integer_vector;
  vector<unsigned long long int> unsigned_integer_vector;
  vector<string> satellite_string_vector;
  vector<bool> satellite_bit_vector;
  vector<bitset<64>> data_slot_64_bit_vector;
  vector<bitset<512>> data_slot_512_bit_vector;
  vector<bitset<3>> data_slot_mbit_vector;
  vector<bitset<192>> data_slot_64_mbit_vector;
  vector<bitset<1536>> data_slot_512_mbit_vector;

  void set_data_name(string data_name_input)
  {
    satellite_data_name = data_name_input;
  }

  void set_satellite_data_type(string satellite_data_type_input)
  {
    if (satellite_data_type_input == "integer")
    {
      satellite_data_type = (0b00000000); // ONE
    }

    if (satellite_data_type_input == "unsigned_integer")
    {
      satellite_data_type = (0b00000001); // TWO
    }

    if (satellite_data_type_input == "satellite_string")
    {
      satellite_data_type = (0b00000010); //  THREE
    }

    if (satellite_data_type_input == "bit")
    {
      satellite_data_type = (0b00000011); // FOUR
    }

    if (satellite_data_type_input == "64_bit")
    {
      satellite_data_type = (0b00000100); // FIVE
    }

    if (satellite_data_type_input == "512_bit")
    {
      satellite_data_type = (0b00000101); // SIX
    }

    if (satellite_data_type_input == "mbit")
    {
      satellite_data_type = (0b00000110); // SEVEN
    }

    if (satellite_data_type_input == "64_mbit")
    {
      satellite_data_type = (0b00000111); // EIGHT
    }

    if (satellite_data_type_input == "512_mbit")
    {
      satellite_data_type = (0b00001000); // NINE
    }

    if (satellite_data_type_input == "integer_vector")
    {
      satellite_data_type = (0b00001001); // TEN
    }

    if (satellite_data_type_input == "unsigned_integer_vector")
    {
      satellite_data_type = (0b00001010); // ELEVEN
    }

    if (satellite_data_type_input == "satellite_string_vector")
    {
      satellite_data_type = (0b00001011);  // TWELVE
    }

    if (satellite_data_type_input == "bit_vector")
    {
      satellite_data_type = (0b00001100); // THIRTEEN
    }

    if (satellite_data_type_input == "64_bit_vector")
    {
      satellite_data_type = (0b00001101); // FOURTEEN
    }

    if (satellite_data_type_input == "512_bit_vector")
    {
      satellite_data_type = (0b00001110); // FIFTEEN
    }

    if (satellite_data_type_input == "mbit_vector")
    {
      satellite_data_type = (0b000010001); // SIXTEEN
    }

    if (satellite_data_type_input == "64_mbit_vector")
    {
      satellite_data_type = (0b00010010); // SEVENTEEN
    }

    if (satellite_data_type_input == "512_mbit_vector")
    {
      satellite_data_type = (0b00010011); // EIGHTEEN
    }
  }

  void echo_data_type()
  {
    if (satellite_data_type == 0b00000000)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"integer\"" << endl;
    }

    if (satellite_data_type == 0b00000001)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"unsigned_integer\"" << endl;
    }

    if (satellite_data_type == 0b00000011)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"bit\"" << endl;
    }

    if (satellite_data_type == 0b00000100)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"64_bit\"" << endl;
    }

    if (satellite_data_type == 0b00000101)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"512_bit\"" << endl;
    }

    if (satellite_data_type == 0b00000110)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"mbit\"" << endl;
    }

    if (satellite_data_type == 0b00000111)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"64_mbit\"" << endl;
    }

    if (satellite_data_type == 0b00001000)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"512_mbit\"" << endl;
    }

    if (satellite_data_type == 0b00001001)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"integer_vector\"" << endl;
    }

    if (satellite_data_type == 0b00001010)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"unsigned_integer_vector\"" << endl;
    }

    if (satellite_data_type == 0b00001011)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"satellite_string_vector\"" << endl;
    }

    if (satellite_data_type == 0b00001100)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"bit_vector\"" << endl;
    }

    if (satellite_data_type == 0b00001101)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"64_bit_vector\"" << endl;
    }

    if (satellite_data_type == 0b00001110)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"512_bit_vector\"" << endl;
    }

    if (satellite_data_type == 0b000010001)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"mbit_vector\"" << endl;
    }

    if (satellite_data_type == 0b00010010)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"64_mbit_vector\"" << endl;
    }

    if (satellite_data_type == 0b00010011)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"512_mbit_vector\"" << endl;
    }

    if (satellite_data_type == 0b00000010)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"satellite_string\"" << endl;
    }

    if (satellite_data_type == 0b00000010)
    {
      cout << "  [SAT-console] " << "VAR satellite_data_name = " << satellite_data_name << " AND IS OF TYPE: " << "\"satellite_string\"" << endl;
    }
  }

  void generate_system_name(string name_generator_input)
  {
    unsigned long long int chars_needed_in_name = 0;

    if (name_generator_input.size() < 7)
    {
      chars_needed_in_name = 7 - name_generator_input.size();

      while (chars_needed_in_name > 0)
      {
        name_generator_input.append("c");
        chars_needed_in_name = chars_needed_in_name - 1;
      }

      system_name = name_generator_input;

    } else {
      system_name = name_generator_input.substr(0, 6);
    }
  }

public:
  void call_set_data_name(string var_data_name)
  {
    set_data_name(var_data_name);
  }
  void call_set_satellite_data_type(string satellite_data_type)
  {
    set_satellite_data_type(satellite_data_type);
  }

  void call_echo_data_type()
  {
    echo_data_type();
  }

  void call_generate_system_name(string name_generator_input)
  {
    generate_system_name(name_generator_input);
  }
};

class satellite_system
{
private:
  string username = "void";
  string system_prompt_console = "  [SAT-console] ";
  string system_prompt_interpreter = "  [SAT-interpreter] ";
  string system_prompt_compiler = "  [SAT-compiler] ";
  string system_prompt_vm = "  [SAT-virtual_machine] ";

  string last_input = "void";
  vector<string> input_library;

  unsigned long long int current_system_state = 0;
  // 0 = CONSOLE
  // 1 = interpreter
  // 2= compiler
  // 3 = virtual_machine

  bool file_is_invalid = true;

  vector<string> bytecode_load;
  string my_fstream_register = "";

  satellite_data register_one;
  satellite_data register_two;
  satellite_data register_three;
  satellite_data register_four;
  satellite_data register_five;
  satellite_data register_six;
  satellite_data register_seven;
  satellite_data register_eight;
  satellite_data register_nine;
  satellite_data register_ten;
  satellite_data register_eleven;
  satellite_data register_twelve;
  satellite_data register_thirteen;
  satellite_data register_fourteen;
  satellite_data register_fifteen;
  satellite_data register_sixteen;

  vector<satellite_data> satellite_data_vector;

  void collect_input(unsigned long long int points_to_prompt)
  {
    if (points_to_prompt == 0)
    {
      cout << system_prompt_console << ">>";
      getline(cin, last_input);
    }

    if (points_to_prompt == 1)
    {
      cout << system_prompt_interpreter << ">>";
      getline(cin, last_input);
    }

    if (points_to_prompt == 2)
    {
      cout << system_prompt_compiler << ">>";
      getline(cin, last_input);
    }

    if (points_to_prompt == 3)
    {
      cout << system_prompt_vm << ">>";
      getline(cin, last_input);
    }

    input_library.push_back(last_input);
  }

  void set_username(string username_input)
  {
    username = username_input;
  }

  void display_message(string display_input, unsigned long long int display_integer)
  {
    if (display_input == "entrance-console")
    {
      display_integer = 9;
      cout << "------------------------------------------------------------------------\n";
      cout << "\t\t- - - CONSOLE - - -\n";
      cout << "------------------------------------------------------------------------\n";
    }
    if (display_input == "divider")
    {
      display_integer = 9;
      cout << "------------------------------------------------------------------------\n";
    }
    if (display_integer == 0)
    {
      cout << system_prompt_console << display_input << endl;
    }

    if (display_integer == 1)
    {
      cout << system_prompt_interpreter << display_input << endl;
    }

    if (display_integer == 2)
    {
      cout << system_prompt_compiler << display_input << endl;
    }

    if (display_integer == 3)
    {
      cout << system_prompt_vm << display_input << endl;
    }
  }

  void load_virtual_machine()
  {
    fstream virtual_machine_fstream;

    virtual_machine_fstream.open(last_input);

    unsigned long long int bytecode_line_count = 0;

    while (getline(virtual_machine_fstream, my_fstream_register))
    {
      file_is_invalid = false;
      bytecode_load.push_back(my_fstream_register);

      bytecode_line_count = bytecode_line_count + 1;

    }

    if (file_is_invalid == true)
    {
      call_display_message("divider", 3);
      call_display_message("\t\t- - - ERROR - - -", 3);
      call_display_message("UNABLE TO OPEN FILE!", 3);
      call_display_message("divider", 3);

      call_display_message("ENTER ANOTHER FILE NAME BELOW!", 3);

      call_collect_input(3);
    }

    string my_message = ("SUCCESSFULLY LOADED" + to_string(bytecode_line_count) + "LINES!");

    display_message(my_message, 3);
    bytecode_load.push_back(my_fstream_register);

  }

  void set_system_state(unsigned long long int system_state_input)
  {
    current_system_state = system_state_input;
  }

  void load_program()
  {
    vector<string> commands_breakdown;
    vector<bitset<64>> datatypes_for_breakdown;

    string my_breakdown_line_pass = "";

    unsigned long long int load_pointer_integer = 0;
    unsigned long long int breakdown_integer_pointer = 0;

    unsigned long long int points_to_bytecode_chunk = 7;

    unsigned long long int points_to_line = 0;
    unsigned long long int size_of_program = 0;

    string local_new_data_name = "";

    bool points_to_name = false;
    bool theres_more_bytecode = true;

    while (theres_more_bytecode == true)
    {
      size_of_program = bytecode_load.size();
      // A NAME IN SATELLITE TAKES UP 64 - 8 BITS, OR 56 BITS ARE LEFT FOR THE NAME;

      satellite_data new_satellite_data;

      if (points_to_name == false)
      {
        if (bytecode_load[points_to_bytecode_chunk] == string(0b00000000))
        {
          new_satellite_data.call_set_satellite_data_type("integer");
          points_to_name = true;
        }
      }

      if (points_to_name == true)
      {
        points_to_name = false;
        local_new_data_name = string(bytecode_load[points_to_line].substr(points_to_bytecode_chunk, 63));

        new_satellite_data.call_set_data_name(local_new_data_name);
      }

      if (bytecode_load[points_to_bytecode_chunk] == string(0b00000000))
      {
        new_satellite_data.call_set_satellite_data_type("integer");
        points_to_name = true;   bytecode_load[points_to_line];
        /* A SATELLITE BYTE IS 8 BITS, NO CHANGE THERE;
        THERE ARE 8 BYTES PER LINE IN A FILE CONTAINING BYTECODE
        THE FIRST 8 BYTES OF A GIVEN */
        // this is an integer, the next 64-bits are that integer
        if (bytecode_load[points_to_bytecode_chunk] == string(0b00000000))
        {
          // keep going
        }

      }

      /* THIS CODE LOOKS INTERESTING!
      commands_breakdown[breakdown_integer_pointer] = bytecode_load[load_pointer_integer];
      my_breakdown_line_pass >> hex >> bytecode_load[load_pointer_integer];

      my_breakdown_line_pass >> hex >> bytecode_load[load_pointer_integer];

      commands_breakdown[breakdown_integer_pointer] >> hex >> my_breakdown_line_pass;

      load_pointer_integer = load_pointer_integer + 1;
      */

    }

    /*
    datatypes = 14;

    signed integer;
    unsigned integer;
    satellite_string;
    vector of integers
    vector of unsigned integers
    vector of strings
    bit
    vector of bits
    64-bits
    512-bits

    advanced datatypes...

    vector of vectors of integers
    vector of vectors of unsigned integers
    vector of vectors of strings
    vector of vectors of bits
    vector of vector of 64-bit datatype
    vector of vector of 512-bit datatype

    */
  }

  void process_input()
  {
    if (last_input == "manual();" || last_input == "MANUAL();" || last_input == "MANUAL()" || last_input == "manual()" || last_input == "manual" || last_input == "MANUAL")
    {
      if (current_system_state == 0)
      {
        call_display_message("divider", 0);
        call_display_message("SATELLITE SYSTEM OPERATIONS MANUAL", 0);
        call_display_message("divider", 0);
      }

      if (current_system_state == 1)
      {
        call_display_message("divider", 1);
        call_display_message("SATELLITE SYSTEM OPERATIONS MANUAL", 1);
        call_display_message("divider", 1);
      }

      if (current_system_state == 2)
      {
        call_display_message("divider", 2);
        call_display_message("SATELLITE SYSTEM OPERATIONS MANUAL", 2);
        call_display_message("divider", 2);
      }

      if (current_system_state == 3)
      {
        call_display_message("divider", 3);
        call_display_message("SATELLITE SYSTEM OPERATIONS MANUAL", 3);
        call_display_message("divider", 3);
      }

      call_display_message("divider", 0);
      call_display_message("THE OPERATIONS MANUAL IS DIVIDED INTO SUBSECTIONS, FOR A SPECIFIC SUBSECTION ENTER \"manual(\"section\");", 0);
      call_display_message("THE AVAILABLE SECTIONS ARE LISTED FOR YOU BELOW...", 0);
      call_display_message("divider", 0);
      call_display_message("\"manual(\"about\");\" - - BRINGS UP MORE INFORMATION ON THIS MANUAL", 0);
      call_display_message("\"manual(\"bytecode\");\" - - HAS SOME BACKGROUND INFORMATION ON BYTECODE", 0);
      call_display_message("\"manual(\"interpreter\"); - - DESCRIBES WHAT AN INTERPRETER IS", 0);
      call_display_message("\"manual(\"satellite\"); - - INFO ON THE SATELLITE SOFTWARE SYSTEM", 0);
      call_display_message("\"manual(\"compiler\"); - - WHAT\'S A COMPILER?", 0);
      call_display_message("\"manual(\"virtual_machine\"); - - DESCRIBES WHAT A VIRTUAL MACHINE IS", 0);
      call_display_message("\"manual(\"source_code\"); - - THE DEFINITION OF SOURCE CODE", 0);
      call_display_message("\"manual(\"why\"); - - REASONS THAT WE STICK WITH THE SATELLITE SYSTEM", 0);
    }
  }

public:

  void call_load_program()
  {
    load_program();
  }

  void call_process_input()
  {
    process_input();
  }

  void call_display_message(string display_input, unsigned long long int display_integer)
  {
    display_message(display_input, display_integer);
  }

  void call_collect_input(unsigned long long int points_to_prompt)
  {
    collect_input(points_to_prompt);
  }

  void call_set_username(string username_input)
  {
    set_username(username_input);
  }

  void greet_user()
  {
    cout << "WELCOME " << username << " TO THE SATELLITE SOCIETY!\n";
  }

  void call_load_virtual_machine()
  {
    load_virtual_machine();
  }

  void call_set_system_state(unsigned long long int system_state_input)
  {
    bool valid_state_input = false;
    if (system_state_input == 0)
    {
      valid_state_input = true;

      set_system_state(0);
    }

    if (system_state_input == 1)
    {
      valid_state_input = true;

      set_system_state(1);
    }

    if (system_state_input == 2)
    {
      valid_state_input = true;

      set_system_state(2);
    }

    if (system_state_input == 3)
    {
      valid_state_input = true;

      set_system_state(3);
    }

    if (valid_state_input == false)
    {
      call_display_message("ERROR!", 0);
      call_display_message("INVALID SYSTEM STATE INPUT!", 0);
    }
  }

};

satellite_system satellite_virtual_machine(satellite_system);
satellite_system satellite_compiler(satellite_system);

#endif
