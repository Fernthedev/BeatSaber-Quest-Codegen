// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Char
#include "System/Char.hpp"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AlphabetScrollbarInfoBeatmapLevelHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class AlphabetScrollbarInfoBeatmapLevelHelper : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c
    class $$c;
    // Creating value type constructor for type: AlphabetScrollbarInfoBeatmapLevelHelper
    AlphabetScrollbarInfoBeatmapLevelHelper() noexcept {}
    // static field const value: static private System.String kFirstAlphabet
    static constexpr const char* kFirstAlphabet = "A";
    // Get static field: static private System.String kFirstAlphabet
    static ::Il2CppString* _get_kFirstAlphabet();
    // Set static field: static private System.String kFirstAlphabet
    static void _set_kFirstAlphabet(::Il2CppString* value);
    // static field const value: static private System.Char kNonAlphabetChar
    static constexpr const ::Il2CppChar kNonAlphabetChar = u'#';
    // Get static field: static private System.Char kNonAlphabetChar
    static ::Il2CppChar _get_kNonAlphabetChar();
    // Set static field: static private System.Char kNonAlphabetChar
    static void _set_kNonAlphabetChar(::Il2CppChar value);
    // static field const value: static private System.Int32 kMaxCharactersCount
    static constexpr const int kMaxCharactersCount = 28;
    // Get static field: static private System.Int32 kMaxCharactersCount
    static int _get_kMaxCharactersCount();
    // Set static field: static private System.Int32 kMaxCharactersCount
    static void _set_kMaxCharactersCount(int value);
    // static public AlphabetScrollInfo/Data[] CreateData(IPreviewBeatmapLevel[] previewBeatmapLevels, out IPreviewBeatmapLevel[] sortedPreviewBeatmapLevels)
    // Offset: 0x1172178
    static ::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* CreateData(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels, ByRef<::Array<GlobalNamespace::IPreviewBeatmapLevel*>*> sortedPreviewBeatmapLevels);
  }; // AlphabetScrollbarInfoBeatmapLevelHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper*, "", "AlphabetScrollbarInfoBeatmapLevelHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::CreateData
// Il2CppName: CreateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* (*)(::Array<GlobalNamespace::IPreviewBeatmapLevel*>*, ByRef<::Array<GlobalNamespace::IPreviewBeatmapLevel*>*>)>(&GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::CreateData)> {
  static const MethodInfo* get() {
    static auto* previewBeatmapLevels = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel"), 1)->byval_arg;
    static auto* sortedPreviewBeatmapLevels = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper*), "CreateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewBeatmapLevels, sortedPreviewBeatmapLevels});
  }
};
