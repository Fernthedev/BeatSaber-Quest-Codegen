// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: EColorSpace
  struct EColorSpace;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayTexture
  // [UnmanagedFunctionPointerAttribute] Offset: DD43B0
  class IVROverlay::_GetOverlayTexture : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayTexture
    _GetOverlayTexture() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FC9BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTexture* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlayTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTexture*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref Valve.VR.ETextureType pAPIType, ref Valve.VR.EColorSpace pColorSpace, ref Valve.VR.VRTextureBounds_t pTextureBounds)
    // Offset: 0x1FC9BF8
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, System::IntPtr& pNativeTextureHandle, System::IntPtr pNativeTextureRef, uint& pWidth, uint& pHeight, uint& pNativeFormat, Valve::VR::ETextureType& pAPIType, Valve::VR::EColorSpace& pColorSpace, Valve::VR::VRTextureBounds_t& pTextureBounds);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref Valve.VR.ETextureType pAPIType, ref Valve.VR.EColorSpace pColorSpace, ref Valve.VR.VRTextureBounds_t pTextureBounds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FC9F1C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::IntPtr& pNativeTextureHandle, System::IntPtr pNativeTextureRef, uint& pWidth, uint& pHeight, uint& pNativeFormat, Valve::VR::ETextureType& pAPIType, Valve::VR::EColorSpace& pColorSpace, Valve::VR::VRTextureBounds_t& pTextureBounds, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.IntPtr pNativeTextureHandle, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref Valve.VR.ETextureType pAPIType, ref Valve.VR.EColorSpace pColorSpace, ref Valve.VR.VRTextureBounds_t pTextureBounds, System.IAsyncResult result)
    // Offset: 0x1FCA0A8
    Valve::VR::EVROverlayError EndInvoke(System::IntPtr& pNativeTextureHandle, uint& pWidth, uint& pHeight, uint& pNativeFormat, Valve::VR::ETextureType& pAPIType, Valve::VR::EColorSpace& pColorSpace, Valve::VR::VRTextureBounds_t& pTextureBounds, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayTexture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayTexture*, "Valve.VR", "IVROverlay/_GetOverlayTexture");
// Writing includes for template specializations
#include "Valve/VR/ETextureType.hpp"
#include "Valve/VR/EColorSpace.hpp"
#include "Valve/VR/VRTextureBounds_t.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexture::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayTexture::*)(uint64_t, System::IntPtr&, System::IntPtr, uint&, uint&, uint&, Valve::VR::ETextureType&, Valve::VR::EColorSpace&, Valve::VR::VRTextureBounds_t&)>(&Valve::VR::IVROverlay::_GetOverlayTexture::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexture*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr&>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::ETextureType&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EColorSpace&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::VRTextureBounds_t&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexture::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlayTexture::*)(uint64_t, System::IntPtr&, System::IntPtr, uint&, uint&, uint&, Valve::VR::ETextureType&, Valve::VR::EColorSpace&, Valve::VR::VRTextureBounds_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlayTexture::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexture*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr&>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::ETextureType&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EColorSpace&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::VRTextureBounds_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexture::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayTexture::*)(System::IntPtr&, uint&, uint&, uint&, Valve::VR::ETextureType&, Valve::VR::EColorSpace&, Valve::VR::VRTextureBounds_t&, System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlayTexture::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexture*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::ETextureType&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EColorSpace&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::VRTextureBounds_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
