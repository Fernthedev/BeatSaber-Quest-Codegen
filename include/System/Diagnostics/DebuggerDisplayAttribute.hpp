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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: DebuggerDisplayAttribute
  class DebuggerDisplayAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::DebuggerDisplayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerDisplayAttribute*, "System.Diagnostics", "DebuggerDisplayAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggerDisplayAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1046B70
  // [AttributeUsageAttribute] Offset: 1046B70
  class DebuggerDisplayAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String value
    // Size: 0x8
    // Offset: 0x18
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String type
    // Size: 0x8
    // Offset: 0x20
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // Get instance field reference: private System.String type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_type();
    // public System.Void .ctor(System.String value)
    // Offset: 0x1960B9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggerDisplayAttribute* New_ctor(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::DebuggerDisplayAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggerDisplayAttribute*, creationType>(value)));
    }
  }; // System.Diagnostics.DebuggerDisplayAttribute
  #pragma pack(pop)
  static check_size<sizeof(DebuggerDisplayAttribute), 32 + sizeof(::StringW)> __System_Diagnostics_DebuggerDisplayAttributeSizeCheck;
  static_assert(sizeof(DebuggerDisplayAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::DebuggerDisplayAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
