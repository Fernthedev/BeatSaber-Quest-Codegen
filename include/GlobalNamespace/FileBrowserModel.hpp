// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FileBrowserItem
  class FileBrowserItem;
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
  // Forward declaring type: FileBrowserModel
  class FileBrowserModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FileBrowserModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserModel*, "", "FileBrowserModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FileBrowserModel
  // [TokenAttribute] Offset: FFFFFFFF
  class FileBrowserModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // static public System.Void GetContentOfDirectory(System.String direcotryPath, System.String[] extensions, System.Action`1<FileBrowserItem[]> callback)
    // Offset: 0x13FED58
    static void GetContentOfDirectory(::StringW direcotryPath, ::ArrayW<::StringW> extensions, System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem*>>* callback);
    // static private FileBrowserItem[] GetContentOfDirectory(System.String directoryPath, System.String[] extensions)
    // Offset: 0x13FEE5C
    static ::ArrayW<GlobalNamespace::FileBrowserItem*> GetContentOfDirectory(::StringW directoryPath, ::ArrayW<::StringW> extensions);
    // static private System.Boolean CanOpenDirectory(System.String path)
    // Offset: 0x13FF228
    static bool CanOpenDirectory(::StringW path);
  }; // FileBrowserModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::GetContentOfDirectory
// Il2CppName: GetContentOfDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::StringW>, System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem*>>*)>(&GlobalNamespace::FileBrowserModel::GetContentOfDirectory)> {
  static const MethodInfo* get() {
    static auto* direcotryPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "FileBrowserItem"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserModel*), "GetContentOfDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direcotryPath, extensions, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::GetContentOfDirectory
// Il2CppName: GetContentOfDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::FileBrowserItem*> (*)(::StringW, ::ArrayW<::StringW>)>(&GlobalNamespace::FileBrowserModel::GetContentOfDirectory)> {
  static const MethodInfo* get() {
    static auto* directoryPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserModel*), "GetContentOfDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{directoryPath, extensions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::CanOpenDirectory
// Il2CppName: CanOpenDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&GlobalNamespace::FileBrowserModel::CanOpenDirectory)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserModel*), "CanOpenDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
