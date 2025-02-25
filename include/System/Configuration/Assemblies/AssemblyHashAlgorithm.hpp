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
// Type namespace: System.Configuration.Assemblies
namespace System::Configuration::Assemblies {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.Assemblies.AssemblyHashAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0644
  struct AssemblyHashAlgorithm/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AssemblyHashAlgorithm
    constexpr AssemblyHashAlgorithm(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Configuration.Assemblies.AssemblyHashAlgorithm None
    static constexpr const int None = 0;
    // Get static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm None
    static System::Configuration::Assemblies::AssemblyHashAlgorithm _get_None();
    // Set static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm None
    static void _set_None(System::Configuration::Assemblies::AssemblyHashAlgorithm value);
    // static field const value: static public System.Configuration.Assemblies.AssemblyHashAlgorithm MD5
    static constexpr const int MD5 = 32771;
    // Get static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm MD5
    static System::Configuration::Assemblies::AssemblyHashAlgorithm _get_MD5();
    // Set static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm MD5
    static void _set_MD5(System::Configuration::Assemblies::AssemblyHashAlgorithm value);
    // static field const value: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA1
    static constexpr const int SHA1 = 32772;
    // Get static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA1
    static System::Configuration::Assemblies::AssemblyHashAlgorithm _get_SHA1();
    // Set static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA1
    static void _set_SHA1(System::Configuration::Assemblies::AssemblyHashAlgorithm value);
    // static field const value: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA256
    static constexpr const int SHA256 = 32780;
    // Get static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA256
    static System::Configuration::Assemblies::AssemblyHashAlgorithm _get_SHA256();
    // Set static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA256
    static void _set_SHA256(System::Configuration::Assemblies::AssemblyHashAlgorithm value);
    // static field const value: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA384
    static constexpr const int SHA384 = 32781;
    // Get static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA384
    static System::Configuration::Assemblies::AssemblyHashAlgorithm _get_SHA384();
    // Set static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA384
    static void _set_SHA384(System::Configuration::Assemblies::AssemblyHashAlgorithm value);
    // static field const value: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA512
    static constexpr const int SHA512 = 32782;
    // Get static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA512
    static System::Configuration::Assemblies::AssemblyHashAlgorithm _get_SHA512();
    // Set static field: static public System.Configuration.Assemblies.AssemblyHashAlgorithm SHA512
    static void _set_SHA512(System::Configuration::Assemblies::AssemblyHashAlgorithm value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Configuration.Assemblies.AssemblyHashAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(AssemblyHashAlgorithm), 0 + sizeof(int)> __System_Configuration_Assemblies_AssemblyHashAlgorithmSizeCheck;
  static_assert(sizeof(AssemblyHashAlgorithm) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::Assemblies::AssemblyHashAlgorithm, "System.Configuration.Assemblies", "AssemblyHashAlgorithm");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
