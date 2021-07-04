// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerBuffer
  // [NativeHeaderAttribute] Offset: DDACC0
  class DownloadHandlerBuffer : public UnityEngine::Networking::DownloadHandler {
    public:
    // Creating value type constructor for type: DownloadHandlerBuffer
    DownloadHandlerBuffer() noexcept {}
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerBuffer obj)
    // Offset: 0x23C85B4
    static System::IntPtr Create(UnityEngine::Networking::DownloadHandlerBuffer* obj);
    // private System.Void InternalCreateBuffer()
    // Offset: 0x23C85F4
    void InternalCreateBuffer();
    // private System.Byte[] InternalGetData()
    // Offset: 0x23C86CC
    ::Array<uint8_t>* InternalGetData();
    // public System.Void .ctor()
    // Offset: 0x23C863C
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Void DownloadHandler::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandlerBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::DownloadHandlerBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandlerBuffer*, creationType>()));
    }
    // protected override System.Byte[] GetData()
    // Offset: 0x23C868C
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Byte[] DownloadHandler::GetData()
    ::Array<uint8_t>* GetData();
  }; // UnityEngine.Networking.DownloadHandlerBuffer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerBuffer*, "UnityEngine.Networking", "DownloadHandlerBuffer");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::Networking::DownloadHandlerBuffer*)>(&UnityEngine::Networking::DownloadHandlerBuffer::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerBuffer*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Networking::DownloadHandlerBuffer*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::InternalCreateBuffer
// Il2CppName: InternalCreateBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::InternalCreateBuffer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerBuffer*), "InternalCreateBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::InternalGetData
// Il2CppName: InternalGetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::InternalGetData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerBuffer*), "InternalGetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::GetData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerBuffer*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
