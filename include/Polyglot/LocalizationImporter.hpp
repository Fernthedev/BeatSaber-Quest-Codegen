// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizationAsset
  class LocalizationAsset;
  // Forward declaring type: Localization
  class Localization;
  // Forward declaring type: GoogleDriveDownloadFormat
  struct GoogleDriveDownloadFormat;
  // Forward declaring type: LocalizationDocument
  class LocalizationDocument;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LocalizationImporter
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalizationImporter : public ::Il2CppObject {
    public:
    // Nested type: Polyglot::LocalizationImporter::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Polyglot::LocalizationImporter::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Creating value type constructor for type: LocalizationImporter
    LocalizationImporter() noexcept {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> languageStrings
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* _get_languageStrings();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> languageStrings
    static void _set_languageStrings(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* value);
    // Get static field: static private System.Collections.Generic.List`1<System.String> EmptyList
    static System::Collections::Generic::List_1<::Il2CppString*>* _get_EmptyList();
    // Set static field: static private System.Collections.Generic.List`1<System.String> EmptyList
    static void _set_EmptyList(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // Get static field: static private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> InputFiles
    static System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* _get_InputFiles();
    // Set static field: static private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> InputFiles
    static void _set_InputFiles(System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* value);
    // static private System.Void .cctor()
    // Offset: 0x237C8A0
    static void _cctor();
    // static private System.Void Initialize()
    // Offset: 0x237C974
    static void Initialize();
    // static private System.Void ImportFromGoogle(Polyglot.Localization settings)
    // Offset: 0x237CB28
    static void ImportFromGoogle(Polyglot::Localization* settings);
    // static private System.Void Import(System.String text, Polyglot.GoogleDriveDownloadFormat format)
    // Offset: 0x237CC4C
    static void Import(::Il2CppString* text, Polyglot::GoogleDriveDownloadFormat format);
    // static private System.Collections.IEnumerator Download(Polyglot.LocalizationDocument document, System.Action`1<System.String> done, System.Func`2<System.Single,System.Boolean> progressbar)
    // Offset: 0x237CC24
    static System::Collections::IEnumerator* Download(Polyglot::LocalizationDocument* document, System::Action_1<::Il2CppString*>* done, System::Func_2<float, bool>* progressbar);
    // static public System.Collections.IEnumerator DownloadCustomSheet(System.Func`2<System.Single,System.Boolean> progressbar)
    // Offset: 0x237D138
    static System::Collections::IEnumerator* DownloadCustomSheet(System::Func_2<float, bool>* progressbar);
    // static private System.Void ImportFromFiles(Polyglot.Localization settings)
    // Offset: 0x237CA7C
    static void ImportFromFiles(Polyglot::Localization* settings);
    // static private System.Void ImportInputFiles()
    // Offset: 0x237D2A0
    static void ImportInputFiles();
    // static private System.Void ImportTextFile(System.String text, Polyglot.GoogleDriveDownloadFormat format)
    // Offset: 0x237CCC0
    static void ImportTextFile(::Il2CppString* text, Polyglot::GoogleDriveDownloadFormat format);
    // static public System.Boolean IsLineBreak(System.String currentString)
    // Offset: 0x237C36C
    static bool IsLineBreak(::Il2CppString* currentString);
    // static public System.Collections.Generic.List`1<System.String> GetLanguages(System.String key, System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages)
    // Offset: 0x237BA74
    static System::Collections::Generic::List_1<::Il2CppString*>* GetLanguages(::Il2CppString* key, System::Collections::Generic::List_1<Polyglot::Language>* supportedLanguages);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> GetLanguagesStartsWith(System.String key)
    // Offset: 0x237D634
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* GetLanguagesStartsWith(::Il2CppString* key);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> GetLanguagesContains(System.String key)
    // Offset: 0x237D8A4
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* GetLanguagesContains(::Il2CppString* key);
    // static public System.Void Refresh()
    // Offset: 0x237DB14
    static void Refresh();
    // static public System.Collections.Generic.List`1<System.String> GetKeys()
    // Offset: 0x237C51C
    static System::Collections::Generic::List_1<::Il2CppString*>* GetKeys();
  }; // Polyglot.LocalizationImporter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationImporter*, "Polyglot", "LocalizationImporter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Polyglot::LocalizationImporter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Polyglot::LocalizationImporter::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::ImportFromGoogle
// Il2CppName: ImportFromGoogle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Polyglot::Localization*)>(&Polyglot::LocalizationImporter::ImportFromGoogle)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("Polyglot", "Localization")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "ImportFromGoogle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Polyglot::GoogleDriveDownloadFormat)>(&Polyglot::LocalizationImporter::Import)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("Polyglot", "GoogleDriveDownloadFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, format});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::Download
// Il2CppName: Download
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (*)(Polyglot::LocalizationDocument*, System::Action_1<::Il2CppString*>*, System::Func_2<float, bool>*)>(&Polyglot::LocalizationImporter::Download)> {
  static const MethodInfo* get() {
    static auto* document = &::il2cpp_utils::GetClassFromName("Polyglot", "LocalizationDocument")->byval_arg;
    static auto* done = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* progressbar = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "Download", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{document, done, progressbar});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::DownloadCustomSheet
// Il2CppName: DownloadCustomSheet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (*)(System::Func_2<float, bool>*)>(&Polyglot::LocalizationImporter::DownloadCustomSheet)> {
  static const MethodInfo* get() {
    static auto* progressbar = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "DownloadCustomSheet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progressbar});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::ImportFromFiles
// Il2CppName: ImportFromFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Polyglot::Localization*)>(&Polyglot::LocalizationImporter::ImportFromFiles)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("Polyglot", "Localization")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "ImportFromFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::ImportInputFiles
// Il2CppName: ImportInputFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Polyglot::LocalizationImporter::ImportInputFiles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "ImportInputFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::ImportTextFile
// Il2CppName: ImportTextFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Polyglot::GoogleDriveDownloadFormat)>(&Polyglot::LocalizationImporter::ImportTextFile)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("Polyglot", "GoogleDriveDownloadFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "ImportTextFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, format});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::IsLineBreak
// Il2CppName: IsLineBreak
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Polyglot::LocalizationImporter::IsLineBreak)> {
  static const MethodInfo* get() {
    static auto* currentString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "IsLineBreak", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentString});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::GetLanguages
// Il2CppName: GetLanguages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppString*>* (*)(::Il2CppString*, System::Collections::Generic::List_1<Polyglot::Language>*)>(&Polyglot::LocalizationImporter::GetLanguages)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* supportedLanguages = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Polyglot", "Language")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "GetLanguages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, supportedLanguages});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::GetLanguagesStartsWith
// Il2CppName: GetLanguagesStartsWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* (*)(::Il2CppString*)>(&Polyglot::LocalizationImporter::GetLanguagesStartsWith)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "GetLanguagesStartsWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::GetLanguagesContains
// Il2CppName: GetLanguagesContains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* (*)(::Il2CppString*)>(&Polyglot::LocalizationImporter::GetLanguagesContains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "GetLanguagesContains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Polyglot::LocalizationImporter::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::GetKeys
// Il2CppName: GetKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppString*>* (*)()>(&Polyglot::LocalizationImporter::GetKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter*), "GetKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
