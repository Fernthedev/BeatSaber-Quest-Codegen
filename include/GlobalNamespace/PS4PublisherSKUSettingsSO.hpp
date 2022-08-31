// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PS4PublisherSKUSettingsSO
  class PS4PublisherSKUSettingsSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PS4PublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4PublisherSKUSettingsSO*, "", "PS4PublisherSKUSettingsSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: PS4PublisherSKUSettingsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4PublisherSKUSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private System.String _skuName
    // Size: 0x8
    // Offset: 0x18
    ::StringW skuName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _contentId
    // Size: 0x8
    // Offset: 0x20
    ::StringW contentId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _parentalLockLevel
    // Size: 0x4
    // Offset: 0x28
    int parentalLockLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: parentalLockLevel and: npTitleFilenamePath
    char __padding2[0x4] = {};
    // private System.String _npTitleFilenamePath
    // Size: 0x8
    // Offset: 0x30
    ::StringW npTitleFilenamePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _defaultAgeRestriction
    // Size: 0x4
    // Offset: 0x38
    int defaultAgeRestriction;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _skuName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__skuName();
    // Get instance field reference: private System.String _contentId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__contentId();
    // Get instance field reference: private System.Int32 _parentalLockLevel
    [[deprecated("Use field access instead!")]] int& dyn__parentalLockLevel();
    // Get instance field reference: private System.String _npTitleFilenamePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__npTitleFilenamePath();
    // Get instance field reference: private System.Int32 _defaultAgeRestriction
    [[deprecated("Use field access instead!")]] int& dyn__defaultAgeRestriction();
    // public System.String get_skuName()
    // Offset: 0x1342684
    ::StringW get_skuName();
    // public System.String get_contentId()
    // Offset: 0x134268C
    ::StringW get_contentId();
    // public System.Int32 get_parentalLockLevel()
    // Offset: 0x1342694
    int get_parentalLockLevel();
    // public System.String get_npTitleFilenamePath()
    // Offset: 0x134269C
    ::StringW get_npTitleFilenamePath();
    // public System.Int32 get_defaultAgeRestriction()
    // Offset: 0x13426A4
    int get_defaultAgeRestriction();
    // public System.Void .ctor()
    // Offset: 0x13426AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4PublisherSKUSettingsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PS4PublisherSKUSettingsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4PublisherSKUSettingsSO*, creationType>()));
    }
  }; // PS4PublisherSKUSettingsSO
  #pragma pack(pop)
  static check_size<sizeof(PS4PublisherSKUSettingsSO), 56 + sizeof(int)> __GlobalNamespace_PS4PublisherSKUSettingsSOSizeCheck;
  static_assert(sizeof(PS4PublisherSKUSettingsSO) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_skuName
// Il2CppName: get_skuName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_skuName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_skuName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_contentId
// Il2CppName: get_contentId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_contentId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_contentId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_parentalLockLevel
// Il2CppName: get_parentalLockLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_parentalLockLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_parentalLockLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_npTitleFilenamePath
// Il2CppName: get_npTitleFilenamePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_npTitleFilenamePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_npTitleFilenamePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_defaultAgeRestriction
// Il2CppName: get_defaultAgeRestriction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_defaultAgeRestriction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_defaultAgeRestriction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
