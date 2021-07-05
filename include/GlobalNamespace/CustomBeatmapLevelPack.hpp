// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CustomBeatmapLevelCollection
  class CustomBeatmapLevelCollection;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CustomBeatmapLevelPack
  class CustomBeatmapLevelPack : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelPack*/ {
    public:
    // private System.String _packID
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* packID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _packName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* packName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _shortPackName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* shortPackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private CustomBeatmapLevelCollection _customBeatmapLevelCollection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::CustomBeatmapLevelCollection* customBeatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CustomBeatmapLevelCollection*) == 0x8);
    // Creating value type constructor for type: CustomBeatmapLevelPack
    CustomBeatmapLevelPack(::Il2CppString* packID_ = {}, ::Il2CppString* packName_ = {}, ::Il2CppString* shortPackName_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::CustomBeatmapLevelCollection* customBeatmapLevelCollection_ = {}) noexcept : packID{packID_}, packName{packName_}, shortPackName{shortPackName_}, coverImage{coverImage_}, customBeatmapLevelCollection{customBeatmapLevelCollection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelPack
    operator GlobalNamespace::IBeatmapLevelPack() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelPack*>(this);
    }
    // public System.String get_packID()
    // Offset: 0x11994A8
    ::Il2CppString* get_packID();
    // public System.String get_packName()
    // Offset: 0x11994B0
    ::Il2CppString* get_packName();
    // public System.String get_shortPackName()
    // Offset: 0x11994B8
    ::Il2CppString* get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0x11994C0
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x11994C8
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x11994D0
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Boolean get_isPackAlwaysOwned()
    // Offset: 0x11994D8
    bool get_isPackAlwaysOwned();
    // public System.Void .ctor(System.String packID, System.String packName, System.String shortPackName, UnityEngine.Sprite coverImage, CustomBeatmapLevelCollection customBeatmapLevelCollection)
    // Offset: 0x11994E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomBeatmapLevelPack* New_ctor(::Il2CppString* packID, ::Il2CppString* packName, ::Il2CppString* shortPackName, UnityEngine::Sprite* coverImage, GlobalNamespace::CustomBeatmapLevelCollection* customBeatmapLevelCollection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomBeatmapLevelPack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomBeatmapLevelPack*, creationType>(packID, packName, shortPackName, coverImage, customBeatmapLevelCollection)));
    }
  }; // CustomBeatmapLevelPack
  #pragma pack(pop)
  static check_size<sizeof(CustomBeatmapLevelPack), 48 + sizeof(GlobalNamespace::CustomBeatmapLevelCollection*)> __GlobalNamespace_CustomBeatmapLevelPackSizeCheck;
  static_assert(sizeof(CustomBeatmapLevelPack) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevelPack*, "", "CustomBeatmapLevelPack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelPack::get_packID
// Il2CppName: get_packID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::CustomBeatmapLevelPack::*)()>(&GlobalNamespace::CustomBeatmapLevelPack::get_packID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevelPack*), "get_packID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelPack::get_packName
// Il2CppName: get_packName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::CustomBeatmapLevelPack::*)()>(&GlobalNamespace::CustomBeatmapLevelPack::get_packName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevelPack*), "get_packName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelPack::get_shortPackName
// Il2CppName: get_shortPackName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::CustomBeatmapLevelPack::*)()>(&GlobalNamespace::CustomBeatmapLevelPack::get_shortPackName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevelPack*), "get_shortPackName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelPack::get_collectionName
// Il2CppName: get_collectionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::CustomBeatmapLevelPack::*)()>(&GlobalNamespace::CustomBeatmapLevelPack::get_collectionName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevelPack*), "get_collectionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelPack::get_coverImage
// Il2CppName: get_coverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::CustomBeatmapLevelPack::*)()>(&GlobalNamespace::CustomBeatmapLevelPack::get_coverImage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevelPack*), "get_coverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelPack::get_beatmapLevelCollection
// Il2CppName: get_beatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelCollection* (GlobalNamespace::CustomBeatmapLevelPack::*)()>(&GlobalNamespace::CustomBeatmapLevelPack::get_beatmapLevelCollection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevelPack*), "get_beatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelPack::get_isPackAlwaysOwned
// Il2CppName: get_isPackAlwaysOwned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CustomBeatmapLevelPack::*)()>(&GlobalNamespace::CustomBeatmapLevelPack::get_isPackAlwaysOwned)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevelPack*), "get_isPackAlwaysOwned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevelPack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
