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
  // Forward declaring type: AssemblyProductAttribute
  class AssemblyProductAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyProductAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyProductAttribute*, "System.Reflection", "AssemblyProductAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyProductAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10402AC
  // [ComVisibleAttribute] Offset: 10402AC
  class AssemblyProductAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String m_product
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_product;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_product;
    }
    // Get instance field reference: private System.String m_product
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_product();
    // public System.Void .ctor(System.String product)
    // Offset: 0x21F2C58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyProductAttribute* New_ctor(::StringW product) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyProductAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyProductAttribute*, creationType>(product)));
    }
  }; // System.Reflection.AssemblyProductAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyProductAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyProductAttributeSizeCheck;
  static_assert(sizeof(AssemblyProductAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyProductAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
