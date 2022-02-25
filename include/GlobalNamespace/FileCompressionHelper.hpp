// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FileCompressionHelper
  class FileCompressionHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FileCompressionHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileCompressionHelper*, "", "FileCompressionHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FileCompressionHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class FileCompressionHelper : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: GlobalNamespace::FileCompressionHelper::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // static public System.Void CreateZipFromDirectoryAsync(System.String sourceDirectoryName, System.String destinationArchiveFileName, System.Action`1<System.Boolean> finishCallback)
    // Offset: 0x2C1CC5C
    static void CreateZipFromDirectoryAsync(::StringW sourceDirectoryName, ::StringW destinationArchiveFileName, System::Action_1<bool>* finishCallback);
    // static public System.Void ExtractZipToDirectoryAsync(System.String sourceArchiveFileName, System.String destinationDirectoryName, System.Action`1<System.Boolean> finishCallback)
    // Offset: 0x2C1CF34
    static void ExtractZipToDirectoryAsync(::StringW sourceArchiveFileName, ::StringW destinationDirectoryName, System::Action_1<bool>* finishCallback);
    // static public System.Boolean CreateZipFromDirectory(System.String sourceDirectoryName, System.String destinationArchiveFileName)
    // Offset: 0x2C1D034
    static bool CreateZipFromDirectory(::StringW sourceDirectoryName, ::StringW destinationArchiveFileName);
    // static public System.Boolean ExtractZipToDirectory(System.String sourceArchiveFileName, System.String destinationDirectoryName)
    // Offset: 0x2C1D0D4
    static bool ExtractZipToDirectory(::StringW sourceArchiveFileName, ::StringW destinationDirectoryName);
    // public System.Void .ctor()
    // Offset: 0x2C1D174
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileCompressionHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileCompressionHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileCompressionHelper*, creationType>()));
    }
  }; // FileCompressionHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::CreateZipFromDirectoryAsync
// Il2CppName: CreateZipFromDirectoryAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, System::Action_1<bool>*)>(&GlobalNamespace::FileCompressionHelper::CreateZipFromDirectoryAsync)> {
  static const MethodInfo* get() {
    static auto* sourceDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* finishCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileCompressionHelper*), "CreateZipFromDirectoryAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceDirectoryName, destinationArchiveFileName, finishCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::ExtractZipToDirectoryAsync
// Il2CppName: ExtractZipToDirectoryAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, System::Action_1<bool>*)>(&GlobalNamespace::FileCompressionHelper::ExtractZipToDirectoryAsync)> {
  static const MethodInfo* get() {
    static auto* sourceArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* finishCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileCompressionHelper*), "ExtractZipToDirectoryAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceArchiveFileName, destinationDirectoryName, finishCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::CreateZipFromDirectory
// Il2CppName: CreateZipFromDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&GlobalNamespace::FileCompressionHelper::CreateZipFromDirectory)> {
  static const MethodInfo* get() {
    static auto* sourceDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileCompressionHelper*), "CreateZipFromDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceDirectoryName, destinationArchiveFileName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::ExtractZipToDirectory
// Il2CppName: ExtractZipToDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&GlobalNamespace::FileCompressionHelper::ExtractZipToDirectory)> {
  static const MethodInfo* get() {
    static auto* sourceArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileCompressionHelper*), "ExtractZipToDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceArchiveFileName, destinationDirectoryName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileCompressionHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
