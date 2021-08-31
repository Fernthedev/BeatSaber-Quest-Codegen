// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SFB.ExtensionFilter
#include "SFB/ExtensionFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: SFB
namespace SFB {
  // Forward declaring type: IStandaloneFileBrowser
  class IStandaloneFileBrowser;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: SFB
namespace SFB {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SFB.StandaloneFileBrowser
  // [TokenAttribute] Offset: FFFFFFFF
  class StandaloneFileBrowser : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StandaloneFileBrowser
    StandaloneFileBrowser() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE4684C
    // Get static field: static private readonly SFB.IStandaloneFileBrowser _platformWrapper
    static SFB::IStandaloneFileBrowser* _get__platformWrapper();
    // Set static field: static private readonly SFB.IStandaloneFileBrowser _platformWrapper
    static void _set__platformWrapper(SFB::IStandaloneFileBrowser* value);
    // static private System.Void .cctor()
    // Offset: 0x118F060
    static void _cctor();
    // static public System.String[] OpenFilePanel(System.String title, System.String directory, System.String extension, System.Boolean multiselect)
    // Offset: 0x118F064
    static ::Array<::Il2CppString*>* OpenFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* extension, bool multiselect);
    // static public System.String[] OpenFilePanel(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect)
    // Offset: 0x118F198
    static ::Array<::Il2CppString*>* OpenFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect);
    // static public System.Void OpenFilePanelAsync(System.String title, System.String directory, System.String extension, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0x118F29C
    static void OpenFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* extension, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb);
    // static public System.Void OpenFilePanelAsync(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0x118F3E0
    static void OpenFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb);
    // static public System.String[] OpenFolderPanel(System.String title, System.String directory, System.Boolean multiselect)
    // Offset: 0x118F4F0
    static ::Array<::Il2CppString*>* OpenFolderPanel(::Il2CppString* title, ::Il2CppString* directory, bool multiselect);
    // static public System.Void OpenFolderPanelAsync(System.String title, System.String directory, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0x118F5E8
    static void OpenFolderPanelAsync(::Il2CppString* title, ::Il2CppString* directory, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb);
    // static public System.String SaveFilePanel(System.String title, System.String directory, System.String defaultName, System.String extension)
    // Offset: 0x118F6F0
    static ::Il2CppString* SaveFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Il2CppString* extension);
    // static public System.String SaveFilePanel(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions)
    // Offset: 0x118F824
    static ::Il2CppString* SaveFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions);
    // static public System.Void SaveFilePanelAsync(System.String title, System.String directory, System.String defaultName, System.String extension, System.Action`1<System.String> cb)
    // Offset: 0x118F92C
    static void SaveFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Il2CppString* extension, System::Action_1<::Il2CppString*>* cb);
    // static public System.Void SaveFilePanelAsync(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions, System.Action`1<System.String> cb)
    // Offset: 0x118FA70
    static void SaveFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions, System::Action_1<::Il2CppString*>* cb);
    // public System.Void .ctor()
    // Offset: 0x118FB80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneFileBrowser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("SFB::StandaloneFileBrowser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneFileBrowser*, creationType>()));
    }
  }; // SFB.StandaloneFileBrowser
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(SFB::StandaloneFileBrowser*, "SFB", "StandaloneFileBrowser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&SFB::StandaloneFileBrowser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFilePanel
// Il2CppName: OpenFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, bool)>(&SFB::StandaloneFileBrowser::OpenFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extension, multiselect});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFilePanel
// Il2CppName: OpenFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*, ::Array<SFB::ExtensionFilter>*, bool)>(&SFB::StandaloneFileBrowser::OpenFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extensions, multiselect});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFilePanelAsync
// Il2CppName: OpenFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, bool, System::Action_1<::Array<::Il2CppString*>*>*)>(&SFB::StandaloneFileBrowser::OpenFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extension, multiselect, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFilePanelAsync
// Il2CppName: OpenFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*, ::Array<SFB::ExtensionFilter>*, bool, System::Action_1<::Array<::Il2CppString*>*>*)>(&SFB::StandaloneFileBrowser::OpenFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, extensions, multiselect, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFolderPanel
// Il2CppName: OpenFolderPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*, bool)>(&SFB::StandaloneFileBrowser::OpenFolderPanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFolderPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, multiselect});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::OpenFolderPanelAsync
// Il2CppName: OpenFolderPanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*, bool, System::Action_1<::Array<::Il2CppString*>*>*)>(&SFB::StandaloneFileBrowser::OpenFolderPanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiselect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "OpenFolderPanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, multiselect, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::SaveFilePanel
// Il2CppName: SaveFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&SFB::StandaloneFileBrowser::SaveFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "SaveFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extension});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::SaveFilePanel
// Il2CppName: SaveFilePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Array<SFB::ExtensionFilter>*)>(&SFB::StandaloneFileBrowser::SaveFilePanel)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "SaveFilePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extensions});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::SaveFilePanelAsync
// Il2CppName: SaveFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, System::Action_1<::Il2CppString*>*)>(&SFB::StandaloneFileBrowser::SaveFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "SaveFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extension, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::SaveFilePanelAsync
// Il2CppName: SaveFilePanelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Array<SFB::ExtensionFilter>*, System::Action_1<::Il2CppString*>*)>(&SFB::StandaloneFileBrowser::SaveFilePanelAsync)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("SFB", "ExtensionFilter"), 1)->byval_arg;
    static auto* cb = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SFB::StandaloneFileBrowser*), "SaveFilePanelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, directory, defaultName, extensions, cb});
  }
};
// Writing MetadataGetter for method: SFB::StandaloneFileBrowser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
