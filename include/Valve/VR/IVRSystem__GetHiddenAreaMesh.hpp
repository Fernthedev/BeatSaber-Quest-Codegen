// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetHiddenAreaMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF7DBC
  class IVRSystem::_GetHiddenAreaMesh : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetHiddenAreaMesh
    _GetHiddenAreaMesh() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D4F7DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetHiddenAreaMesh* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetHiddenAreaMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetHiddenAreaMesh*, creationType>(object, method)));
    }
    // public Valve.VR.HiddenAreaMesh_t Invoke(Valve.VR.EVREye eEye, Valve.VR.EHiddenAreaMeshType type)
    // Offset: 0x1D4F7EC
    Valve::VR::HiddenAreaMesh_t Invoke(Valve::VR::EVREye eEye, Valve::VR::EHiddenAreaMeshType type);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, Valve.VR.EHiddenAreaMeshType type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D4FA88
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, Valve::VR::EHiddenAreaMeshType type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HiddenAreaMesh_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D4FB30
    Valve::VR::HiddenAreaMesh_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetHiddenAreaMesh
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetHiddenAreaMesh*, "Valve.VR", "IVRSystem/_GetHiddenAreaMesh");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetHiddenAreaMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetHiddenAreaMesh::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HiddenAreaMesh_t (Valve::VR::IVRSystem::_GetHiddenAreaMesh::*)(Valve::VR::EVREye, Valve::VR::EHiddenAreaMeshType)>(&Valve::VR::IVRSystem::_GetHiddenAreaMesh::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EHiddenAreaMeshType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetHiddenAreaMesh*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, type});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetHiddenAreaMesh::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetHiddenAreaMesh::*)(Valve::VR::EVREye, Valve::VR::EHiddenAreaMeshType, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetHiddenAreaMesh::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EHiddenAreaMeshType")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetHiddenAreaMesh*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, type, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetHiddenAreaMesh::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HiddenAreaMesh_t (Valve::VR::IVRSystem::_GetHiddenAreaMesh::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetHiddenAreaMesh::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetHiddenAreaMesh*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
