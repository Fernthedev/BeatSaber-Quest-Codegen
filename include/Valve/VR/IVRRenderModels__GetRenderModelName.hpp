// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRRenderModels/_GetRenderModelName
  // [UnmanagedFunctionPointerAttribute] Offset: DD45CC
  class IVRRenderModels::_GetRenderModelName : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRenderModelName
    _GetRenderModelName() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8BF60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetRenderModelName* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_GetRenderModelName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetRenderModelName*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 unRenderModelIndex, System.Text.StringBuilder pchRenderModelName, System.UInt32 unRenderModelNameLen)
    // Offset: 0x1C8BF70
    uint Invoke(uint unRenderModelIndex, System::Text::StringBuilder* pchRenderModelName, uint unRenderModelNameLen);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unRenderModelIndex, System.Text.StringBuilder pchRenderModelName, System.UInt32 unRenderModelNameLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8C210
    System::IAsyncResult* BeginInvoke(uint unRenderModelIndex, System::Text::StringBuilder* pchRenderModelName, uint unRenderModelNameLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C8C2C0
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_GetRenderModelName
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetRenderModelName*, "Valve.VR", "IVRRenderModels/_GetRenderModelName");
// Writing includes for template specializations
#include "System/Text/StringBuilder.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetRenderModelName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetRenderModelName::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRRenderModels::_GetRenderModelName::*)(uint, System::Text::StringBuilder*, uint)>(&Valve::VR::IVRRenderModels::_GetRenderModelName::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetRenderModelName*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetRenderModelName::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRRenderModels::_GetRenderModelName::*)(uint, System::Text::StringBuilder*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRRenderModels::_GetRenderModelName::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetRenderModelName*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetRenderModelName::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRRenderModels::_GetRenderModelName::*)(System::IAsyncResult*)>(&Valve::VR::IVRRenderModels::_GetRenderModelName::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetRenderModelName*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
