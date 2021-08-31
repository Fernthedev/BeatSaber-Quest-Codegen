// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatmapLevelCollection
#include "GlobalNamespace/IBeatmapLevelCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CustomPreviewBeatmapLevel
  class CustomPreviewBeatmapLevel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: CustomBeatmapLevelCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomBeatmapLevelCollection : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelCollection*/ {
    public:
    // private CustomPreviewBeatmapLevel[] _customPreviewBeatmapLevels
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>* customPreviewBeatmapLevels;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>*) == 0x8);
    // Creating value type constructor for type: CustomBeatmapLevelCollection
    CustomBeatmapLevelCollection(::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>* customPreviewBeatmapLevels_ = {}) noexcept : customPreviewBeatmapLevels{customPreviewBeatmapLevels_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelCollection
    operator GlobalNamespace::IBeatmapLevelCollection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelCollection*>(this);
    }
    // Creating conversion operator: operator ::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>*
    constexpr operator ::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>*() const noexcept {
      return customPreviewBeatmapLevels;
    }
    // Get instance field reference: private CustomPreviewBeatmapLevel[] _customPreviewBeatmapLevels
    ::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>*& dyn__customPreviewBeatmapLevels();
    // public IPreviewBeatmapLevel[] get_beatmapLevels()
    // Offset: 0x10F6424
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
    // public System.Void .ctor(CustomPreviewBeatmapLevel[] customPreviewBeatmapLevels)
    // Offset: 0x10F642C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomBeatmapLevelCollection* New_ctor(::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>* customPreviewBeatmapLevels) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomBeatmapLevelCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomBeatmapLevelCollection*, creationType>(customPreviewBeatmapLevels)));
    }
  }; // CustomBeatmapLevelCollection
  #pragma pack(pop)
  static check_size<sizeof(CustomBeatmapLevelCollection), 16 + sizeof(::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>*)> __GlobalNamespace_CustomBeatmapLevelCollectionSizeCheck;
  static_assert(sizeof(CustomBeatmapLevelCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevelCollection*, "", "CustomBeatmapLevelCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelCollection::get_beatmapLevels
// Il2CppName: get_beatmapLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IPreviewBeatmapLevel*>* (GlobalNamespace::CustomBeatmapLevelCollection::*)()>(&GlobalNamespace::CustomBeatmapLevelCollection::get_beatmapLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevelCollection*), "get_beatmapLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
