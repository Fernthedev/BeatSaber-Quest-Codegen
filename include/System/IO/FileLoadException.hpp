// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileLoadException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9BAA8
  class FileLoadException : public System::IO::IOException {
    public:
    // private System.String _fileName
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* fileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _fusionLog
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* fusionLog;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: FileLoadException
    FileLoadException(::Il2CppString* fileName_ = {}, ::Il2CppString* fusionLog_ = {}) noexcept : fileName{fileName_}, fusionLog{fusionLog_} {}
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // Get instance field reference: private System.String _fileName
    ::Il2CppString*& dyn__fileName();
    // Get instance field reference: private System.String _fusionLog
    ::Il2CppString*& dyn__fusionLog();
    // public System.String get_FusionLog()
    // Offset: 0x1970564
    ::Il2CppString* get_FusionLog();
    // private System.Void SetMessageField()
    // Offset: 0x19700CC
    void SetMessageField();
    // static System.String FormatFileLoadExceptionMessage(System.String fileName, System.Int32 hResult)
    // Offset: 0x1970100
    static ::Il2CppString* FormatFileLoadExceptionMessage(::Il2CppString* fileName, int hResult);
    // public override System.String get_Message()
    // Offset: 0x197009C
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // public System.Void .ctor()
    // Offset: 0x196FFC4
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileLoadException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileLoadException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1970050
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileLoadException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileLoadException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x197043C
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileLoadException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileLoadException*, creationType>(info, context)));
    }
    // public override System.String ToString()
    // Offset: 0x197017C
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::Il2CppString* ToString();
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x197056C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.IO.FileLoadException
  #pragma pack(pop)
  static check_size<sizeof(FileLoadException), 152 + sizeof(::Il2CppString*)> __System_IO_FileLoadExceptionSizeCheck;
  static_assert(sizeof(FileLoadException) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileLoadException*, "System.IO", "FileLoadException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileLoadException::get_FusionLog
// Il2CppName: get_FusionLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::FileLoadException::*)()>(&System::IO::FileLoadException::get_FusionLog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileLoadException*), "get_FusionLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileLoadException::SetMessageField
// Il2CppName: SetMessageField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileLoadException::*)()>(&System::IO::FileLoadException::SetMessageField)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileLoadException*), "SetMessageField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileLoadException::FormatFileLoadExceptionMessage
// Il2CppName: FormatFileLoadExceptionMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, int)>(&System::IO::FileLoadException::FormatFileLoadExceptionMessage)> {
  static const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hResult = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileLoadException*), "FormatFileLoadExceptionMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName, hResult});
  }
};
// Writing MetadataGetter for method: System::IO::FileLoadException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::FileLoadException::*)()>(&System::IO::FileLoadException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileLoadException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileLoadException::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::FileLoadException::*)()>(&System::IO::FileLoadException::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileLoadException*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileLoadException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileLoadException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::IO::FileLoadException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileLoadException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
