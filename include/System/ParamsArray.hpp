// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ParamsArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D9FD54
  struct ParamsArray/*, public System::ValueType*/ {
    public:
    // private readonly System.Object arg0
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* arg0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object arg1
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* arg1;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object arg2
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* arg2;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object[] args
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: ParamsArray
    constexpr ParamsArray(::Il2CppObject* arg0_ = {}, ::Il2CppObject* arg1_ = {}, ::Il2CppObject* arg2_ = {}, ::Array<::Il2CppObject*>* args_ = {}) noexcept : arg0{arg0_}, arg1{arg1_}, arg2{arg2_}, args{args_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Object[] oneArgArray
    static ::Array<::Il2CppObject*>* _get_oneArgArray();
    // Set static field: static private readonly System.Object[] oneArgArray
    static void _set_oneArgArray(::Array<::Il2CppObject*>* value);
    // Get static field: static private readonly System.Object[] twoArgArray
    static ::Array<::Il2CppObject*>* _get_twoArgArray();
    // Set static field: static private readonly System.Object[] twoArgArray
    static void _set_twoArgArray(::Array<::Il2CppObject*>* value);
    // Get static field: static private readonly System.Object[] threeArgArray
    static ::Array<::Il2CppObject*>* _get_threeArgArray();
    // Set static field: static private readonly System.Object[] threeArgArray
    static void _set_threeArgArray(::Array<::Il2CppObject*>* value);
    // Get instance field reference: private readonly System.Object arg0
    ::Il2CppObject*& dyn_arg0();
    // Get instance field reference: private readonly System.Object arg1
    ::Il2CppObject*& dyn_arg1();
    // Get instance field reference: private readonly System.Object arg2
    ::Il2CppObject*& dyn_arg2();
    // Get instance field reference: private readonly System.Object[] args
    ::Array<::Il2CppObject*>*& dyn_args();
    // public System.Int32 get_Length()
    // Offset: 0x1D12554
    int get_Length();
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0x1D12570
    ::Il2CppObject* get_Item(int index);
    // public System.Void .ctor(System.Object arg0)
    // Offset: 0x1D12328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ParamsArray(::Il2CppObject* arg0) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamsArray::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg0)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, arg0);
    }
    // public System.Void .ctor(System.Object arg0, System.Object arg1)
    // Offset: 0x1D123AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ParamsArray(::Il2CppObject* arg0, ::Il2CppObject* arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamsArray::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, arg0, arg1);
    }
    // public System.Void .ctor(System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x1D12434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ParamsArray(::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamsArray::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, arg0, arg1, arg2);
    }
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0x1D124C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ParamsArray(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamsArray::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, args);
    }
    // static private System.Void .cctor()
    // Offset: 0x1D125E0
    static void _cctor();
    // private System.Object GetAtSlow(System.Int32 index)
    // Offset: 0x1D12580
    ::Il2CppObject* GetAtSlow(int index);
  }; // System.ParamsArray
  #pragma pack(pop)
  static check_size<sizeof(ParamsArray), 24 + sizeof(::Array<::Il2CppObject*>*)> __System_ParamsArraySizeCheck;
  static_assert(sizeof(ParamsArray) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::ParamsArray, "System", "ParamsArray");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ParamsArray::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ParamsArray::*)()>(&System::ParamsArray::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ParamsArray), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ParamsArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ParamsArray::*)(int)>(&System::ParamsArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParamsArray), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ParamsArray::ParamsArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ParamsArray::ParamsArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ParamsArray::ParamsArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ParamsArray::ParamsArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ParamsArray::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ParamsArray::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ParamsArray), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ParamsArray::GetAtSlow
// Il2CppName: GetAtSlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ParamsArray::*)(int)>(&System::ParamsArray::GetAtSlow)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParamsArray), "GetAtSlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
