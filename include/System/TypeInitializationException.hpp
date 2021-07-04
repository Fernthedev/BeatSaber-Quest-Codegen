// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Type namespace: System
namespace System {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeInitializationException
  // [ComVisibleAttribute] Offset: D7AFF4
  class TypeInitializationException : public System::SystemException {
    public:
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TypeInitializationException
    TypeInitializationException(::Il2CppString* typeName_ = {}) noexcept : typeName{typeName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return typeName;
    }
    // public System.String get_TypeName()
    // Offset: 0x232B44C
    ::Il2CppString* get_TypeName();
    // private System.Void .ctor()
    // Offset: 0x232B254
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInitializationException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeInitializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInitializationException*, creationType>()));
    }
    // public System.Void .ctor(System.String fullTypeName, System.Exception innerException)
    // Offset: 0x232B2C8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String fullTypeName, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String fullTypeName, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInitializationException* New_ctor(::Il2CppString* fullTypeName, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeInitializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInitializationException*, creationType>(fullTypeName, innerException)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x232B3B4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInitializationException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeInitializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInitializationException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x232B4A8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.TypeInitializationException
  #pragma pack(pop)
  static check_size<sizeof(TypeInitializationException), 136 + sizeof(::Il2CppString*)> __System_TypeInitializationExceptionSizeCheck;
  static_assert(sizeof(TypeInitializationException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeInitializationException*, "System", "TypeInitializationException");
// Writing includes for template specializations
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Writing MetadataGetter for method: System::TypeInitializationException::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TypeInitializationException::*)()>(&System::TypeInitializationException::get_TypeName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeInitializationException*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeInitializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeInitializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeInitializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeInitializationException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TypeInitializationException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::TypeInitializationException::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeInitializationException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
