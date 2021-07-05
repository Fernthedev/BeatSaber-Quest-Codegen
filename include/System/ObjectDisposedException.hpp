// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.InvalidOperationException
#include "System/InvalidOperationException.hpp"
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
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.ObjectDisposedException
  // [ComVisibleAttribute] Offset: D7AA80
  class ObjectDisposedException : public System::InvalidOperationException {
    public:
    // private System.String objectName
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* objectName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ObjectDisposedException
    ObjectDisposedException(::Il2CppString* objectName_ = {}) noexcept : objectName{objectName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return objectName;
    }
    // public System.Void .ctor(System.String objectName, System.String message)
    // Offset: 0x1C6F674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(::Il2CppString* objectName, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(objectName, message)));
    }
    // public System.String get_ObjectName()
    // Offset: 0x1C6F854
    ::Il2CppString* get_ObjectName();
    // private System.Void .ctor()
    // Offset: 0x1C6F5F8
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>()));
    }
    // public System.Void .ctor(System.String objectName)
    // Offset: 0x1C6F6B8
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.String objectName)
    // Base method: System.Void SystemException::.ctor(System.String objectName)
    // Base method: System.Void Exception::.ctor(System.String objectName)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(::Il2CppString* objectName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(objectName)));
    }
    // public override System.String get_Message()
    // Offset: 0x1C6F740
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C6F8D0
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C6F968
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.ObjectDisposedException
  #pragma pack(pop)
  static check_size<sizeof(ObjectDisposedException), 136 + sizeof(::Il2CppString*)> __System_ObjectDisposedExceptionSizeCheck;
  static_assert(sizeof(ObjectDisposedException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(System::ObjectDisposedException*, "System", "ObjectDisposedException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ObjectDisposedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObjectDisposedException::get_ObjectName
// Il2CppName: get_ObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ObjectDisposedException::*)()>(&System::ObjectDisposedException::get_ObjectName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ObjectDisposedException*), "get_ObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ObjectDisposedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObjectDisposedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObjectDisposedException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ObjectDisposedException::*)()>(&System::ObjectDisposedException::get_Message)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ObjectDisposedException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ObjectDisposedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObjectDisposedException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ObjectDisposedException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::ObjectDisposedException::GetObjectData)> {
  const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ObjectDisposedException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
