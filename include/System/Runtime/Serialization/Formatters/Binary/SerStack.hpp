// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerStack
  // [TokenAttribute] Offset: FFFFFFFF
  class SerStack : public ::Il2CppObject {
    public:
    // System.Object[] objects
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* objects;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // System.String stackId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* stackId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 top
    // Size: 0x4
    // Offset: 0x20
    int top;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SerStack
    SerStack(::Array<::Il2CppObject*>* objects_ = {}, ::Il2CppString* stackId_ = {}, int top_ = {}) noexcept : objects{objects_}, stackId{stackId_}, top{top_} {}
    // Get instance field: System.Object[] objects
    ::Array<::Il2CppObject*>* _get_objects();
    // Set instance field: System.Object[] objects
    void _set_objects(::Array<::Il2CppObject*>* value);
    // Get instance field: System.String stackId
    ::Il2CppString* _get_stackId();
    // Set instance field: System.String stackId
    void _set_stackId(::Il2CppString* value);
    // Get instance field: System.Int32 top
    int _get_top();
    // Set instance field: System.Int32 top
    void _set_top(int value);
    // System.Void .ctor(System.String stackId)
    // Offset: 0x1619AD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerStack* New_ctor(::Il2CppString* stackId) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerStack*, creationType>(stackId)));
    }
    // System.Void Push(System.Object obj)
    // Offset: 0x161B56C
    void Push(::Il2CppObject* obj);
    // System.Object Pop()
    // Offset: 0x161B624
    ::Il2CppObject* Pop();
    // System.Void IncreaseCapacity()
    // Offset: 0x1620D68
    void IncreaseCapacity();
    // System.Object Peek()
    // Offset: 0x161BCDC
    ::Il2CppObject* Peek();
    // System.Object PeekPeek()
    // Offset: 0x1620DF8
    ::Il2CppObject* PeekPeek();
    // System.Boolean IsEmpty()
    // Offset: 0x1620170
    bool IsEmpty();
  }; // System.Runtime.Serialization.Formatters.Binary.SerStack
  #pragma pack(pop)
  static check_size<sizeof(SerStack), 32 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_SerStackSizeCheck;
  static_assert(sizeof(SerStack) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerStack*, "System.Runtime.Serialization.Formatters.Binary", "SerStack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerStack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerStack::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SerStack::*)(::Il2CppObject*)>(&System::Runtime::Serialization::Formatters::Binary::SerStack::Push)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerStack*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerStack::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(&System::Runtime::Serialization::Formatters::Binary::SerStack::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerStack*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerStack::IncreaseCapacity
// Il2CppName: IncreaseCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(&System::Runtime::Serialization::Formatters::Binary::SerStack::IncreaseCapacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerStack*), "IncreaseCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerStack::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(&System::Runtime::Serialization::Formatters::Binary::SerStack::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerStack*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerStack::PeekPeek
// Il2CppName: PeekPeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(&System::Runtime::Serialization::Formatters::Binary::SerStack::PeekPeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerStack*), "PeekPeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerStack::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(&System::Runtime::Serialization::Formatters::Binary::SerStack::IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SerStack*), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
