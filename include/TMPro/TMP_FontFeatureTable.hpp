// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_FontFeatureTable
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_FontFeatureTable : public ::Il2CppObject {
    public:
    // Nested type: TMPro::TMP_FontFeatureTable::$$c
    class $$c;
    // System.Collections.Generic.List`1<TMPro.TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecords;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>*) == 0x8);
    // System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookupDictionary
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecordLookupDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>*) == 0x8);
    // Creating value type constructor for type: TMP_FontFeatureTable
    TMP_FontFeatureTable(System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecords_ = {}, System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecordLookupDictionary_ = {}) noexcept : m_GlyphPairAdjustmentRecords{m_GlyphPairAdjustmentRecords_}, m_GlyphPairAdjustmentRecordLookupDictionary{m_GlyphPairAdjustmentRecordLookupDictionary_} {}
    // Get instance field reference: System.Collections.Generic.List`1<TMPro.TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords
    System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>*& dyn_m_GlyphPairAdjustmentRecords();
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookupDictionary
    System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>*& dyn_m_GlyphPairAdjustmentRecordLookupDictionary();
    // System.Collections.Generic.List`1<TMPro.TMP_GlyphPairAdjustmentRecord> get_glyphPairAdjustmentRecords()
    // Offset: 0x111819C
    System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* get_glyphPairAdjustmentRecords();
    // System.Void set_glyphPairAdjustmentRecords(System.Collections.Generic.List`1<TMPro.TMP_GlyphPairAdjustmentRecord> value)
    // Offset: 0x11181A4
    void set_glyphPairAdjustmentRecords(System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* value);
    // public System.Void SortGlyphPairAdjustmentRecords()
    // Offset: 0x11181AC
    void SortGlyphPairAdjustmentRecords();
    // public System.Void .ctor()
    // Offset: 0x1116C00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_FontFeatureTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_FontFeatureTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_FontFeatureTable*, creationType>()));
    }
  }; // TMPro.TMP_FontFeatureTable
  #pragma pack(pop)
  static check_size<sizeof(TMP_FontFeatureTable), 24 + sizeof(System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>*)> __TMPro_TMP_FontFeatureTableSizeCheck;
  static_assert(sizeof(TMP_FontFeatureTable) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontFeatureTable*, "TMPro", "TMP_FontFeatureTable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_FontFeatureTable::get_glyphPairAdjustmentRecords
// Il2CppName: get_glyphPairAdjustmentRecords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* (TMPro::TMP_FontFeatureTable::*)()>(&TMPro::TMP_FontFeatureTable::get_glyphPairAdjustmentRecords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontFeatureTable*), "get_glyphPairAdjustmentRecords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontFeatureTable::set_glyphPairAdjustmentRecords
// Il2CppName: set_glyphPairAdjustmentRecords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_FontFeatureTable::*)(System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>*)>(&TMPro::TMP_FontFeatureTable::set_glyphPairAdjustmentRecords)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_GlyphPairAdjustmentRecord")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontFeatureTable*), "set_glyphPairAdjustmentRecords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontFeatureTable::SortGlyphPairAdjustmentRecords
// Il2CppName: SortGlyphPairAdjustmentRecords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_FontFeatureTable::*)()>(&TMPro::TMP_FontFeatureTable::SortGlyphPairAdjustmentRecords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontFeatureTable*), "SortGlyphPairAdjustmentRecords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontFeatureTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
