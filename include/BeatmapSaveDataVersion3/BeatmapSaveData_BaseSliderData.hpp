// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BeatmapSaveDataItem
#include "BeatmapSaveDataVersion3/BeatmapSaveData_BeatmapSaveDataItem.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType
#include "BeatmapSaveDataVersion3/BeatmapSaveData_NoteColorType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BaseSliderData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BaseSliderData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::BaseSliderData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem {
    public:
    public:
    // protected BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType c
    // Size: 0x4
    // Offset: 0x14
    ::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType c;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType) == 0x4);
    // protected System.Int32 x
    // Size: 0x4
    // Offset: 0x18
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 y
    // Size: 0x4
    // Offset: 0x1C
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected NoteCutDirection d
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::NoteCutDirection d;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutDirection) == 0x4);
    // protected System.Single tb
    // Size: 0x4
    // Offset: 0x24
    float tb;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Int32 tx
    // Size: 0x4
    // Offset: 0x28
    int tx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 ty
    // Size: 0x4
    // Offset: 0x2C
    int ty;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Get instance field reference: protected BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType c
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType& dyn_c();
    // Get instance field reference: protected System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: protected System.Int32 y
    [[deprecated("Use field access instead!")]] int& dyn_y();
    // Get instance field reference: protected NoteCutDirection d
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutDirection& dyn_d();
    // Get instance field reference: protected System.Single tb
    [[deprecated("Use field access instead!")]] float& dyn_tb();
    // Get instance field reference: protected System.Int32 tx
    [[deprecated("Use field access instead!")]] int& dyn_tx();
    // Get instance field reference: protected System.Int32 ty
    [[deprecated("Use field access instead!")]] int& dyn_ty();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType get_colorType()
    // Offset: 0x2848C34
    ::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType get_colorType();
    // public System.Int32 get_headLine()
    // Offset: 0x2848C3C
    int get_headLine();
    // public System.Int32 get_headLayer()
    // Offset: 0x2848C44
    int get_headLayer();
    // public NoteCutDirection get_headCutDirection()
    // Offset: 0x2848C4C
    ::GlobalNamespace::NoteCutDirection get_headCutDirection();
    // public System.Single get_tailBeat()
    // Offset: 0x2848C54
    float get_tailBeat();
    // public System.Int32 get_tailLine()
    // Offset: 0x2848C5C
    int get_tailLine();
    // public System.Int32 get_tailLayer()
    // Offset: 0x2848C64
    int get_tailLayer();
    // protected System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType colorType, System.Single headBeat, System.Int32 headLine, System.Int32 headLayer, NoteCutDirection headCutDirection, System.Single tailBeat, System.Int32 tailLine, System.Int32 tailLayer)
    // Offset: 0x2848C6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::BaseSliderData* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType colorType, float headBeat, int headLine, int headLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float tailBeat, int tailLine, int tailLayer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::BaseSliderData*, creationType>(colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BaseSliderData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::BaseSliderData), 44 + sizeof(int)> __BeatmapSaveDataVersion3_BeatmapSaveData_BaseSliderDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::BaseSliderData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_colorType
// Il2CppName: get_colorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType (BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_colorType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData*), "get_colorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_headLine
// Il2CppName: get_headLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_headLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData*), "get_headLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_headLayer
// Il2CppName: get_headLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_headLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData*), "get_headLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_headCutDirection
// Il2CppName: get_headCutDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_headCutDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData*), "get_headCutDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_tailBeat
// Il2CppName: get_tailBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_tailBeat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData*), "get_tailBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_tailLine
// Il2CppName: get_tailLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_tailLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData*), "get_tailLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_tailLayer
// Il2CppName: get_tailLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::get_tailLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData*), "get_tailLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
