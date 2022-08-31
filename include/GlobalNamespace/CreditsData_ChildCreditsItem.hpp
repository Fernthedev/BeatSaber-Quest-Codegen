// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CreditsData
#include "GlobalNamespace/CreditsData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CreditsData::ChildCreditsItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData::ChildCreditsItem*, "", "CreditsData/ChildCreditsItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CreditsData/ChildCreditsItem
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsData::ChildCreditsItem : public ::Il2CppObject {
    public:
    public:
    // public CreditsData/Text title
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::CreditsData::Text* title;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CreditsData::Text*) == 0x8);
    // public CreditsData/Text text
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::CreditsData::Text* text;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CreditsData::Text*) == 0x8);
    public:
    // Get instance field reference: public CreditsData/Text title
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CreditsData::Text*& dyn_title();
    // Get instance field reference: public CreditsData/Text text
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CreditsData::Text*& dyn_text();
    // public System.Void .ctor()
    // Offset: 0x14926D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsData::ChildCreditsItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CreditsData::ChildCreditsItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsData::ChildCreditsItem*, creationType>()));
    }
    // public System.Boolean HasTitle()
    // Offset: 0x14926B0
    bool HasTitle();
    // public System.Boolean HasText()
    // Offset: 0x14926C0
    bool HasText();
  }; // CreditsData/ChildCreditsItem
  #pragma pack(pop)
  static check_size<sizeof(CreditsData::ChildCreditsItem), 24 + sizeof(::GlobalNamespace::CreditsData::Text*)> __GlobalNamespace_CreditsData_ChildCreditsItemSizeCheck;
  static_assert(sizeof(CreditsData::ChildCreditsItem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::ChildCreditsItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::ChildCreditsItem::HasTitle
// Il2CppName: HasTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::ChildCreditsItem::*)()>(&GlobalNamespace::CreditsData::ChildCreditsItem::HasTitle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::ChildCreditsItem*), "HasTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::ChildCreditsItem::HasText
// Il2CppName: HasText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::ChildCreditsItem::*)()>(&GlobalNamespace::CreditsData::ChildCreditsItem::HasText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::ChildCreditsItem*), "HasText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
