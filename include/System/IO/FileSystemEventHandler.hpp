// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemEventArgs
  class FileSystemEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystemEventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: FileSystemEventHandler
    FileSystemEventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18C3A70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.IO.FileSystemEventArgs e)
    // Offset: 0x18C3A80
    void Invoke(::Il2CppObject* sender, System::IO::FileSystemEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.IO.FileSystemEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18C3E68
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::IO::FileSystemEventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18C3E98
    void EndInvoke(System::IAsyncResult* result);
  }; // System.IO.FileSystemEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemEventHandler*, "System.IO", "FileSystemEventHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileSystemEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileSystemEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemEventHandler::*)(::Il2CppObject*, System::IO::FileSystemEventArgs*)>(&System::IO::FileSystemEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::IO::FileSystemEventHandler::*)(::Il2CppObject*, System::IO::FileSystemEventArgs*, System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::FileSystemEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemEventHandler::*)(System::IAsyncResult*)>(&System::IO::FileSystemEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
