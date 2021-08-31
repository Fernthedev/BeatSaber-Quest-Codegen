// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Runtime.InteropServices.GCHandleType
#include "System/Runtime/InteropServices/GCHandleType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.GCHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9E564
  // [MonoTODOAttribute] Offset: D9E564
  struct GCHandle/*, public System::ValueType*/ {
    public:
    // private System.Int32 handle
    // Size: 0x4
    // Offset: 0x0
    int handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GCHandle
    constexpr GCHandle(int handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return handle;
    }
    // Get instance field reference: private System.Int32 handle
    int& dyn_handle();
    // public System.Boolean get_IsAllocated()
    // Offset: 0x1488634
    bool get_IsAllocated();
    // public System.Object get_Target()
    // Offset: 0x1488644
    ::Il2CppObject* get_Target();
    // private System.Void .ctor(System.IntPtr h)
    // Offset: 0x148859C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GCHandle(System::IntPtr h) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::GCHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(h)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, h);
    }
    // private System.Void .ctor(System.Object obj)
    // Offset: 0x14885C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GCHandle(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::GCHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, obj);
    }
    // System.Void .ctor(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x14885F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GCHandle(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::GCHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(type)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value, type);
    }
    // public System.IntPtr AddrOfPinnedObject()
    // Offset: 0x14886E0
    System::IntPtr AddrOfPinnedObject();
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value)
    // Offset: 0x14887E4
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value);
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x1488804
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type);
    // public System.Void Free()
    // Offset: 0x148882C
    void Free();
    // static public System.IntPtr op_Explicit(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x14888D4
    explicit operator System::IntPtr();
    // static public System.Runtime.InteropServices.GCHandle op_Explicit(System.IntPtr value)
    // Offset: 0x14888DC
    explicit GCHandle(System::IntPtr& value);
    // static private System.Boolean CheckCurrentDomain(System.Int32 handle)
    // Offset: 0x14889BC
    static bool CheckCurrentDomain(int handle);
    // static private System.Object GetTarget(System.Int32 handle)
    // Offset: 0x14886DC
    static ::Il2CppObject* GetTarget(int handle);
    // static private System.Int32 GetTargetHandle(System.Object obj, System.Int32 handle, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x1488630
    static int GetTargetHandle(::Il2CppObject* obj, int handle, System::Runtime::InteropServices::GCHandleType type);
    // static private System.Void FreeHandle(System.Int32 handle)
    // Offset: 0x14888D0
    static void FreeHandle(int handle);
    // static private System.IntPtr GetAddrOfPinnedObject(System.Int32 handle)
    // Offset: 0x14887E0
    static System::IntPtr GetAddrOfPinnedObject(int handle);
    // static public System.Runtime.InteropServices.GCHandle FromIntPtr(System.IntPtr value)
    // Offset: 0x1488A5C
    static System::Runtime::InteropServices::GCHandle FromIntPtr(System::IntPtr value);
    // static public System.IntPtr ToIntPtr(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x1488A74
    static System::IntPtr ToIntPtr(System::Runtime::InteropServices::GCHandle value);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x14889CC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1488A54
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.InteropServices.GCHandle
  #pragma pack(pop)
  static check_size<sizeof(GCHandle), 0 + sizeof(int)> __System_Runtime_InteropServices_GCHandleSizeCheck;
  static_assert(sizeof(GCHandle) == 0x4);
  // static public System.Boolean op_Equality(System.Runtime.InteropServices.GCHandle a, System.Runtime.InteropServices.GCHandle b)
  // Offset: 0x14889C0
  bool operator ==(const System::Runtime::InteropServices::GCHandle& a, const System::Runtime::InteropServices::GCHandle& b);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::get_IsAllocated
// Il2CppName: get_IsAllocated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::get_IsAllocated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "get_IsAllocated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject
// Il2CppName: AddrOfPinnedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "AddrOfPinnedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::GCHandle (*)(::Il2CppObject*)>(&System::Runtime::InteropServices::GCHandle::Alloc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::GCHandle (*)(::Il2CppObject*, System::Runtime::InteropServices::GCHandleType)>(&System::Runtime::InteropServices::GCHandle::Alloc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::Free)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::operator System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GCHandle
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::CheckCurrentDomain
// Il2CppName: CheckCurrentDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Runtime::InteropServices::GCHandle::CheckCurrentDomain)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "CheckCurrentDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetTarget
// Il2CppName: GetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(int)>(&System::Runtime::InteropServices::GCHandle::GetTarget)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetTargetHandle
// Il2CppName: GetTargetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*, int, System::Runtime::InteropServices::GCHandleType)>(&System::Runtime::InteropServices::GCHandle::GetTargetHandle)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetTargetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, handle, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::FreeHandle
// Il2CppName: FreeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&System::Runtime::InteropServices::GCHandle::FreeHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "FreeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject
// Il2CppName: GetAddrOfPinnedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(int)>(&System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetAddrOfPinnedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::FromIntPtr
// Il2CppName: FromIntPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::GCHandle (*)(System::IntPtr)>(&System::Runtime::InteropServices::GCHandle::FromIntPtr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "FromIntPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::ToIntPtr
// Il2CppName: ToIntPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::Runtime::InteropServices::GCHandle)>(&System::Runtime::InteropServices::GCHandle::ToIntPtr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "ToIntPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::GCHandle::*)(::Il2CppObject*)>(&System::Runtime::InteropServices::GCHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::InteropServices::GCHandle::*)()>(&System::Runtime::InteropServices::GCHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GCHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GCHandle::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
