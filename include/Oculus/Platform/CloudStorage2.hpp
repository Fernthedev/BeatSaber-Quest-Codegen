// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.CloudStorage2
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudStorage2 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CloudStorage2
    CloudStorage2() noexcept {}
    // static public Oculus.Platform.Request`1<System.String> GetUserDirectoryPath()
    // Offset: 0x14DED84
    static Oculus::Platform::Request_1<::Il2CppString*>* GetUserDirectoryPath();
  }; // Oculus.Platform.CloudStorage2
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CloudStorage2*, "Oculus.Platform", "CloudStorage2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage2::GetUserDirectoryPath
// Il2CppName: GetUserDirectoryPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<::Il2CppString*>* (*)()>(&Oculus::Platform::CloudStorage2::GetUserDirectoryPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage2*), "GetUserDirectoryPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
