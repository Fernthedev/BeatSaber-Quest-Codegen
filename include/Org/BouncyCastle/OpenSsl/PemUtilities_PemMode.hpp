// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.OpenSsl.PemUtilities
#include "Org/BouncyCastle/OpenSsl/PemUtilities.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct PemUtilities::PemMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PemMode
    constexpr PemMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode CBC
    static constexpr const int CBC = 0;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode CBC
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemMode _get_CBC();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode CBC
    static void _set_CBC(Org::BouncyCastle::OpenSsl::PemUtilities::PemMode value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode CFB
    static constexpr const int CFB = 1;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode CFB
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemMode _get_CFB();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode CFB
    static void _set_CFB(Org::BouncyCastle::OpenSsl::PemUtilities::PemMode value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode ECB
    static constexpr const int ECB = 2;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode ECB
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemMode _get_ECB();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode ECB
    static void _set_ECB(Org::BouncyCastle::OpenSsl::PemUtilities::PemMode value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode OFB
    static constexpr const int OFB = 3;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode OFB
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemMode _get_OFB();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode OFB
    static void _set_OFB(Org::BouncyCastle::OpenSsl::PemUtilities::PemMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Org.BouncyCastle.OpenSsl.PemUtilities/Org.BouncyCastle.OpenSsl.PemMode
  #pragma pack(pop)
  static check_size<sizeof(PemUtilities::PemMode), 0 + sizeof(int)> __Org_BouncyCastle_OpenSsl_PemUtilities_PemModeSizeCheck;
  static_assert(sizeof(PemUtilities::PemMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::OpenSsl::PemUtilities::PemMode, "Org.BouncyCastle.OpenSsl", "PemUtilities/PemMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
