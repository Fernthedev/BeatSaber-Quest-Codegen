// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.CustomConstantAttribute
#include "System/Runtime/CompilerServices/CustomConstantAttribute.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.DateTimeConstantAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9DDC8
  // [AttributeUsageAttribute] Offset: D9DDC8
  class DateTimeConstantAttribute : public System::Runtime::CompilerServices::CustomConstantAttribute {
    public:
    // private System.DateTime date
    // Size: 0x8
    // Offset: 0x10
    System::DateTime date;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: DateTimeConstantAttribute
    DateTimeConstantAttribute(System::DateTime date_ = {}) noexcept : date{date_} {}
    // Creating conversion operator: operator System::DateTime
    constexpr operator System::DateTime() const noexcept {
      return date;
    }
    // Get instance field: private System.DateTime date
    System::DateTime _get_date();
    // Set instance field: private System.DateTime date
    void _set_date(System::DateTime value);
    // public override System.Object get_Value()
    // Offset: 0x1486C9C
    // Implemented from: System.Runtime.CompilerServices.CustomConstantAttribute
    // Base method: System.Object CustomConstantAttribute::get_Value()
    ::Il2CppObject* get_Value();
  }; // System.Runtime.CompilerServices.DateTimeConstantAttribute
  #pragma pack(pop)
  static check_size<sizeof(DateTimeConstantAttribute), 16 + sizeof(System::DateTime)> __System_Runtime_CompilerServices_DateTimeConstantAttributeSizeCheck;
  static_assert(sizeof(DateTimeConstantAttribute) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DateTimeConstantAttribute*, "System.Runtime.CompilerServices", "DateTimeConstantAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::DateTimeConstantAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::CompilerServices::DateTimeConstantAttribute::*)()>(&System::Runtime::CompilerServices::DateTimeConstantAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::DateTimeConstantAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
