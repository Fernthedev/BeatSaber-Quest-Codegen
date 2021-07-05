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
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
  // Forward declaring type: EnvironmentSizeData
  class EnvironmentSizeData;
  // Forward declaring type: EnvironmentIntensityReductionOptions
  class EnvironmentIntensityReductionOptions;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentInfoSO
  class EnvironmentInfoSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _environmentName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* environmentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private ColorSchemeSO _colorScheme
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSchemeSO* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeSO*) == 0x8);
    // private SceneInfo _sceneInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SceneInfo* sceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private System.String _serializedName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* serializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private EnvironmentTypeSO _environmentType
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::EnvironmentTypeSO* environmentType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentTypeSO*) == 0x8);
    // private EnvironmentSizeData _environmentSizeData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::EnvironmentSizeData* environmentSizeData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentSizeData*) == 0x8);
    // private EnvironmentIntensityReductionOptions _environmentIntensityReductionOptions
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentIntensityReductionOptions*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> _environmentKeywords
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<::Il2CppString*>* environmentKeywords;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: EnvironmentInfoSO
    EnvironmentInfoSO(::Il2CppString* environmentName_ = {}, GlobalNamespace::ColorSchemeSO* colorScheme_ = {}, GlobalNamespace::SceneInfo* sceneInfo_ = {}, ::Il2CppString* serializedName_ = {}, GlobalNamespace::EnvironmentTypeSO* environmentType_ = {}, GlobalNamespace::EnvironmentSizeData* environmentSizeData_ = {}, GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* environmentKeywords_ = {}) noexcept : environmentName{environmentName_}, colorScheme{colorScheme_}, sceneInfo{sceneInfo_}, serializedName{serializedName_}, environmentType{environmentType_}, environmentSizeData{environmentSizeData_}, environmentIntensityReductionOptions{environmentIntensityReductionOptions_}, environmentKeywords{environmentKeywords_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SceneInfo get_sceneInfo()
    // Offset: 0x103E13C
    GlobalNamespace::SceneInfo* get_sceneInfo();
    // public System.String get_environmentName()
    // Offset: 0x103E144
    ::Il2CppString* get_environmentName();
    // public ColorSchemeSO get_colorScheme()
    // Offset: 0x103E14C
    GlobalNamespace::ColorSchemeSO* get_colorScheme();
    // public System.String get_serializedName()
    // Offset: 0x103E154
    ::Il2CppString* get_serializedName();
    // public EnvironmentTypeSO get_environmentType()
    // Offset: 0x103E15C
    GlobalNamespace::EnvironmentTypeSO* get_environmentType();
    // public EnvironmentSizeData get_environmentSizeData()
    // Offset: 0x103E164
    GlobalNamespace::EnvironmentSizeData* get_environmentSizeData();
    // public EnvironmentIntensityReductionOptions get_environmentIntensityReductionOptions()
    // Offset: 0x103E16C
    GlobalNamespace::EnvironmentIntensityReductionOptions* get_environmentIntensityReductionOptions();
    // public System.Collections.Generic.IReadOnlyList`1<System.String> get_environmentKeywords()
    // Offset: 0x103E174
    System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* get_environmentKeywords();
    // public System.Void .ctor()
    // Offset: 0x103E17C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentInfoSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentInfoSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentInfoSO*, creationType>()));
    }
  }; // EnvironmentInfoSO
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentInfoSO), 80 + sizeof(System::Collections::Generic::List_1<::Il2CppString*>*)> __GlobalNamespace_EnvironmentInfoSOSizeCheck;
  static_assert(sizeof(EnvironmentInfoSO) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentInfoSO*, "", "EnvironmentInfoSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_sceneInfo
// Il2CppName: get_sceneInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SceneInfo* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_sceneInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_sceneInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentName
// Il2CppName: get_environmentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_colorScheme
// Il2CppName: get_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorSchemeSO* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_colorScheme)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_serializedName
// Il2CppName: get_serializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_serializedName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_serializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentType
// Il2CppName: get_environmentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentTypeSO* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentSizeData
// Il2CppName: get_environmentSizeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentSizeData* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentSizeData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentSizeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentIntensityReductionOptions
// Il2CppName: get_environmentIntensityReductionOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentIntensityReductionOptions* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentIntensityReductionOptions)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentIntensityReductionOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentKeywords
// Il2CppName: get_environmentKeywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentKeywords)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentKeywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
