// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: Oculus.Platform.StandalonePlatform
  class StandalonePlatform : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::StandalonePlatform::UnityLogDelegate
    class UnityLogDelegate;
    // Creating value type constructor for type: StandalonePlatform
    StandalonePlatform() noexcept {}
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> InitializeInEditor()
    // Offset: 0x23AF674
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* InitializeInEditor();
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.UInt64 appID, System.String accessToken)
    // Offset: 0x23AC308
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(uint64_t appID, ::Il2CppString* accessToken);
    // public System.Void .ctor()
    // Offset: 0x23AC300
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandalonePlatform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::StandalonePlatform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandalonePlatform*, creationType>()));
    }
  }; // Oculus.Platform.StandalonePlatform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::StandalonePlatform*, "Oculus.Platform", "StandalonePlatform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatform::InitializeInEditor
// Il2CppName: InitializeInEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* (Oculus::Platform::StandalonePlatform::*)()>(&Oculus::Platform::StandalonePlatform::InitializeInEditor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatform*), "InitializeInEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatform::AsyncInitialize
// Il2CppName: AsyncInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* (Oculus::Platform::StandalonePlatform::*)(uint64_t, ::Il2CppString*)>(&Oculus::Platform::StandalonePlatform::AsyncInitialize)> {
  const MethodInfo* get() {
    static auto* appID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* accessToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatform*), "AsyncInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appID, accessToken});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
