// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ICloneable
  // [ComVisibleAttribute] Offset: D7A7E8
  class ICloneable {
    public:
    // Creating value type constructor for type: ICloneable
    ICloneable() noexcept {}
    // public System.Object Clone()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Clone();
  }; // System.ICloneable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ICloneable*, "System", "ICloneable");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::ICloneable::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ICloneable::*)()>(&System::ICloneable::Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ICloneable*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
