// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: TailoringInfo
  class TailoringInfo;
  // Forward declaring type: Contraction
  class Contraction;
  // Forward declaring type: Level2Map
  class Level2Map;
  // Forward declaring type: CodePointIndexer
  class CodePointIndexer;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.MSCompatUnicodeTable
  class MSCompatUnicodeTable : public ::Il2CppObject {
    public:
    // Nested type: Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c
    class $$c;
    // Creating value type constructor for type: MSCompatUnicodeTable
    MSCompatUnicodeTable() noexcept {}
    // Get static field: static public System.Int32 MaxExpansionLength
    static int _get_MaxExpansionLength();
    // Set static field: static public System.Int32 MaxExpansionLength
    static void _set_MaxExpansionLength(int value);
    // Get static field: static private readonly System.Byte* ignorableFlags
    static uint8_t* _get_ignorableFlags();
    // Set static field: static private readonly System.Byte* ignorableFlags
    static void _set_ignorableFlags(uint8_t* value);
    // Get static field: static private readonly System.Byte* categories
    static uint8_t* _get_categories();
    // Set static field: static private readonly System.Byte* categories
    static void _set_categories(uint8_t* value);
    // Get static field: static private readonly System.Byte* level1
    static uint8_t* _get_level1();
    // Set static field: static private readonly System.Byte* level1
    static void _set_level1(uint8_t* value);
    // Get static field: static private readonly System.Byte* level2
    static uint8_t* _get_level2();
    // Set static field: static private readonly System.Byte* level2
    static void _set_level2(uint8_t* value);
    // Get static field: static private readonly System.Byte* level3
    static uint8_t* _get_level3();
    // Set static field: static private readonly System.Byte* level3
    static void _set_level3(uint8_t* value);
    // Get static field: static private System.Byte* cjkCHScategory
    static uint8_t* _get_cjkCHScategory();
    // Set static field: static private System.Byte* cjkCHScategory
    static void _set_cjkCHScategory(uint8_t* value);
    // Get static field: static private System.Byte* cjkCHTcategory
    static uint8_t* _get_cjkCHTcategory();
    // Set static field: static private System.Byte* cjkCHTcategory
    static void _set_cjkCHTcategory(uint8_t* value);
    // Get static field: static private System.Byte* cjkJAcategory
    static uint8_t* _get_cjkJAcategory();
    // Set static field: static private System.Byte* cjkJAcategory
    static void _set_cjkJAcategory(uint8_t* value);
    // Get static field: static private System.Byte* cjkKOcategory
    static uint8_t* _get_cjkKOcategory();
    // Set static field: static private System.Byte* cjkKOcategory
    static void _set_cjkKOcategory(uint8_t* value);
    // Get static field: static private System.Byte* cjkCHSlv1
    static uint8_t* _get_cjkCHSlv1();
    // Set static field: static private System.Byte* cjkCHSlv1
    static void _set_cjkCHSlv1(uint8_t* value);
    // Get static field: static private System.Byte* cjkCHTlv1
    static uint8_t* _get_cjkCHTlv1();
    // Set static field: static private System.Byte* cjkCHTlv1
    static void _set_cjkCHTlv1(uint8_t* value);
    // Get static field: static private System.Byte* cjkJAlv1
    static uint8_t* _get_cjkJAlv1();
    // Set static field: static private System.Byte* cjkJAlv1
    static void _set_cjkJAlv1(uint8_t* value);
    // Get static field: static private System.Byte* cjkKOlv1
    static uint8_t* _get_cjkKOlv1();
    // Set static field: static private System.Byte* cjkKOlv1
    static void _set_cjkKOlv1(uint8_t* value);
    // Get static field: static private System.Byte* cjkKOlv2
    static uint8_t* _get_cjkKOlv2();
    // Set static field: static private System.Byte* cjkKOlv2
    static void _set_cjkKOlv2(uint8_t* value);
    // Get static field: static private readonly System.Char[] tailoringArr
    static ::Array<::Il2CppChar>* _get_tailoringArr();
    // Set static field: static private readonly System.Char[] tailoringArr
    static void _set_tailoringArr(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly Mono.Globalization.Unicode.TailoringInfo[] tailoringInfos
    static ::Array<Mono::Globalization::Unicode::TailoringInfo*>* _get_tailoringInfos();
    // Set static field: static private readonly Mono.Globalization.Unicode.TailoringInfo[] tailoringInfos
    static void _set_tailoringInfos(::Array<Mono::Globalization::Unicode::TailoringInfo*>* value);
    // Get static field: static private System.Object forLock
    static ::Il2CppObject* _get_forLock();
    // Set static field: static private System.Object forLock
    static void _set_forLock(::Il2CppObject* value);
    // Get static field: static public readonly System.Boolean isReady
    static bool _get_isReady();
    // Set static field: static public readonly System.Boolean isReady
    static void _set_isReady(bool value);
    // static public Mono.Globalization.Unicode.TailoringInfo GetTailoringInfo(System.Int32 lcid)
    // Offset: 0x1A572B8
    static Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(int lcid);
    // static public System.Void BuildTailoringTables(System.Globalization.CultureInfo culture, Mono.Globalization.Unicode.TailoringInfo t, ref Mono.Globalization.Unicode.Contraction[] contractions, ref Mono.Globalization.Unicode.Level2Map[] diacriticals)
    // Offset: 0x1A573E4
    static void BuildTailoringTables(System::Globalization::CultureInfo* culture, Mono::Globalization::Unicode::TailoringInfo* t, ::Array<Mono::Globalization::Unicode::Contraction*>*& contractions, ::Array<Mono::Globalization::Unicode::Level2Map*>*& diacriticals);
    // static private System.Void SetCJKReferences(System.String name, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref System.Byte* catTable, ref System.Byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref System.Byte* lv2Table)
    // Offset: 0x1A579B4
    static void SetCJKReferences(::Il2CppString* name, Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, uint8_t*& catTable, uint8_t*& lv1Table, Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, uint8_t*& lv2Table);
    // static public System.Byte Category(System.Int32 cp)
    // Offset: 0x1A57C44
    static uint8_t Category(int cp);
    // static public System.Byte Level1(System.Int32 cp)
    // Offset: 0x1A57CFC
    static uint8_t Level1(int cp);
    // static public System.Byte Level2(System.Int32 cp)
    // Offset: 0x1A57DB4
    static uint8_t Level2(int cp);
    // static public System.Byte Level3(System.Int32 cp)
    // Offset: 0x1A57E6C
    static uint8_t Level3(int cp);
    // static public System.Boolean IsIgnorable(System.Int32 cp, System.Byte flag)
    // Offset: 0x1A57F24
    static bool IsIgnorable(int cp, uint8_t flag);
    // static public System.Boolean IsIgnorableNonSpacing(System.Int32 cp)
    // Offset: 0x1A5804C
    static bool IsIgnorableNonSpacing(int cp);
    // static public System.Int32 ToKanaTypeInsensitive(System.Int32 i)
    // Offset: 0x1A580B4
    static int ToKanaTypeInsensitive(int i);
    // static public System.Int32 ToWidthCompat(System.Int32 i)
    // Offset: 0x1A580D4
    static int ToWidthCompat(int i);
    // static public System.Boolean HasSpecialWeight(System.Char c)
    // Offset: 0x1A5826C
    static bool HasSpecialWeight(::Il2CppChar c);
    // static public System.Boolean IsHalfWidthKana(System.Char c)
    // Offset: 0x1A58300
    static bool IsHalfWidthKana(::Il2CppChar c);
    // static public System.Boolean IsHiragana(System.Char c)
    // Offset: 0x1A58314
    static bool IsHiragana(::Il2CppChar c);
    // static public System.Boolean IsJapaneseSmallLetter(System.Char c)
    // Offset: 0x1A5832C
    static bool IsJapaneseSmallLetter(::Il2CppChar c);
    // static public System.Boolean get_IsReady()
    // Offset: 0x1A58418
    static bool get_IsReady();
    // static private System.IntPtr GetResource(System.String name)
    // Offset: 0x1A58480
    static System::IntPtr GetResource(::Il2CppString* name);
    // static private System.UInt32 UInt32FromBytePtr(System.Byte* raw, System.UInt32 idx)
    // Offset: 0x1A584FC
    static uint UInt32FromBytePtr(uint8_t* raw, uint idx);
    // static private System.Void .cctor()
    // Offset: 0x1A5852C
    static void _cctor();
    // static public System.Void FillCJK(System.String culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref System.Byte* catTable, ref System.Byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref System.Byte* lv2Table)
    // Offset: 0x1A589A8
    static void FillCJK(::Il2CppString* culture, Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, uint8_t*& catTable, uint8_t*& lv1Table, Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, uint8_t*& lv2Table);
    // static private System.Void FillCJKCore(System.String culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref System.Byte* catTable, ref System.Byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer, ref System.Byte* lv2Table)
    // Offset: 0x1A58AF4
    static void FillCJKCore(::Il2CppString* culture, Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, uint8_t*& catTable, uint8_t*& lv1Table, Mono::Globalization::Unicode::CodePointIndexer*& cjkLv2Indexer, uint8_t*& lv2Table);
  }; // Mono.Globalization.Unicode.MSCompatUnicodeTable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::MSCompatUnicodeTable*, "Mono.Globalization.Unicode", "MSCompatUnicodeTable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::GetTailoringInfo
// Il2CppName: GetTailoringInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Globalization::Unicode::TailoringInfo* (*)(int)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::GetTailoringInfo)> {
  const MethodInfo* get() {
    static auto* lcid = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "GetTailoringInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lcid});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::BuildTailoringTables
// Il2CppName: BuildTailoringTables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Globalization::CultureInfo*, Mono::Globalization::Unicode::TailoringInfo*, ::Array<Mono::Globalization::Unicode::Contraction*>*&, ::Array<Mono::Globalization::Unicode::Level2Map*>*&)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::BuildTailoringTables)> {
  const MethodInfo* get() {
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "TailoringInfo")->byval_arg;
    static auto* contractions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "Contraction"), 1)->this_arg;
    static auto* diacriticals = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "Level2Map"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "BuildTailoringTables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{culture, t, contractions, diacriticals});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::SetCJKReferences
// Il2CppName: SetCJKReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Mono::Globalization::Unicode::CodePointIndexer*&, uint8_t*&, uint8_t*&, Mono::Globalization::Unicode::CodePointIndexer*&, uint8_t*&)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::SetCJKReferences)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cjkIndexer = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "CodePointIndexer")->this_arg;
    static auto* catTable = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* lv1Table = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* lv2Indexer = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "CodePointIndexer")->this_arg;
    static auto* lv2Table = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "SetCJKReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::Category
// Il2CppName: Category
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::Category)> {
  const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "Category", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::Level1
// Il2CppName: Level1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::Level1)> {
  const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "Level1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::Level2
// Il2CppName: Level2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::Level2)> {
  const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "Level2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::Level3
// Il2CppName: Level3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::Level3)> {
  const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "Level3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorable
// Il2CppName: IsIgnorable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, uint8_t)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorable)> {
  const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "IsIgnorable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp, flag});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorableNonSpacing
// Il2CppName: IsIgnorableNonSpacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorableNonSpacing)> {
  const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "IsIgnorableNonSpacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::ToKanaTypeInsensitive
// Il2CppName: ToKanaTypeInsensitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::ToKanaTypeInsensitive)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "ToKanaTypeInsensitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::ToWidthCompat
// Il2CppName: ToWidthCompat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::ToWidthCompat)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "ToWidthCompat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::HasSpecialWeight
// Il2CppName: HasSpecialWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::HasSpecialWeight)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "HasSpecialWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHalfWidthKana
// Il2CppName: IsHalfWidthKana
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHalfWidthKana)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "IsHalfWidthKana", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHiragana
// Il2CppName: IsHiragana
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHiragana)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "IsHiragana", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::IsJapaneseSmallLetter
// Il2CppName: IsJapaneseSmallLetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::IsJapaneseSmallLetter)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "IsJapaneseSmallLetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::get_IsReady
// Il2CppName: get_IsReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::get_IsReady)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "get_IsReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::GetResource
// Il2CppName: GetResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Il2CppString*)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::GetResource)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "GetResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::UInt32FromBytePtr
// Il2CppName: UInt32FromBytePtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint8_t*, uint)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::UInt32FromBytePtr)> {
  const MethodInfo* get() {
    static auto* raw = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "UInt32FromBytePtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, idx});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJK
// Il2CppName: FillCJK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Mono::Globalization::Unicode::CodePointIndexer*&, uint8_t*&, uint8_t*&, Mono::Globalization::Unicode::CodePointIndexer*&, uint8_t*&)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJK)> {
  const MethodInfo* get() {
    static auto* culture = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cjkIndexer = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "CodePointIndexer")->this_arg;
    static auto* catTable = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* lv1Table = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* lv2Indexer = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "CodePointIndexer")->this_arg;
    static auto* lv2Table = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "FillCJK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJKCore
// Il2CppName: FillCJKCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Mono::Globalization::Unicode::CodePointIndexer*&, uint8_t*&, uint8_t*&, Mono::Globalization::Unicode::CodePointIndexer*&, uint8_t*&)>(&Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJKCore)> {
  const MethodInfo* get() {
    static auto* culture = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cjkIndexer = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "CodePointIndexer")->this_arg;
    static auto* catTable = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* lv1Table = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* cjkLv2Indexer = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "CodePointIndexer")->this_arg;
    static auto* lv2Table = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::MSCompatUnicodeTable*), "FillCJKCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{culture, cjkIndexer, catTable, lv1Table, cjkLv2Indexer, lv2Table});
  }
};
