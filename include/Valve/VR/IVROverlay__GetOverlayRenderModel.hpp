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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayRenderModel
  // [UnmanagedFunctionPointerAttribute] Offset: DD4130
  class IVROverlay::_GetOverlayRenderModel : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayRenderModel
    _GetOverlayRenderModel() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FC8DA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayRenderModel* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlayRenderModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayRenderModel*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.HmdColor_t pColor, ref Valve.VR.EVROverlayError pError)
    // Offset: 0x1FC8DB8
    uint Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::HmdColor_t& pColor, Valve::VR::EVROverlayError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.HmdColor_t pColor, ref Valve.VR.EVROverlayError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FC908C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::HmdColor_t& pColor, Valve::VR::EVROverlayError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.HmdColor_t pColor, ref Valve.VR.EVROverlayError pError, System.IAsyncResult result)
    // Offset: 0x1FC918C
    uint EndInvoke(Valve::VR::HmdColor_t& pColor, Valve::VR::EVROverlayError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayRenderModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayRenderModel*, "Valve.VR", "IVROverlay/_GetOverlayRenderModel");
// Writing includes for template specializations
#include "System/Text/StringBuilder.hpp"
#include "Valve/VR/HmdColor_t.hpp"
#include "Valve/VR/EVROverlayError.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayRenderModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayRenderModel::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVROverlay::_GetOverlayRenderModel::*)(uint64_t, System::Text::StringBuilder*, uint, Valve::VR::HmdColor_t&, Valve::VR::EVROverlayError&)>(&Valve::VR::IVROverlay::_GetOverlayRenderModel::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayRenderModel*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdColor_t&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVROverlayError&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayRenderModel::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlayRenderModel::*)(uint64_t, System::Text::StringBuilder*, uint, Valve::VR::HmdColor_t&, Valve::VR::EVROverlayError&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlayRenderModel::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayRenderModel*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdColor_t&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVROverlayError&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayRenderModel::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVROverlay::_GetOverlayRenderModel::*)(Valve::VR::HmdColor_t&, Valve::VR::EVROverlayError&, System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlayRenderModel::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayRenderModel*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdColor_t&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVROverlayError&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
