// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.IAsyncLocal
  class IAsyncLocal {
    public:
    // Creating value type constructor for type: IAsyncLocal
    IAsyncLocal() noexcept {}
    // public System.Void OnValueChanged(System.Object previousValue, System.Object currentValue, System.Boolean contextChanged)
    // Offset: 0xFFFFFFFF
    void OnValueChanged(::Il2CppObject* previousValue, ::Il2CppObject* currentValue, bool contextChanged);
  }; // System.Threading.IAsyncLocal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::IAsyncLocal*, "System.Threading", "IAsyncLocal");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Threading::IAsyncLocal::OnValueChanged
// Il2CppName: OnValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::IAsyncLocal::*)(::Il2CppObject*, ::Il2CppObject*, bool)>(&System::Threading::IAsyncLocal::OnValueChanged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::IAsyncLocal*), "OnValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
