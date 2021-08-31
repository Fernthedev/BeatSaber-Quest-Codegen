// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementSO
  class AchievementSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AchievementIdsModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AchievementIdsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Collections.Generic.List`1<AchievementSO> _achievementsIds
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::AchievementSO*>* achievementsIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::AchievementSO*>*) == 0x8);
    // Creating value type constructor for type: AchievementIdsModelSO
    AchievementIdsModelSO(System::Collections::Generic::List_1<GlobalNamespace::AchievementSO*>* achievementsIds_ = {}) noexcept : achievementsIds{achievementsIds_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<AchievementSO> _achievementsIds
    System::Collections::Generic::List_1<GlobalNamespace::AchievementSO*>*& dyn__achievementsIds();
    // public System.Collections.Generic.List`1<AchievementSO> get_achievementsIds()
    // Offset: 0x1176790
    System::Collections::Generic::List_1<GlobalNamespace::AchievementSO*>* get_achievementsIds();
    // public System.Void .ctor()
    // Offset: 0x1176798
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementIdsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AchievementIdsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementIdsModelSO*, creationType>()));
    }
  }; // AchievementIdsModelSO
  #pragma pack(pop)
  static check_size<sizeof(AchievementIdsModelSO), 24 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::AchievementSO*>*)> __GlobalNamespace_AchievementIdsModelSOSizeCheck;
  static_assert(sizeof(AchievementIdsModelSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementIdsModelSO*, "", "AchievementIdsModelSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AchievementIdsModelSO::get_achievementsIds
// Il2CppName: get_achievementsIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::AchievementSO*>* (GlobalNamespace::AchievementIdsModelSO::*)()>(&GlobalNamespace::AchievementIdsModelSO::get_achievementsIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementIdsModelSO*), "get_achievementsIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementIdsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
