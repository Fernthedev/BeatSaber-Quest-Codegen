// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformLeaderboardsHandler
#include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformLeaderboardsHandler/<>c__DisplayClass3_0
  // [CompilerGeneratedAttribute] Offset: E11A28
  class OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public OculusPlatformLeaderboardsHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusPlatformLeaderboardsHandler* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformLeaderboardsHandler*) == 0x8);
    // public Oculus.Platform.Request oculusRequest
    // Size: 0x8
    // Offset: 0x18
    Oculus::Platform::Request* oculusRequest;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Request*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(GlobalNamespace::OculusPlatformLeaderboardsHandler* $$4__this_ = {}, Oculus::Platform::Request* oculusRequest_ = {}) noexcept : $$4__this{$$4__this_}, oculusRequest{oculusRequest_} {}
    // System.Void <AddOculusRequest>b__0(HMAsyncRequest request)
    // Offset: 0x11ED2C8
    void $AddOculusRequest$b__0(GlobalNamespace::HMAsyncRequest* request);
    // public System.Void .ctor()
    // Offset: 0x11ECEF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // OculusPlatformLeaderboardsHandler/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0), 24 + sizeof(Oculus::Platform::Request*)> __GlobalNamespace_OculusPlatformLeaderboardsHandler_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass3_0");
// Writing includes for template specializations
#include "GlobalNamespace/HMAsyncRequest.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::$AddOculusRequest$b__0
// Il2CppName: <AddOculusRequest>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::*)(GlobalNamespace::HMAsyncRequest*)>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::$AddOculusRequest$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0*), "<AddOculusRequest>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::HMAsyncRequest*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
