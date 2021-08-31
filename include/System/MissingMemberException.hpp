// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MemberAccessException
#include "System/MemberAccessException.hpp"
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
// Type namespace: System
namespace System {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.MissingMemberException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D99C14
  class MissingMemberException : public System::MemberAccessException {
    public:
    // protected System.String ClassName
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* ClassName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.String MemberName
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* MemberName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.Byte[] Signature
    // Size: 0x8
    // Offset: 0x98
    ::Array<uint8_t>* Signature;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: MissingMemberException
    MissingMemberException(::Il2CppString* ClassName_ = {}, ::Il2CppString* MemberName_ = {}, ::Array<uint8_t>* Signature_ = {}) noexcept : ClassName{ClassName_}, MemberName{MemberName_}, Signature{Signature_} {}
    // Get instance field reference: protected System.String ClassName
    ::Il2CppString*& dyn_ClassName();
    // Get instance field reference: protected System.String MemberName
    ::Il2CppString*& dyn_MemberName();
    // Get instance field reference: protected System.Byte[] Signature
    ::Array<uint8_t>*& dyn_Signature();
    // static System.String FormatSignature(System.Byte[] signature)
    // Offset: 0x1837154
    static ::Il2CppString* FormatSignature(::Array<uint8_t>* signature);
    // public override System.String get_Message()
    // Offset: 0x1837004
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // public System.Void .ctor()
    // Offset: 0x183718C
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMemberException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingMemberException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMemberException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1836D24
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMemberException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingMemberException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMemberException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1836DA4
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMemberException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingMemberException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMemberException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1837218
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.MissingMemberException
  #pragma pack(pop)
  static check_size<sizeof(MissingMemberException), 152 + sizeof(::Array<uint8_t>*)> __System_MissingMemberExceptionSizeCheck;
  static_assert(sizeof(MissingMemberException) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(System::MissingMemberException*, "System", "MissingMemberException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MissingMemberException::FormatSignature
// Il2CppName: FormatSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<uint8_t>*)>(&System::MissingMemberException::FormatSignature)> {
  static const MethodInfo* get() {
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MissingMemberException*), "FormatSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signature});
  }
};
// Writing MetadataGetter for method: System::MissingMemberException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::MissingMemberException::*)()>(&System::MissingMemberException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MissingMemberException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MissingMemberException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMemberException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMemberException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMemberException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::MissingMemberException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::MissingMemberException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MissingMemberException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
