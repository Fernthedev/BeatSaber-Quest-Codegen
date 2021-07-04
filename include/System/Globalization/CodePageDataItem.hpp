// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.CodePageDataItem
  class CodePageDataItem : public ::Il2CppObject {
    public:
    // System.Int32 m_dataIndex
    // Size: 0x4
    // Offset: 0x10
    int m_dataIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_uiFamilyCodePage
    // Size: 0x4
    // Offset: 0x14
    int m_uiFamilyCodePage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.String m_webName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_webName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.UInt32 m_flags
    // Size: 0x4
    // Offset: 0x20
    uint m_flags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: CodePageDataItem
    CodePageDataItem(int m_dataIndex_ = {}, int m_uiFamilyCodePage_ = {}, ::Il2CppString* m_webName_ = {}, uint m_flags_ = {}) noexcept : m_dataIndex{m_dataIndex_}, m_uiFamilyCodePage{m_uiFamilyCodePage_}, m_webName{m_webName_}, m_flags{m_flags_} {}
    // Get static field: static private readonly System.Char[] sep
    static ::Array<::Il2CppChar>* _get_sep();
    // Set static field: static private readonly System.Char[] sep
    static void _set_sep(::Array<::Il2CppChar>* value);
    // System.Void .ctor(System.Int32 dataIndex)
    // Offset: 0x17B2FC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodePageDataItem* New_ctor(int dataIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CodePageDataItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodePageDataItem*, creationType>(dataIndex)));
    }
    // static System.String CreateString(System.String pStrings, System.UInt32 index)
    // Offset: 0x17B30A0
    static ::Il2CppString* CreateString(::Il2CppString* pStrings, uint index);
    // public System.String get_WebName()
    // Offset: 0x17B3174
    ::Il2CppString* get_WebName();
    // static private System.Void .cctor()
    // Offset: 0x17B3244
    static void _cctor();
  }; // System.Globalization.CodePageDataItem
  #pragma pack(pop)
  static check_size<sizeof(CodePageDataItem), 32 + sizeof(uint)> __System_Globalization_CodePageDataItemSizeCheck;
  static_assert(sizeof(CodePageDataItem) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CodePageDataItem*, "System.Globalization", "CodePageDataItem");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::CreateString
// Il2CppName: CreateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, uint)>(&System::Globalization::CodePageDataItem::CreateString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CodePageDataItem*), "CreateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::get_WebName
// Il2CppName: get_WebName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::CodePageDataItem::*)()>(&System::Globalization::CodePageDataItem::get_WebName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CodePageDataItem*), "get_WebName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::CodePageDataItem::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CodePageDataItem*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
