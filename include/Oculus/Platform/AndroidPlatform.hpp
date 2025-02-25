// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.AndroidPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidPlatform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AndroidPlatform
    AndroidPlatform() noexcept {}
    // public System.Boolean Initialize(System.String appId)
    // Offset: 0x1B92984
    bool Initialize(::Il2CppString* appId);
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0x1B92AD0
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::Il2CppString* appId);
    // public System.Void .ctor()
    // Offset: 0x1B92C50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidPlatform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::AndroidPlatform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidPlatform*, creationType>()));
    }
  }; // Oculus.Platform.AndroidPlatform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AndroidPlatform*, "Oculus.Platform", "AndroidPlatform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::AndroidPlatform::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::AndroidPlatform::*)(::Il2CppString*)>(&Oculus::Platform::AndroidPlatform::Initialize)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AndroidPlatform*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AndroidPlatform::AsyncInitialize
// Il2CppName: AsyncInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* (Oculus::Platform::AndroidPlatform::*)(::Il2CppString*)>(&Oculus::Platform::AndroidPlatform::AsyncInitialize)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AndroidPlatform*), "AsyncInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AndroidPlatform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
