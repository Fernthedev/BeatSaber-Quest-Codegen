// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyFilename
  // [UnmanagedFunctionPointerAttribute] Offset: DCE714
  class IVRScreenshots::_GetScreenshotPropertyFilename : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetScreenshotPropertyFilename
    _GetScreenshotPropertyFilename() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20A6E84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_GetScreenshotPropertyFilename* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_GetScreenshotPropertyFilename*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0x20A6E94
    uint Invoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, OVR::OpenVR::EVRScreenshotError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref OVR.OpenVR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20A716C
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, OVR::OpenVR::EVRScreenshotError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x20A7258
    uint EndInvoke(OVR::OpenVR::EVRScreenshotError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyFilename
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyFilename");
// Writing includes for template specializations
#include "OVR/OpenVR/EVRScreenshotPropertyFilenames.hpp"
#include "System/Text/StringBuilder.hpp"
#include "OVR/OpenVR/EVRScreenshotError.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(uint, OVR::OpenVR::EVRScreenshotPropertyFilenames, System::Text::StringBuilder*, uint, OVR::OpenVR::EVRScreenshotError&)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRScreenshotPropertyFilenames>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRScreenshotError&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(uint, OVR::OpenVR::EVRScreenshotPropertyFilenames, System::Text::StringBuilder*, uint, OVR::OpenVR::EVRScreenshotError&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRScreenshotPropertyFilenames>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRScreenshotError&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(OVR::OpenVR::EVRScreenshotError&, System::IAsyncResult*)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRScreenshotError&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
