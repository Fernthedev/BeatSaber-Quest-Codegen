// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.IFormattable
  // [ComVisibleAttribute] Offset: D7A88C
  class IFormattable {
    public:
    // Creating value type constructor for type: IFormattable
    IFormattable() noexcept {}
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* formatProvider);
  }; // System.IFormattable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IFormattable*, "System", "IFormattable");
// Writing includes for template specializations
#include "System/IFormatProvider.hpp"
// Writing MetadataGetter for method: System::IFormattable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IFormattable::*)(::Il2CppString*, System::IFormatProvider*)>(&System::IFormattable::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IFormattable*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
