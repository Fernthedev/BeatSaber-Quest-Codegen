// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BookmarksFoldersModel
#include "GlobalNamespace/BookmarksFoldersModel.hpp"
// Including type: System.Environment/System.SpecialFolder
#include "System/Environment_SpecialFolder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BookmarksFoldersModel/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BookmarksFoldersModel::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly BookmarksFoldersModel/<>c <>9
    static GlobalNamespace::BookmarksFoldersModel::$$c* _get_$$9();
    // Set static field: static public readonly BookmarksFoldersModel/<>c <>9
    static void _set_$$9(GlobalNamespace::BookmarksFoldersModel::$$c* value);
    // Get static field: static public System.Func`2<System.Environment/System.SpecialFolder,System.String> <>9__3_0
    static System::Func_2<System::Environment::SpecialFolder, ::Il2CppString*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<System.Environment/System.SpecialFolder,System.String> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<System::Environment::SpecialFolder, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x10DA96C
    static void _cctor();
    // System.String <get_bookmarksFolders>b__3_0(System.Environment/System.SpecialFolder specialFolder)
    // Offset: 0x10DA9D8
    ::Il2CppString* $get_bookmarksFolders$b__3_0(System::Environment::SpecialFolder specialFolder);
    // public System.Void .ctor()
    // Offset: 0x10DA9D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BookmarksFoldersModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BookmarksFoldersModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BookmarksFoldersModel::$$c*, creationType>()));
    }
  }; // BookmarksFoldersModel/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BookmarksFoldersModel::$$c*, "", "BookmarksFoldersModel/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BookmarksFoldersModel::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BookmarksFoldersModel::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BookmarksFoldersModel::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BookmarksFoldersModel::$$c::$get_bookmarksFolders$b__3_0
// Il2CppName: <get_bookmarksFolders>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BookmarksFoldersModel::$$c::*)(System::Environment::SpecialFolder)>(&GlobalNamespace::BookmarksFoldersModel::$$c::$get_bookmarksFolders$b__3_0)> {
  static const MethodInfo* get() {
    static auto* specialFolder = &::il2cpp_utils::GetClassFromName("System", "Environment/SpecialFolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BookmarksFoldersModel::$$c*), "<get_bookmarksFolders>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{specialFolder});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BookmarksFoldersModel::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
