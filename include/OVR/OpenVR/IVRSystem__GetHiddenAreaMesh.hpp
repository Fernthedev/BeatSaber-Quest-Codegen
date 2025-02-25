// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HiddenAreaMesh_t
  struct HiddenAreaMesh_t;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: EHiddenAreaMeshType
  struct EHiddenAreaMeshType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetHiddenAreaMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF2CC0
  class IVRSystem::_GetHiddenAreaMesh : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetHiddenAreaMesh
    _GetHiddenAreaMesh() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20F74A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetHiddenAreaMesh* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetHiddenAreaMesh*, creationType>(object, method)));
    }
    // public OVR.OpenVR.HiddenAreaMesh_t Invoke(OVR.OpenVR.EVREye eEye, OVR.OpenVR.EHiddenAreaMeshType type)
    // Offset: 0x20F74B8
    OVR::OpenVR::HiddenAreaMesh_t Invoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, OVR.OpenVR.EHiddenAreaMeshType type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20F7754
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HiddenAreaMesh_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x20F77FC
    OVR::OpenVR::HiddenAreaMesh_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetHiddenAreaMesh
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh*, "OVR.OpenVR", "IVRSystem/_GetHiddenAreaMesh");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HiddenAreaMesh_t (OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::*)(OVR::OpenVR::EVREye, OVR::OpenVR::EHiddenAreaMeshType)>(&OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVREye")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EHiddenAreaMeshType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, type});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::*)(OVR::OpenVR::EVREye, OVR::OpenVR::EHiddenAreaMeshType, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVREye")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EHiddenAreaMeshType")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, type, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HiddenAreaMesh_t (OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
