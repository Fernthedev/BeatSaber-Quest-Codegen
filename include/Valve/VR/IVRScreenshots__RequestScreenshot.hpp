// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
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
  // Autogenerated type: Valve.VR.IVRScreenshots/_RequestScreenshot
  // [UnmanagedFunctionPointerAttribute] Offset: DD47C0
  class IVRScreenshots::_RequestScreenshot : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _RequestScreenshot
    _RequestScreenshot() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8F658
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_RequestScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRScreenshots::_RequestScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_RequestScreenshot*, creationType>(object, method)));
    }
    // public Valve.VR.EVRScreenshotError Invoke(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x1C8F668
    Valve::VR::EVRScreenshotError Invoke(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8F910
    System::IAsyncResult* BeginInvoke(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotError EndInvoke(ref System.UInt32 pOutScreenshotHandle, System.IAsyncResult result)
    // Offset: 0x1C8F9D8
    Valve::VR::EVRScreenshotError EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/_RequestScreenshot
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_RequestScreenshot*, "Valve.VR", "IVRScreenshots/_RequestScreenshot");
// Writing includes for template specializations
#include "Valve/VR/EVRScreenshotType.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_RequestScreenshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_RequestScreenshot::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotError (Valve::VR::IVRScreenshots::_RequestScreenshot::*)(uint&, Valve::VR::EVRScreenshotType, ::Il2CppString*, ::Il2CppString*)>(&Valve::VR::IVRScreenshots::_RequestScreenshot::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_RequestScreenshot*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRScreenshotType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_RequestScreenshot::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRScreenshots::_RequestScreenshot::*)(uint&, Valve::VR::EVRScreenshotType, ::Il2CppString*, ::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRScreenshots::_RequestScreenshot::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_RequestScreenshot*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRScreenshotType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_RequestScreenshot::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotError (Valve::VR::IVRScreenshots::_RequestScreenshot::*)(uint&, System::IAsyncResult*)>(&Valve::VR::IVRScreenshots::_RequestScreenshot::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_RequestScreenshot*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
