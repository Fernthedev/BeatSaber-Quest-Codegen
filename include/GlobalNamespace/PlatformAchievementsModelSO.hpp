// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PS4AchievementIdsModelSO
  class PS4AchievementIdsModelSO;
  // Forward declaring type: AchievementIdsModelSO
  class AchievementIdsModelSO;
  // Forward declaring type: PlatformAchievementsHandler
  class PlatformAchievementsHandler;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlatformAchievementsModelSO
  class PlatformAchievementsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult
    struct UnlockAchievementResult;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult
    struct GetUnlockedAchievementsResult;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler
    class UnlockAchievementCompletionHandler;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler
    class GetUnlockedAchievementsCompletionHandler;
    // private PS4AchievementIdsModelSO _ps4AchievementIdsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PS4AchievementIdsModelSO* ps4AchievementIdsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4AchievementIdsModelSO*) == 0x8);
    // private AchievementIdsModelSO _achievementIdsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AchievementIdsModelSO* achievementIdsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementIdsModelSO*) == 0x8);
    // private PlatformAchievementsHandler _platformAchievementsHandler
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlatformAchievementsHandler* platformAchievementsHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformAchievementsHandler*) == 0x8);
    // Creating value type constructor for type: PlatformAchievementsModelSO
    PlatformAchievementsModelSO(GlobalNamespace::PS4AchievementIdsModelSO* ps4AchievementIdsModel_ = {}, GlobalNamespace::AchievementIdsModelSO* achievementIdsModel_ = {}, GlobalNamespace::PlatformAchievementsHandler* platformAchievementsHandler_ = {}) noexcept : ps4AchievementIdsModel{ps4AchievementIdsModel_}, achievementIdsModel{achievementIdsModel_}, platformAchievementsHandler{platformAchievementsHandler_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private PlatformAchievementsHandler get_platformAchievementsHandler()
    // Offset: 0x104F9C8
    GlobalNamespace::PlatformAchievementsHandler* get_platformAchievementsHandler();
    // public System.Void Initialize()
    // Offset: 0x104FA70
    void Initialize();
    // private System.Void CreatePlatformAchievementsHandler()
    // Offset: 0x104F9F8
    void CreatePlatformAchievementsHandler();
    // public HMAsyncRequest UnlockAchievement(System.String achievementId, PlatformAchievementsModelSO/UnlockAchievementCompletionHandler completionHandler)
    // Offset: 0x104FA74
    GlobalNamespace::HMAsyncRequest* UnlockAchievement(::Il2CppString* achievementId, GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUnlockedAchievements(PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler)
    // Offset: 0x104FD5C
    GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler);
    // public System.Void .ctor()
    // Offset: 0x1050054
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAchievementsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformAchievementsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAchievementsModelSO*, creationType>()));
    }
  }; // PlatformAchievementsModelSO
  #pragma pack(pop)
  static check_size<sizeof(PlatformAchievementsModelSO), 40 + sizeof(GlobalNamespace::PlatformAchievementsHandler*)> __GlobalNamespace_PlatformAchievementsModelSOSizeCheck;
  static_assert(sizeof(PlatformAchievementsModelSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO*, "", "PlatformAchievementsModelSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::get_platformAchievementsHandler
// Il2CppName: get_platformAchievementsHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlatformAchievementsHandler* (GlobalNamespace::PlatformAchievementsModelSO::*)()>(&GlobalNamespace::PlatformAchievementsModelSO::get_platformAchievementsHandler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "get_platformAchievementsHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformAchievementsModelSO::*)()>(&GlobalNamespace::PlatformAchievementsModelSO::Initialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::CreatePlatformAchievementsHandler
// Il2CppName: CreatePlatformAchievementsHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformAchievementsModelSO::*)()>(&GlobalNamespace::PlatformAchievementsModelSO::CreatePlatformAchievementsHandler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "CreatePlatformAchievementsHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievement
// Il2CppName: UnlockAchievement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformAchievementsModelSO::*)(::Il2CppString*, GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*)>(&GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievement)> {
  const MethodInfo* get() {
    static auto* achievementId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/UnlockAchievementCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "UnlockAchievement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{achievementId, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievements
// Il2CppName: GetUnlockedAchievements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformAchievementsModelSO::*)(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*)>(&GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievements)> {
  const MethodInfo* get() {
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "GetUnlockedAchievements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
