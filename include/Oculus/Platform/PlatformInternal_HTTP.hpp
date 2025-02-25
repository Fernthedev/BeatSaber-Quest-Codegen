// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.PlatformInternal
#include "Oculus/Platform/PlatformInternal.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: HttpTransferUpdate
  class HttpTransferUpdate;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PlatformInternal/Oculus.Platform.HTTP
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformInternal::HTTP : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HTTP
    HTTP() noexcept {}
    // static public System.Void SetHttpTransferUpdateCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.HttpTransferUpdate> callback)
    // Offset: 0x23B3358
    static void SetHttpTransferUpdateCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::HttpTransferUpdate*>::Callback* callback);
  }; // Oculus.Platform.PlatformInternal/Oculus.Platform.HTTP
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInternal::HTTP*, "Oculus.Platform", "PlatformInternal/HTTP");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::PlatformInternal::HTTP::SetHttpTransferUpdateCallback
// Il2CppName: SetHttpTransferUpdateCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
