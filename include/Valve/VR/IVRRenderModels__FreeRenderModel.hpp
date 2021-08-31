// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: Valve.VR.IVRRenderModels/Valve.VR._FreeRenderModel
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF3F04
  class IVRRenderModels::_FreeRenderModel : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _FreeRenderModel
    _FreeRenderModel() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D406B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_FreeRenderModel* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_FreeRenderModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_FreeRenderModel*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr pRenderModel)
    // Offset: 0x1D406C4
    void Invoke(System::IntPtr pRenderModel);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pRenderModel, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D40920
    System::IAsyncResult* BeginInvoke(System::IntPtr pRenderModel, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D409AC
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/Valve.VR._FreeRenderModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_FreeRenderModel*, "Valve.VR", "IVRRenderModels/_FreeRenderModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_FreeRenderModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_FreeRenderModel::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRRenderModels::_FreeRenderModel::*)(System::IntPtr)>(&Valve::VR::IVRRenderModels::_FreeRenderModel::Invoke)> {
  static const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_FreeRenderModel*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_FreeRenderModel::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRRenderModels::_FreeRenderModel::*)(System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRRenderModels::_FreeRenderModel::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_FreeRenderModel*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_FreeRenderModel::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRRenderModels::_FreeRenderModel::*)(System::IAsyncResult*)>(&Valve::VR::IVRRenderModels::_FreeRenderModel::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_FreeRenderModel*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
