// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: CodePointIndexer
  class CodePointIndexer;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.NormalizationTableUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class NormalizationTableUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NormalizationTableUtil
    NormalizationTableUtil() noexcept {}
    // Get static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Prop
    static Mono::Globalization::Unicode::CodePointIndexer* _get_Prop();
    // Set static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Prop
    static void _set_Prop(Mono::Globalization::Unicode::CodePointIndexer* value);
    // Get static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Map
    static Mono::Globalization::Unicode::CodePointIndexer* _get_Map();
    // Set static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Map
    static void _set_Map(Mono::Globalization::Unicode::CodePointIndexer* value);
    // Get static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Combining
    static Mono::Globalization::Unicode::CodePointIndexer* _get_Combining();
    // Set static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Combining
    static void _set_Combining(Mono::Globalization::Unicode::CodePointIndexer* value);
    // Get static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Composite
    static Mono::Globalization::Unicode::CodePointIndexer* _get_Composite();
    // Set static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Composite
    static void _set_Composite(Mono::Globalization::Unicode::CodePointIndexer* value);
    // Get static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Helper
    static Mono::Globalization::Unicode::CodePointIndexer* _get_Helper();
    // Set static field: static public readonly Mono.Globalization.Unicode.CodePointIndexer Helper
    static void _set_Helper(Mono::Globalization::Unicode::CodePointIndexer* value);
    // static private System.Void .cctor()
    // Offset: 0x1A6B5E4
    static void _cctor();
    // static public System.Int32 PropIdx(System.Int32 cp)
    // Offset: 0x1A6B8A4
    static int PropIdx(int cp);
    // static public System.Int32 MapIdx(System.Int32 cp)
    // Offset: 0x1A6B91C
    static int MapIdx(int cp);
  }; // Mono.Globalization.Unicode.NormalizationTableUtil
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::NormalizationTableUtil*, "Mono.Globalization.Unicode", "NormalizationTableUtil");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::NormalizationTableUtil::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Globalization::Unicode::NormalizationTableUtil::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::NormalizationTableUtil*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::NormalizationTableUtil::PropIdx
// Il2CppName: PropIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Mono::Globalization::Unicode::NormalizationTableUtil::PropIdx)> {
  static const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::NormalizationTableUtil*), "PropIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::NormalizationTableUtil::MapIdx
// Il2CppName: MapIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Mono::Globalization::Unicode::NormalizationTableUtil::MapIdx)> {
  static const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::NormalizationTableUtil*), "MapIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
