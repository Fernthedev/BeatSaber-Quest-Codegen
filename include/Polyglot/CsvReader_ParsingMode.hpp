// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.CsvReader
#include "Polyglot/CsvReader.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.CsvReader/Polyglot.ParsingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct CsvReader::ParsingMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ParsingMode
    constexpr ParsingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Polyglot.CsvReader/Polyglot.ParsingMode None
    static constexpr const int None = 0;
    // Get static field: static public Polyglot.CsvReader/Polyglot.ParsingMode None
    static Polyglot::CsvReader::ParsingMode _get_None();
    // Set static field: static public Polyglot.CsvReader/Polyglot.ParsingMode None
    static void _set_None(Polyglot::CsvReader::ParsingMode value);
    // static field const value: static public Polyglot.CsvReader/Polyglot.ParsingMode OutQuote
    static constexpr const int OutQuote = 1;
    // Get static field: static public Polyglot.CsvReader/Polyglot.ParsingMode OutQuote
    static Polyglot::CsvReader::ParsingMode _get_OutQuote();
    // Set static field: static public Polyglot.CsvReader/Polyglot.ParsingMode OutQuote
    static void _set_OutQuote(Polyglot::CsvReader::ParsingMode value);
    // static field const value: static public Polyglot.CsvReader/Polyglot.ParsingMode InQuote
    static constexpr const int InQuote = 2;
    // Get static field: static public Polyglot.CsvReader/Polyglot.ParsingMode InQuote
    static Polyglot::CsvReader::ParsingMode _get_InQuote();
    // Set static field: static public Polyglot.CsvReader/Polyglot.ParsingMode InQuote
    static void _set_InQuote(Polyglot::CsvReader::ParsingMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Polyglot.CsvReader/Polyglot.ParsingMode
  #pragma pack(pop)
  static check_size<sizeof(CsvReader::ParsingMode), 0 + sizeof(int)> __Polyglot_CsvReader_ParsingModeSizeCheck;
  static_assert(sizeof(CsvReader::ParsingMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::CsvReader::ParsingMode, "Polyglot", "CsvReader/ParsingMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
