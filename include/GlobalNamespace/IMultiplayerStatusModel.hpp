// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerStatusData
  class MultiplayerStatusData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerStatusModel
  class IMultiplayerStatusModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::IMultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerStatusModel*, "", "IMultiplayerStatusModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IMultiplayerStatusModel
  // [TokenAttribute] Offset: FFFFFFFF
  class IMultiplayerStatusModel {
    public:
    // public System.Threading.Tasks.Task`1<MultiplayerStatusData> GetMultiplayerStatusAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(System::Threading::CancellationToken cancellationToken);
  }; // IMultiplayerStatusModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerStatusModel::GetMultiplayerStatusAsync
// Il2CppName: GetMultiplayerStatusAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::MultiplayerStatusData*>* (GlobalNamespace::IMultiplayerStatusModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::IMultiplayerStatusModel::GetMultiplayerStatusAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerStatusModel*), "GetMultiplayerStatusAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
