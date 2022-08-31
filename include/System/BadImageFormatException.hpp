// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Type namespace: System
namespace System {
  // Forward declaring type: BadImageFormatException
  class BadImageFormatException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::BadImageFormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::BadImageFormatException*, "System", "BadImageFormatException");
// Type namespace: System
namespace System {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.BadImageFormatException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 103EF08
  class BadImageFormatException : public ::System::SystemException {
    public:
    public:
    // private System.String _fileName
    // Size: 0x8
    // Offset: 0x88
    ::StringW fileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _fusionLog
    // Size: 0x8
    // Offset: 0x90
    ::StringW fusionLog;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _fileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__fileName();
    // Get instance field reference: private System.String _fusionLog
    [[deprecated("Use field access instead!")]] ::StringW& dyn__fusionLog();
    // public System.String get_FusionLog()
    // Offset: 0x1EB7F9C
    ::StringW get_FusionLog();
    // public System.Void .ctor(System.String message, System.String fileName)
    // Offset: 0x1EB7AC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadImageFormatException* New_ctor(::StringW message, ::StringW fileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::BadImageFormatException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadImageFormatException*, creationType>(message, fileName)));
    }
    // private System.Void SetMessageField()
    // Offset: 0x1EB7B2C
    void SetMessageField();
    // public override System.String get_Message()
    // Offset: 0x1EB7B08
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
    // public System.Void .ctor()
    // Offset: 0x1EB79EC
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadImageFormatException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::BadImageFormatException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadImageFormatException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1EB7A60
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadImageFormatException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::BadImageFormatException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadImageFormatException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x1EB7A94
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadImageFormatException* New_ctor(::StringW message, ::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::BadImageFormatException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadImageFormatException*, creationType>(message, inner)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1EB7E74
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadImageFormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::BadImageFormatException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadImageFormatException*, creationType>(info, context)));
    }
    // public override System.String ToString()
    // Offset: 0x1EB7BB4
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::StringW ToString();
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1EB7FA4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.BadImageFormatException
  #pragma pack(pop)
  static check_size<sizeof(BadImageFormatException), 144 + sizeof(::StringW)> __System_BadImageFormatExceptionSizeCheck;
  static_assert(sizeof(BadImageFormatException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::BadImageFormatException::get_FusionLog
// Il2CppName: get_FusionLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::BadImageFormatException::*)()>(&System::BadImageFormatException::get_FusionLog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::BadImageFormatException*), "get_FusionLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::BadImageFormatException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::BadImageFormatException::SetMessageField
// Il2CppName: SetMessageField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::BadImageFormatException::*)()>(&System::BadImageFormatException::SetMessageField)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::BadImageFormatException*), "SetMessageField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::BadImageFormatException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::BadImageFormatException::*)()>(&System::BadImageFormatException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::BadImageFormatException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::BadImageFormatException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::BadImageFormatException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::BadImageFormatException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::BadImageFormatException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::BadImageFormatException::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::BadImageFormatException::*)()>(&System::BadImageFormatException::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::BadImageFormatException*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::BadImageFormatException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::BadImageFormatException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::BadImageFormatException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BadImageFormatException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
