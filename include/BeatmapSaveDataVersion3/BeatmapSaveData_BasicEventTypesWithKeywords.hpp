// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BasicEventTypesWithKeywords");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::BasicEventTypesWithKeywords : public ::Il2CppObject {
    public:
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword
    class BasicEventTypesForKeyword;
    public:
    // private System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords/BeatmapSaveDataVersion3.BasicEventTypesForKeyword> d
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>* d;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>*
    constexpr operator ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>*() const noexcept {
      return d;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords/BeatmapSaveDataVersion3.BasicEventTypesForKeyword> d
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>*& dyn_d();
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords/BeatmapSaveDataVersion3.BasicEventTypesForKeyword> get_data()
    // Offset: 0x2848D30
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>* get_data();
    // public System.Void .ctor(System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords/BeatmapSaveDataVersion3.BasicEventTypesForKeyword> data)
    // Offset: 0x2848B4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::BasicEventTypesWithKeywords* New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::BasicEventTypesWithKeywords*, creationType>(data)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::BasicEventTypesWithKeywords), 16 + sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>*)> __BeatmapSaveDataVersion3_BeatmapSaveData_BasicEventTypesWithKeywordsSizeCheck;
  static_assert(sizeof(BeatmapSaveData::BasicEventTypesWithKeywords) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*>* (BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
