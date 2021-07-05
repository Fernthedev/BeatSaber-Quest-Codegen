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
  // Forward declaring type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelPackCollectionContainerSO
  class BeatmapLevelPackCollectionContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapLevelPackCollectionSO _beatmapLevelPackCollection
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelPackCollectionSO* beatmapLevelPackCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelPackCollectionSO*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelPackCollectionContainerSO
    BeatmapLevelPackCollectionContainerSO(GlobalNamespace::BeatmapLevelPackCollectionSO* beatmapLevelPackCollection_ = {}) noexcept : beatmapLevelPackCollection{beatmapLevelPackCollection_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BeatmapLevelPackCollectionSO get_beatmapLevelPackCollection()
    // Offset: 0x1100DF0
    GlobalNamespace::BeatmapLevelPackCollectionSO* get_beatmapLevelPackCollection();
    // public System.Void .ctor()
    // Offset: 0x1100DF8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelPackCollectionContainerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelPackCollectionContainerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelPackCollectionContainerSO*, creationType>()));
    }
  }; // BeatmapLevelPackCollectionContainerSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelPackCollectionContainerSO), 24 + sizeof(GlobalNamespace::BeatmapLevelPackCollectionSO*)> __GlobalNamespace_BeatmapLevelPackCollectionContainerSOSizeCheck;
  static_assert(sizeof(BeatmapLevelPackCollectionContainerSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackCollectionContainerSO*, "", "BeatmapLevelPackCollectionContainerSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPackCollectionContainerSO::get_beatmapLevelPackCollection
// Il2CppName: get_beatmapLevelPackCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelPackCollectionSO* (GlobalNamespace::BeatmapLevelPackCollectionContainerSO::*)()>(&GlobalNamespace::BeatmapLevelPackCollectionContainerSO::get_beatmapLevelPackCollection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPackCollectionContainerSO*), "get_beatmapLevelPackCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPackCollectionContainerSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
