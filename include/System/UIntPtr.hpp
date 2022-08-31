// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: UIntPtr
  struct UIntPtr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::UIntPtr, "System", "UIntPtr");
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.UIntPtr
  // [TokenAttribute] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: 103FF28
  // [ComVisibleAttribute] Offset: 103FF28
  struct UIntPtr/*, public ::System::ValueType, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private System.Void* _pointer
    // Size: 0x8
    // Offset: 0x0
    void* pointer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    public:
    // Creating value type constructor for type: UIntPtr
    constexpr UIntPtr(void* pointer_ = {}) noexcept : pointer{pointer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator void*
    constexpr operator void*() const noexcept {
      return pointer;
    }
    // Get static field: static public readonly System.UIntPtr Zero
    static ::System::UIntPtr _get_Zero();
    // Set static field: static public readonly System.UIntPtr Zero
    static void _set_Zero(::System::UIntPtr value);
    // Get instance field reference: private System.Void* _pointer
    [[deprecated("Use field access instead!")]] void*& dyn__pointer();
    // static public System.Int32 get_Size()
    // Offset: 0x29F2348
    static int get_Size();
    // public System.Void .ctor(System.UInt64 value)
    // Offset: 0x29F22D0
    UIntPtr(uint64_t value);
    // public System.Void .ctor(System.UInt32 value)
    // Offset: 0x29F2350
    UIntPtr(uint value);
    // static private System.Void .cctor()
    // Offset: 0x29F254C
    static void _cctor();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x29F2468
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // static public System.UInt64 op_Explicit(System.UIntPtr value)
    // Offset: 0x29F2518
    explicit operator uint64_t();
    // static public System.UInt32 op_Explicit(System.UIntPtr value)
    // Offset: 0x29F251C
    explicit operator uint();
    // static public System.UIntPtr op_Explicit(System.UInt64 value)
    // Offset: 0x29F2520
    explicit UIntPtr(uint64_t& value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x29F235C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29F23E4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x29F23EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.UIntPtr
  #pragma pack(pop)
  static check_size<sizeof(UIntPtr), 0 + sizeof(void*)> __System_UIntPtrSizeCheck;
  static_assert(sizeof(UIntPtr) == 0x8);
  // static public System.Boolean op_Equality(System.UIntPtr value1, System.UIntPtr value2)
  // Offset: 0x29F250C
  bool operator ==(const ::System::UIntPtr& value1, const ::System::UIntPtr& value2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UIntPtr::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::UIntPtr::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UIntPtr), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UIntPtr::UIntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UIntPtr::UIntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UIntPtr::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::UIntPtr::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UIntPtr), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UIntPtr::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UIntPtr::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::UIntPtr::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UIntPtr), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::UIntPtr::operator uint64_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::UIntPtr::operator uint
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::UIntPtr::UIntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::UIntPtr::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UIntPtr::*)(::Il2CppObject*)>(&System::UIntPtr::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UIntPtr), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::UIntPtr::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::UIntPtr::*)()>(&System::UIntPtr::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UIntPtr), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UIntPtr::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UIntPtr::*)()>(&System::UIntPtr::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UIntPtr), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UIntPtr::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
