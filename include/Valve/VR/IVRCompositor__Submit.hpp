// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: Texture_t
  struct Texture_t;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
  // Forward declaring type: EVRSubmitFlags
  struct EVRSubmitFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRCompositor::_Submit);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRCompositor::_Submit*, "Valve.VR", "IVRCompositor/_Submit");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._Submit
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 109F96C
  class IVRCompositor::_Submit : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x26BED08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_Submit* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRCompositor::_Submit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_Submit*, creationType>(object, method)));
    }
    // public Valve.VR.EVRCompositorError Invoke(Valve.VR.EVREye eEye, ref Valve.VR.Texture_t pTexture, ref Valve.VR.VRTextureBounds_t pBounds, Valve.VR.EVRSubmitFlags nSubmitFlags)
    // Offset: 0x26BED18
    ::Valve::VR::EVRCompositorError Invoke(::Valve::VR::EVREye eEye, ByRef<::Valve::VR::Texture_t> pTexture, ByRef<::Valve::VR::VRTextureBounds_t> pBounds, ::Valve::VR::EVRSubmitFlags nSubmitFlags);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, ref Valve.VR.Texture_t pTexture, ref Valve.VR.VRTextureBounds_t pBounds, Valve.VR.EVRSubmitFlags nSubmitFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x26BEFF0
    ::System::IAsyncResult* BeginInvoke(::Valve::VR::EVREye eEye, ByRef<::Valve::VR::Texture_t> pTexture, ByRef<::Valve::VR::VRTextureBounds_t> pBounds, ::Valve::VR::EVRSubmitFlags nSubmitFlags, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(ref Valve.VR.Texture_t pTexture, ref Valve.VR.VRTextureBounds_t pBounds, System.IAsyncResult result)
    // Offset: 0x26BF0E0
    ::Valve::VR::EVRCompositorError EndInvoke(ByRef<::Valve::VR::Texture_t> pTexture, ByRef<::Valve::VR::VRTextureBounds_t> pBounds, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._Submit
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_Submit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_Submit::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_Submit::*)(::Valve::VR::EVREye, ByRef<::Valve::VR::Texture_t>, ByRef<::Valve::VR::VRTextureBounds_t>, ::Valve::VR::EVRSubmitFlags)>(&Valve::VR::IVRCompositor::_Submit::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("Valve.VR", "Texture_t")->this_arg;
    static auto* pBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* nSubmitFlags = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSubmitFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_Submit*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pTexture, pBounds, nSubmitFlags});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_Submit::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRCompositor::_Submit::*)(::Valve::VR::EVREye, ByRef<::Valve::VR::Texture_t>, ByRef<::Valve::VR::VRTextureBounds_t>, ::Valve::VR::EVRSubmitFlags, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_Submit::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("Valve.VR", "Texture_t")->this_arg;
    static auto* pBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* nSubmitFlags = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSubmitFlags")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_Submit*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pTexture, pBounds, nSubmitFlags, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_Submit::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_Submit::*)(ByRef<::Valve::VR::Texture_t>, ByRef<::Valve::VR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_Submit::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("Valve.VR", "Texture_t")->this_arg;
    static auto* pBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_Submit*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTexture, pBounds, result});
  }
};
