// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.IDeserializationCallback
  // [ComVisibleAttribute] Offset: D7DC94
  class IDeserializationCallback {
    public:
    // Creating value type constructor for type: IDeserializationCallback
    IDeserializationCallback() noexcept {}
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0xFFFFFFFF
    void OnDeserialization(::Il2CppObject* sender);
  }; // System.Runtime.Serialization.IDeserializationCallback
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::IDeserializationCallback*, "System.Runtime.Serialization", "IDeserializationCallback");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Runtime::Serialization::IDeserializationCallback::OnDeserialization
// Il2CppName: OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::IDeserializationCallback::*)(::Il2CppObject*)>(&System::Runtime::Serialization::IDeserializationCallback::OnDeserialization)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IDeserializationCallback*), "OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
