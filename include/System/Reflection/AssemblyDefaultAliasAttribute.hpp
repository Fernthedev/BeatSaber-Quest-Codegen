// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyDefaultAliasAttribute
  class AssemblyDefaultAliasAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyDefaultAliasAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDefaultAliasAttribute*, "System.Reflection", "AssemblyDefaultAliasAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyDefaultAliasAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1040418
  // [AttributeUsageAttribute] Offset: 1040418
  class AssemblyDefaultAliasAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String m_defaultAlias
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_defaultAlias;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_defaultAlias;
    }
    // Get instance field reference: private System.String m_defaultAlias
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_defaultAlias();
    // public System.Void .ctor(System.String defaultAlias)
    // Offset: 0x21F1A10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyDefaultAliasAttribute* New_ctor(::StringW defaultAlias) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyDefaultAliasAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyDefaultAliasAttribute*, creationType>(defaultAlias)));
    }
  }; // System.Reflection.AssemblyDefaultAliasAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyDefaultAliasAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyDefaultAliasAttributeSizeCheck;
  static_assert(sizeof(AssemblyDefaultAliasAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyDefaultAliasAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
