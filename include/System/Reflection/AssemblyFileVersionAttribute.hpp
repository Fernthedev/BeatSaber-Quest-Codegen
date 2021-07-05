// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyFileVersionAttribute
  // [ComVisibleAttribute] Offset: D7B958
  // [AttributeUsageAttribute] Offset: D7B958
  class AssemblyFileVersionAttribute : public System::Attribute {
    public:
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyFileVersionAttribute
    AssemblyFileVersionAttribute(::Il2CppString* version_ = {}) noexcept : version{version_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return version;
    }
    // public System.Void .ctor(System.String version)
    // Offset: 0x1C74584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyFileVersionAttribute* New_ctor(::Il2CppString* version) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyFileVersionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyFileVersionAttribute*, creationType>(version)));
    }
  }; // System.Reflection.AssemblyFileVersionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyFileVersionAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyFileVersionAttributeSizeCheck;
  static_assert(sizeof(AssemblyFileVersionAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyFileVersionAttribute*, "System.Reflection", "AssemblyFileVersionAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyFileVersionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
