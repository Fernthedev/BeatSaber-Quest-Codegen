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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicCollectionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicCollectionSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapCharacteristicSO[] _beatmapCharacteristics
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // Creating value type constructor for type: BeatmapCharacteristicCollectionSO
    BeatmapCharacteristicCollectionSO(::Array<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics_ = {}) noexcept : beatmapCharacteristics{beatmapCharacteristics_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapCharacteristicSO[] _beatmapCharacteristics
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>*& dyn__beatmapCharacteristics();
    // public BeatmapCharacteristicSO[] get_beatmapCharacteristics()
    // Offset: 0x11EB8AC
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* get_beatmapCharacteristics();
    // public System.Void set_beatmapCharacteristics(BeatmapCharacteristicSO[] value)
    // Offset: 0x11EB8B4
    void set_beatmapCharacteristics(::Array<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public BeatmapCharacteristicSO GetBeatmapCharacteristicBySerializedName(System.String serializedName)
    // Offset: 0x11EB8BC
    GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicBySerializedName(::Il2CppString* serializedName);
    // public System.Boolean ContainsBeatmapCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x11EB948
    bool ContainsBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void .ctor()
    // Offset: 0x11EBA28
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicCollectionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCharacteristicCollectionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicCollectionSO*, creationType>()));
    }
  }; // BeatmapCharacteristicCollectionSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicCollectionSO), 24 + sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*)> __GlobalNamespace_BeatmapCharacteristicCollectionSOSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicCollectionSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicCollectionSO*, "", "BeatmapCharacteristicCollectionSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::get_beatmapCharacteristics
// Il2CppName: get_beatmapCharacteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::BeatmapCharacteristicSO*>* (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::get_beatmapCharacteristics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "get_beatmapCharacteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::set_beatmapCharacteristics
// Il2CppName: set_beatmapCharacteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::set_beatmapCharacteristics)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "set_beatmapCharacteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::GetBeatmapCharacteristicBySerializedName
// Il2CppName: GetBeatmapCharacteristicBySerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::GetBeatmapCharacteristicBySerializedName)> {
  static const MethodInfo* get() {
    static auto* serializedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "GetBeatmapCharacteristicBySerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::ContainsBeatmapCharacteristic
// Il2CppName: ContainsBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)(GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::ContainsBeatmapCharacteristic)> {
  static const MethodInfo* get() {
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "ContainsBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
