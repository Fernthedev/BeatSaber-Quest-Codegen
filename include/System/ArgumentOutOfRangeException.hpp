// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
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
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.ArgumentOutOfRangeException
  // [ComVisibleAttribute] Offset: D7A2C8
  class ArgumentOutOfRangeException : public System::ArgumentException {
    public:
    // private System.Object m_actualValue
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* m_actualValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: ArgumentOutOfRangeException
    ArgumentOutOfRangeException(::Il2CppObject* m_actualValue_ = {}) noexcept : m_actualValue{m_actualValue_} {}
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // Get static field: static private System.String _rangeMessage
    static ::Il2CppString* _get__rangeMessage();
    // Set static field: static private System.String _rangeMessage
    static void _set__rangeMessage(::Il2CppString* value);
    // static private System.String get_RangeMessage()
    // Offset: 0x1772B7C
    static ::Il2CppString* get_RangeMessage();
    // public System.Void .ctor(System.String paramName, System.Object actualValue, System.String message)
    // Offset: 0x1772D14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor(::Il2CppString* paramName, ::Il2CppObject* actualValue, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>(paramName, actualValue, message)));
    }
    // public System.Void .ctor()
    // Offset: 0x1772C10
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>()));
    }
    // public System.Void .ctor(System.String paramName)
    // Offset: 0x1772C64
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName)
    // Base method: System.Void SystemException::.ctor(System.String paramName)
    // Base method: System.Void Exception::.ctor(System.String paramName)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor(::Il2CppString* paramName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>(paramName)));
    }
    // public System.Void .ctor(System.String paramName, System.String message)
    // Offset: 0x1772CC0
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName, System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor(::Il2CppString* paramName, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>(paramName, message)));
    }
    // public override System.String get_Message()
    // Offset: 0x1772D78
    // Implemented from: System.ArgumentException
    // Base method: System.String ArgumentException::get_Message()
    ::Il2CppString* get_Message();
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1772E9C
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1772FA0
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>(info, context)));
    }
  }; // System.ArgumentOutOfRangeException
  #pragma pack(pop)
  static check_size<sizeof(ArgumentOutOfRangeException), 144 + sizeof(::Il2CppObject*)> __System_ArgumentOutOfRangeExceptionSizeCheck;
  static_assert(sizeof(ArgumentOutOfRangeException) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(System::ArgumentOutOfRangeException*, "System", "ArgumentOutOfRangeException");
// Writing includes for template specializations
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::get_RangeMessage
// Il2CppName: get_RangeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::ArgumentOutOfRangeException::get_RangeMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ArgumentOutOfRangeException*), "get_RangeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ArgumentOutOfRangeException::*)()>(&System::ArgumentOutOfRangeException::get_Message)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ArgumentOutOfRangeException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ArgumentOutOfRangeException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::ArgumentOutOfRangeException::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ArgumentOutOfRangeException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
