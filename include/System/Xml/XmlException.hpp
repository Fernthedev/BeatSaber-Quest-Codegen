// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlException
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlException : public System::SystemException {
    public:
    // private System.String res
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* res;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] args
    // Size: 0x8
    // Offset: 0x90
    ::Array<::Il2CppString*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x98
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePosition
    // Size: 0x4
    // Offset: 0x9C
    int linePosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xDA5FD8
    // private System.String sourceUri
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* sourceUri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String message
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: XmlException
    XmlException(::Il2CppString* res_ = {}, ::Array<::Il2CppString*>* args_ = {}, int lineNumber_ = {}, int linePosition_ = {}, ::Il2CppString* sourceUri_ = {}, ::Il2CppString* message_ = {}) noexcept : res{res_}, args{args_}, lineNumber{lineNumber_}, linePosition{linePosition_}, sourceUri{sourceUri_}, message{message_} {}
    // Get instance field: private System.String res
    ::Il2CppString* _get_res();
    // Set instance field: private System.String res
    void _set_res(::Il2CppString* value);
    // Get instance field: private System.String[] args
    ::Array<::Il2CppString*>* _get_args();
    // Set instance field: private System.String[] args
    void _set_args(::Array<::Il2CppString*>* value);
    // Get instance field: private System.Int32 lineNumber
    int _get_lineNumber();
    // Set instance field: private System.Int32 lineNumber
    void _set_lineNumber(int value);
    // Get instance field: private System.Int32 linePosition
    int _get_linePosition();
    // Set instance field: private System.Int32 linePosition
    void _set_linePosition(int value);
    // Get instance field: private System.String sourceUri
    ::Il2CppString* _get_sourceUri();
    // Set instance field: private System.String sourceUri
    void _set_sourceUri(::Il2CppString* value);
    // Get instance field: private System.String message
    ::Il2CppString* _get_message();
    // Set instance field: private System.String message
    void _set_message(::Il2CppString* value);
    // public System.Void .ctor(System.String message, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x195D664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* message, System::Exception* innerException, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message, innerException, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String message, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition, System.String sourceUri)
    // Offset: 0x195D66C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* message, System::Exception* innerException, int lineNumber, int linePosition, ::Il2CppString* sourceUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message, innerException, lineNumber, linePosition, sourceUri)));
    }
    // System.Void .ctor(System.String res, System.String[] args)
    // Offset: 0x195D884
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Array<::Il2CppString*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args)));
    }
    // System.Void .ctor(System.String res, System.String arg)
    // Offset: 0x1955498
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Il2CppString* arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, arg)));
    }
    // System.Void .ctor(System.String res, System.String arg, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x19590F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Il2CppString* arg, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, arg, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String[] args, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x1959274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Array<::Il2CppString*>* args, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String[] args, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition, System.String sourceUri)
    // Offset: 0x195D8EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Array<::Il2CppString*>* args, System::Exception* innerException, int lineNumber, int linePosition, ::Il2CppString* sourceUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args, innerException, lineNumber, linePosition, sourceUri)));
    }
    // static private System.String FormatUserMessage(System.String message, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x195D794
    static ::Il2CppString* FormatUserMessage(::Il2CppString* message, int lineNumber, int linePosition);
    // static private System.String CreateMessage(System.String res, System.String[] args, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x195D274
    static ::Il2CppString* CreateMessage(::Il2CppString* res, ::Array<::Il2CppString*>* args, int lineNumber, int linePosition);
    // static System.String[] BuildCharExceptionArgs(System.String data, System.Int32 invCharIndex)
    // Offset: 0x1958D34
    static ::Array<::Il2CppString*>* BuildCharExceptionArgs(::Il2CppString* data, int invCharIndex);
    // static System.String[] BuildCharExceptionArgs(System.Char invChar, System.Char nextChar)
    // Offset: 0x1959800
    static ::Array<::Il2CppString*>* BuildCharExceptionArgs(::Il2CppChar invChar, ::Il2CppChar nextChar);
    // public override System.String get_Message()
    // Offset: 0x195D978
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x195CF5C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(info, context)));
    }
    // public System.Void .ctor()
    // Offset: 0x195D638
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x195D650
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x195D510
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Xml.XmlException
  #pragma pack(pop)
  static check_size<sizeof(XmlException), 168 + sizeof(::Il2CppString*)> __System_Xml_XmlExceptionSizeCheck;
  static_assert(sizeof(XmlException) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlException*, "System.Xml", "XmlException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::FormatUserMessage
// Il2CppName: FormatUserMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, int, int)>(&System::Xml::XmlException::FormatUserMessage)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lineNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "FormatUserMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, lineNumber, linePosition});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::CreateMessage
// Il2CppName: CreateMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Array<::Il2CppString*>*, int, int)>(&System::Xml::XmlException::CreateMessage)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* lineNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "CreateMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res, args, lineNumber, linePosition});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::BuildCharExceptionArgs
// Il2CppName: BuildCharExceptionArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, int)>(&System::Xml::XmlException::BuildCharExceptionArgs)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* invCharIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "BuildCharExceptionArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, invCharIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::BuildCharExceptionArgs
// Il2CppName: BuildCharExceptionArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlException::BuildCharExceptionArgs)> {
  static const MethodInfo* get() {
    static auto* invChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* nextChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "BuildCharExceptionArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invChar, nextChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlException::*)()>(&System::Xml::XmlException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Xml::XmlException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
