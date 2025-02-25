// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.Language
  // [TokenAttribute] Offset: FFFFFFFF
  struct Language/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Language
    constexpr Language(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Polyglot.Language English
    static constexpr const int English = 0;
    // Get static field: static public Polyglot.Language English
    static Polyglot::Language _get_English();
    // Set static field: static public Polyglot.Language English
    static void _set_English(Polyglot::Language value);
    // static field const value: static public Polyglot.Language French
    static constexpr const int French = 1;
    // Get static field: static public Polyglot.Language French
    static Polyglot::Language _get_French();
    // Set static field: static public Polyglot.Language French
    static void _set_French(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Spanish
    static constexpr const int Spanish = 2;
    // Get static field: static public Polyglot.Language Spanish
    static Polyglot::Language _get_Spanish();
    // Set static field: static public Polyglot.Language Spanish
    static void _set_Spanish(Polyglot::Language value);
    // static field const value: static public Polyglot.Language German
    static constexpr const int German = 3;
    // Get static field: static public Polyglot.Language German
    static Polyglot::Language _get_German();
    // Set static field: static public Polyglot.Language German
    static void _set_German(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Italian
    static constexpr const int Italian = 4;
    // Get static field: static public Polyglot.Language Italian
    static Polyglot::Language _get_Italian();
    // Set static field: static public Polyglot.Language Italian
    static void _set_Italian(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Portuguese_Brazil
    static constexpr const int Portuguese_Brazil = 5;
    // Get static field: static public Polyglot.Language Portuguese_Brazil
    static Polyglot::Language _get_Portuguese_Brazil();
    // Set static field: static public Polyglot.Language Portuguese_Brazil
    static void _set_Portuguese_Brazil(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Portuguese
    static constexpr const int Portuguese = 6;
    // Get static field: static public Polyglot.Language Portuguese
    static Polyglot::Language _get_Portuguese();
    // Set static field: static public Polyglot.Language Portuguese
    static void _set_Portuguese(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Russian
    static constexpr const int Russian = 7;
    // Get static field: static public Polyglot.Language Russian
    static Polyglot::Language _get_Russian();
    // Set static field: static public Polyglot.Language Russian
    static void _set_Russian(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Greek
    static constexpr const int Greek = 8;
    // Get static field: static public Polyglot.Language Greek
    static Polyglot::Language _get_Greek();
    // Set static field: static public Polyglot.Language Greek
    static void _set_Greek(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Turkish
    static constexpr const int Turkish = 9;
    // Get static field: static public Polyglot.Language Turkish
    static Polyglot::Language _get_Turkish();
    // Set static field: static public Polyglot.Language Turkish
    static void _set_Turkish(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Danish
    static constexpr const int Danish = 10;
    // Get static field: static public Polyglot.Language Danish
    static Polyglot::Language _get_Danish();
    // Set static field: static public Polyglot.Language Danish
    static void _set_Danish(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Norwegian
    static constexpr const int Norwegian = 11;
    // Get static field: static public Polyglot.Language Norwegian
    static Polyglot::Language _get_Norwegian();
    // Set static field: static public Polyglot.Language Norwegian
    static void _set_Norwegian(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Swedish
    static constexpr const int Swedish = 12;
    // Get static field: static public Polyglot.Language Swedish
    static Polyglot::Language _get_Swedish();
    // Set static field: static public Polyglot.Language Swedish
    static void _set_Swedish(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Dutch
    static constexpr const int Dutch = 13;
    // Get static field: static public Polyglot.Language Dutch
    static Polyglot::Language _get_Dutch();
    // Set static field: static public Polyglot.Language Dutch
    static void _set_Dutch(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Polish
    static constexpr const int Polish = 14;
    // Get static field: static public Polyglot.Language Polish
    static Polyglot::Language _get_Polish();
    // Set static field: static public Polyglot.Language Polish
    static void _set_Polish(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Finnish
    static constexpr const int Finnish = 15;
    // Get static field: static public Polyglot.Language Finnish
    static Polyglot::Language _get_Finnish();
    // Set static field: static public Polyglot.Language Finnish
    static void _set_Finnish(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Japanese
    static constexpr const int Japanese = 16;
    // Get static field: static public Polyglot.Language Japanese
    static Polyglot::Language _get_Japanese();
    // Set static field: static public Polyglot.Language Japanese
    static void _set_Japanese(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Simplified_Chinese
    static constexpr const int Simplified_Chinese = 17;
    // Get static field: static public Polyglot.Language Simplified_Chinese
    static Polyglot::Language _get_Simplified_Chinese();
    // Set static field: static public Polyglot.Language Simplified_Chinese
    static void _set_Simplified_Chinese(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Traditional_Chinese
    static constexpr const int Traditional_Chinese = 18;
    // Get static field: static public Polyglot.Language Traditional_Chinese
    static Polyglot::Language _get_Traditional_Chinese();
    // Set static field: static public Polyglot.Language Traditional_Chinese
    static void _set_Traditional_Chinese(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Korean
    static constexpr const int Korean = 19;
    // Get static field: static public Polyglot.Language Korean
    static Polyglot::Language _get_Korean();
    // Set static field: static public Polyglot.Language Korean
    static void _set_Korean(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Czech
    static constexpr const int Czech = 20;
    // Get static field: static public Polyglot.Language Czech
    static Polyglot::Language _get_Czech();
    // Set static field: static public Polyglot.Language Czech
    static void _set_Czech(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Hungarian
    static constexpr const int Hungarian = 21;
    // Get static field: static public Polyglot.Language Hungarian
    static Polyglot::Language _get_Hungarian();
    // Set static field: static public Polyglot.Language Hungarian
    static void _set_Hungarian(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Romanian
    static constexpr const int Romanian = 22;
    // Get static field: static public Polyglot.Language Romanian
    static Polyglot::Language _get_Romanian();
    // Set static field: static public Polyglot.Language Romanian
    static void _set_Romanian(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Thai
    static constexpr const int Thai = 23;
    // Get static field: static public Polyglot.Language Thai
    static Polyglot::Language _get_Thai();
    // Set static field: static public Polyglot.Language Thai
    static void _set_Thai(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Bulgarian
    static constexpr const int Bulgarian = 24;
    // Get static field: static public Polyglot.Language Bulgarian
    static Polyglot::Language _get_Bulgarian();
    // Set static field: static public Polyglot.Language Bulgarian
    static void _set_Bulgarian(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Hebrew
    static constexpr const int Hebrew = 25;
    // Get static field: static public Polyglot.Language Hebrew
    static Polyglot::Language _get_Hebrew();
    // Set static field: static public Polyglot.Language Hebrew
    static void _set_Hebrew(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Arabic
    static constexpr const int Arabic = 26;
    // Get static field: static public Polyglot.Language Arabic
    static Polyglot::Language _get_Arabic();
    // Set static field: static public Polyglot.Language Arabic
    static void _set_Arabic(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Bosnian
    static constexpr const int Bosnian = 27;
    // Get static field: static public Polyglot.Language Bosnian
    static Polyglot::Language _get_Bosnian();
    // Set static field: static public Polyglot.Language Bosnian
    static void _set_Bosnian(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Debug_Keys
    static constexpr const int Debug_Keys = 28;
    // Get static field: static public Polyglot.Language Debug_Keys
    static Polyglot::Language _get_Debug_Keys();
    // Set static field: static public Polyglot.Language Debug_Keys
    static void _set_Debug_Keys(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Debug_English_Reverted
    static constexpr const int Debug_English_Reverted = 29;
    // Get static field: static public Polyglot.Language Debug_English_Reverted
    static Polyglot::Language _get_Debug_English_Reverted();
    // Set static field: static public Polyglot.Language Debug_English_Reverted
    static void _set_Debug_English_Reverted(Polyglot::Language value);
    // static field const value: static public Polyglot.Language Debug_Word_With_Max_Lenght
    static constexpr const int Debug_Word_With_Max_Lenght = 30;
    // Get static field: static public Polyglot.Language Debug_Word_With_Max_Lenght
    static Polyglot::Language _get_Debug_Word_With_Max_Lenght();
    // Set static field: static public Polyglot.Language Debug_Word_With_Max_Lenght
    static void _set_Debug_Word_With_Max_Lenght(Polyglot::Language value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Polyglot.Language
  #pragma pack(pop)
  static check_size<sizeof(Language), 0 + sizeof(int)> __Polyglot_LanguageSizeCheck;
  static_assert(sizeof(Language) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::Language, "Polyglot", "Language");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
