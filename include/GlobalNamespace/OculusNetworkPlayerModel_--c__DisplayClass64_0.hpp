// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass64_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass64_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass64_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusNetworkPlayerModel/<>c__DisplayClass64_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusNetworkPlayerModel::$$c__DisplayClass64_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public OculusNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // public System.UInt64 userId
    // Size: 0x8
    // Offset: 0x20
    uint64_t userId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Get instance field reference: public OculusNetworkPlayerModel <>4__this
    GlobalNamespace::OculusNetworkPlayerModel*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs
    System::Threading::Tasks::TaskCompletionSource_1<bool>*& dyn_tcs();
    // Get instance field reference: public System.UInt64 userId
    uint64_t& dyn_userId();
    // System.Void <ShouldAcceptConnectionFromPlayer>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> result)
    // Offset: 0x2BB3F74
    void $ShouldAcceptConnectionFromPlayer$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result);
    // public System.Void .ctor()
    // Offset: 0x2BB3370
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusNetworkPlayerModel::$$c__DisplayClass64_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass64_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusNetworkPlayerModel::$$c__DisplayClass64_0*, creationType>()));
    }
  }; // OculusNetworkPlayerModel/<>c__DisplayClass64_0
  #pragma pack(pop)
  static check_size<sizeof(OculusNetworkPlayerModel::$$c__DisplayClass64_0), 32 + sizeof(uint64_t)> __GlobalNamespace_OculusNetworkPlayerModel_$$c__DisplayClass64_0SizeCheck;
  static_assert(sizeof(OculusNetworkPlayerModel::$$c__DisplayClass64_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass64_0::$ShouldAcceptConnectionFromPlayer$b__0
// Il2CppName: <ShouldAcceptConnectionFromPlayer>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass64_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>*)>(&GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass64_0::$ShouldAcceptConnectionFromPlayer$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass64_0*), "<ShouldAcceptConnectionFromPlayer>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass64_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
