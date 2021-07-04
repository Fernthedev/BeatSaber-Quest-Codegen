// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: User
  class User;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusNetworkPlayerModel/<>c__DisplayClass45_0
  // [CompilerGeneratedAttribute] Offset: E11D28
  class OculusNetworkPlayerModel::$$c__DisplayClass45_0 : public ::Il2CppObject {
    public:
    // public System.UInt64 id
    // Size: 0x8
    // Offset: 0x10
    uint64_t id;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.String> tcs
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass45_0
    $$c__DisplayClass45_0(uint64_t id_ = {}, System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>* tcs_ = {}) noexcept : id{id_}, tcs{tcs_} {}
    // System.Void <GetUserNameAsync>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.User> result)
    // Offset: 0x11E7FE4
    void $GetUserNameAsync$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::User*>* result);
    // public System.Void .ctor()
    // Offset: 0x11E7104
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusNetworkPlayerModel::$$c__DisplayClass45_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass45_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusNetworkPlayerModel::$$c__DisplayClass45_0*, creationType>()));
    }
  }; // OculusNetworkPlayerModel/<>c__DisplayClass45_0
  #pragma pack(pop)
  static check_size<sizeof(OculusNetworkPlayerModel::$$c__DisplayClass45_0), 24 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>*)> __GlobalNamespace_OculusNetworkPlayerModel_$$c__DisplayClass45_0SizeCheck;
  static_assert(sizeof(OculusNetworkPlayerModel::$$c__DisplayClass45_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass45_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass45_0");
// Writing includes for template specializations
#include "Oculus/Platform/Message_1.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass45_0::$GetUserNameAsync$b__0
// Il2CppName: <GetUserNameAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass45_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::User*>*)>(&GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass45_0::$GetUserNameAsync$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass45_0*), "<GetUserNameAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Oculus::Platform::Message_1<Oculus::Platform::Models::User*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass45_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
