// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
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
  // Forward declaring type: UserInfo
  class UserInfo;
  // Forward declaring type: PlatformUserAuthTokenData
  class PlatformUserAuthTokenData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IPlatformUserModel
  class IPlatformUserModel {
    public:
    // Creating value type constructor for type: IPlatformUserModel
    IPlatformUserModel() noexcept {}
    // public System.Threading.Tasks.Task`1<UserInfo> GetUserInfo()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo*>* GetUserInfo();
    // public System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> GetUserFriendsUserIds(System.Boolean cached)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* GetUserFriendsUserIds(bool cached);
    // public System.Threading.Tasks.Task`1<PlatformUserAuthTokenData> GetUserAuthToken()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();
    // public System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> GetUserNamesForUserIds(System.Collections.Generic.IReadOnlyList`1<System.String> userIds)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* GetUserNamesForUserIds(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* userIds);
  }; // IPlatformUserModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IPlatformUserModel*, "", "IPlatformUserModel");
// Writing includes for template specializations
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IPlatformUserModel::GetUserInfo
// Il2CppName: GetUserInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo*>* (GlobalNamespace::IPlatformUserModel::*)()>(&GlobalNamespace::IPlatformUserModel::GetUserInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IPlatformUserModel*), "GetUserInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IPlatformUserModel::GetUserFriendsUserIds
// Il2CppName: GetUserFriendsUserIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* (GlobalNamespace::IPlatformUserModel::*)(bool)>(&GlobalNamespace::IPlatformUserModel::GetUserFriendsUserIds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IPlatformUserModel*), "GetUserFriendsUserIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IPlatformUserModel::GetUserAuthToken
// Il2CppName: GetUserAuthToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData*>* (GlobalNamespace::IPlatformUserModel::*)()>(&GlobalNamespace::IPlatformUserModel::GetUserAuthToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IPlatformUserModel*), "GetUserAuthToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IPlatformUserModel::GetUserNamesForUserIds
// Il2CppName: GetUserNamesForUserIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* (GlobalNamespace::IPlatformUserModel::*)(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*)>(&GlobalNamespace::IPlatformUserModel::GetUserNamesForUserIds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IPlatformUserModel*), "GetUserNamesForUserIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>()});
  }
};
