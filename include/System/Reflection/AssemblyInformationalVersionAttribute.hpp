// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Autogenerated type: System.Reflection.AssemblyInformationalVersionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0B08
  // [AttributeUsageAttribute] Offset: DA0B08
  class AssemblyInformationalVersionAttribute : public System::Attribute {
    public:
    // private System.String m_informationalVersion
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_informationalVersion;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyInformationalVersionAttribute
    AssemblyInformationalVersionAttribute(::Il2CppString* m_informationalVersion_ = {}) noexcept : m_informationalVersion{m_informationalVersion_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_informationalVersion;
    }
    // Get instance field reference: private System.String m_informationalVersion
    ::Il2CppString*& dyn_m_informationalVersion();
    // public System.Void .ctor(System.String informationalVersion)
    // Offset: 0x1D15084
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyInformationalVersionAttribute* New_ctor(::Il2CppString* informationalVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyInformationalVersionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyInformationalVersionAttribute*, creationType>(informationalVersion)));
    }
  }; // System.Reflection.AssemblyInformationalVersionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyInformationalVersionAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyInformationalVersionAttributeSizeCheck;
  static_assert(sizeof(AssemblyInformationalVersionAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyInformationalVersionAttribute*, "System.Reflection", "AssemblyInformationalVersionAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyInformationalVersionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
