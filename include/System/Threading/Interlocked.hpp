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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Interlocked
  // [TokenAttribute] Offset: FFFFFFFF
  class Interlocked : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Interlocked
    Interlocked() noexcept {}
    // static public System.Int32 CompareExchange(ref System.Int32 location1, System.Int32 value, System.Int32 comparand)
    // Offset: 0x18FBCB8
    static int CompareExchange(ByRef<int> location1, int value, int comparand);
    // static System.Int32 CompareExchange(ref System.Int32 location1, System.Int32 value, System.Int32 comparand, ref System.Boolean succeeded)
    // Offset: 0x18FE398
    static int CompareExchange(ByRef<int> location1, int value, int comparand, ByRef<bool> succeeded);
    // static public System.Object CompareExchange(ref System.Object location1, System.Object value, System.Object comparand)
    // Offset: 0x18FE39C
    static ::Il2CppObject* CompareExchange(ByRef<::Il2CppObject*> location1, ::Il2CppObject* value, ::Il2CppObject* comparand);
    // static public System.Single CompareExchange(ref System.Single location1, System.Single value, System.Single comparand)
    // Offset: 0x18FE3A0
    static float CompareExchange(ByRef<float> location1, float value, float comparand);
    // static public System.Int32 Decrement(ref System.Int32 location)
    // Offset: 0x18FE3A4
    static int Decrement(ByRef<int> location);
    // static public System.Int32 Increment(ref System.Int32 location)
    // Offset: 0x18FE3A8
    static int Increment(ByRef<int> location);
    // static public System.Int64 Increment(ref System.Int64 location)
    // Offset: 0x18FE3AC
    static int64_t Increment(ByRef<int64_t> location);
    // static public System.Int32 Exchange(ref System.Int32 location1, System.Int32 value)
    // Offset: 0x18F9E3C
    static int Exchange(ByRef<int> location1, int value);
    // static public System.Object Exchange(ref System.Object location1, System.Object value)
    // Offset: 0x18FE3B0
    static ::Il2CppObject* Exchange(ByRef<::Il2CppObject*> location1, ::Il2CppObject* value);
    // static public System.Single Exchange(ref System.Single location1, System.Single value)
    // Offset: 0x18FE3B4
    static float Exchange(ByRef<float> location1, float value);
    // static public System.Int64 CompareExchange(ref System.Int64 location1, System.Int64 value, System.Int64 comparand)
    // Offset: 0x18FE3B8
    static int64_t CompareExchange(ByRef<int64_t> location1, int64_t value, int64_t comparand);
    // static public System.IntPtr CompareExchange(ref System.IntPtr location1, System.IntPtr value, System.IntPtr comparand)
    // Offset: 0x18FE3BC
    static System::IntPtr CompareExchange(ByRef<System::IntPtr> location1, System::IntPtr value, System::IntPtr comparand);
    // static public System.Double CompareExchange(ref System.Double location1, System.Double value, System.Double comparand)
    // Offset: 0x18FE3C0
    static double CompareExchange(ByRef<double> location1, double value, double comparand);
    // static public T CompareExchange(ref T location1, T value, T comparand)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T CompareExchange(ByRef<T> location1, T value, T comparand) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Interlocked::CompareExchange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading", "Interlocked", "CompareExchange", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(location1), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(comparand)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, byref(location1), value, comparand);
    }
    // static public System.Int64 Exchange(ref System.Int64 location1, System.Int64 value)
    // Offset: 0x18FE3C4
    static int64_t Exchange(ByRef<int64_t> location1, int64_t value);
    // static public System.IntPtr Exchange(ref System.IntPtr location1, System.IntPtr value)
    // Offset: 0x18FE3C8
    static System::IntPtr Exchange(ByRef<System::IntPtr> location1, System::IntPtr value);
    // static public System.Double Exchange(ref System.Double location1, System.Double value)
    // Offset: 0x18FE3CC
    static double Exchange(ByRef<double> location1, double value);
    // static public T Exchange(ref T location1, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Exchange(ByRef<T> location1, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Interlocked::Exchange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading", "Interlocked", "Exchange", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(location1), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, byref(location1), value);
    }
    // static public System.Int64 Read(ref System.Int64 location)
    // Offset: 0x18FE3D0
    static int64_t Read(ByRef<int64_t> location);
    // static public System.Int32 Add(ref System.Int32 location1, System.Int32 value)
    // Offset: 0x18FE3D4
    static int Add(ByRef<int> location1, int value);
    // static public System.Int64 Add(ref System.Int64 location1, System.Int64 value)
    // Offset: 0x18FE3D8
    static int64_t Add(ByRef<int64_t> location1, int64_t value);
  }; // System.Threading.Interlocked
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Interlocked*, "System.Threading", "Interlocked");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Interlocked::CompareExchange
// Il2CppName: CompareExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<int>, int, int)>(&System::Threading::Interlocked::CompareExchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "CompareExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value, comparand});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::CompareExchange
// Il2CppName: CompareExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<int>, int, int, ByRef<bool>)>(&System::Threading::Interlocked::CompareExchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* succeeded = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "CompareExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value, comparand, succeeded});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::CompareExchange
// Il2CppName: CompareExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(ByRef<::Il2CppObject*>, ::Il2CppObject*, ::Il2CppObject*)>(&System::Threading::Interlocked::CompareExchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "CompareExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value, comparand});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::CompareExchange
// Il2CppName: CompareExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<float>, float, float)>(&System::Threading::Interlocked::CompareExchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "CompareExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value, comparand});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Decrement
// Il2CppName: Decrement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<int>)>(&System::Threading::Interlocked::Decrement)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Decrement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Increment
// Il2CppName: Increment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<int>)>(&System::Threading::Interlocked::Increment)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Increment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Increment
// Il2CppName: Increment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(ByRef<int64_t>)>(&System::Threading::Interlocked::Increment)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Increment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Exchange
// Il2CppName: Exchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<int>, int)>(&System::Threading::Interlocked::Exchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Exchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Exchange
// Il2CppName: Exchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(ByRef<::Il2CppObject*>, ::Il2CppObject*)>(&System::Threading::Interlocked::Exchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Exchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Exchange
// Il2CppName: Exchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<float>, float)>(&System::Threading::Interlocked::Exchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Exchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::CompareExchange
// Il2CppName: CompareExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(ByRef<int64_t>, int64_t, int64_t)>(&System::Threading::Interlocked::CompareExchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "CompareExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value, comparand});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::CompareExchange
// Il2CppName: CompareExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(ByRef<System::IntPtr>, System::IntPtr, System::IntPtr)>(&System::Threading::Interlocked::CompareExchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "CompareExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value, comparand});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::CompareExchange
// Il2CppName: CompareExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(ByRef<double>, double, double)>(&System::Threading::Interlocked::CompareExchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Double")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "CompareExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value, comparand});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::CompareExchange
// Il2CppName: CompareExchange
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::Interlocked::Exchange
// Il2CppName: Exchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(ByRef<int64_t>, int64_t)>(&System::Threading::Interlocked::Exchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Exchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Exchange
// Il2CppName: Exchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(ByRef<System::IntPtr>, System::IntPtr)>(&System::Threading::Interlocked::Exchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Exchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Exchange
// Il2CppName: Exchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(ByRef<double>, double)>(&System::Threading::Interlocked::Exchange)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Double")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Exchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Exchange
// Il2CppName: Exchange
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::Interlocked::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(ByRef<int64_t>)>(&System::Threading::Interlocked::Read)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<int>, int)>(&System::Threading::Interlocked::Add)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Interlocked::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(ByRef<int64_t>, int64_t)>(&System::Threading::Interlocked::Add)> {
  static const MethodInfo* get() {
    static auto* location1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Interlocked*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location1, value});
  }
};
