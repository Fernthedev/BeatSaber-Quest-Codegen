// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVROnCompleteListener
  class OVROnCompleteListener : public UnityEngine::AndroidJavaProxy {
    public:
    // Creating value type constructor for type: OVROnCompleteListener
    OVROnCompleteListener() noexcept {}
    // public System.Void onSuccess()
    // Offset: 0xFFFFFFFF
    void onSuccess();
    // public System.Void onFailure()
    // Offset: 0xFFFFFFFF
    void onFailure();
    // public System.Void .ctor()
    // Offset: 0x12F2BAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVROnCompleteListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVROnCompleteListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVROnCompleteListener*, creationType>()));
    }
  }; // OVROnCompleteListener
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROnCompleteListener*, "", "OVROnCompleteListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVROnCompleteListener::onSuccess
// Il2CppName: onSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROnCompleteListener::*)()>(&GlobalNamespace::OVROnCompleteListener::onSuccess)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROnCompleteListener*), "onSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROnCompleteListener::onFailure
// Il2CppName: onFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROnCompleteListener::*)()>(&GlobalNamespace::OVROnCompleteListener::onFailure)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROnCompleteListener*), "onFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROnCompleteListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
