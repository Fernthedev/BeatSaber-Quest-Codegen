// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.KerningTable
#include "TMPro/KerningTable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningPair
  class KerningPair;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(TMPro::KerningTable::$$c);
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningTable::$$c*, "TMPro", "KerningTable/<>c");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.KerningTable/TMPro.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class KerningTable::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly TMPro.KerningTable/TMPro.<>c <>9
    static TMPro::KerningTable::$$c* _get_$$9();
    // Set static field: static public readonly TMPro.KerningTable/TMPro.<>c <>9
    static void _set_$$9(TMPro::KerningTable::$$c* value);
    // Get static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_0
    static System::Func_2<TMPro::KerningPair*, uint>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<TMPro::KerningPair*, uint>* value);
    // Get static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_1
    static System::Func_2<TMPro::KerningPair*, uint>* _get_$$9__7_1();
    // Set static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_1
    static void _set_$$9__7_1(System::Func_2<TMPro::KerningPair*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0x1404798
    static void _cctor();
    // System.UInt32 <SortKerningPairs>b__7_0(TMPro.KerningPair s)
    // Offset: 0x1404804
    uint $SortKerningPairs$b__7_0(TMPro::KerningPair* s);
    // System.UInt32 <SortKerningPairs>b__7_1(TMPro.KerningPair s)
    // Offset: 0x140481C
    uint $SortKerningPairs$b__7_1(TMPro::KerningPair* s);
    // public System.Void .ctor()
    // Offset: 0x14047FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningTable::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningTable::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningTable::$$c*, creationType>()));
    }
  }; // TMPro.KerningTable/TMPro.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::KerningTable::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::KerningTable::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::$$c::$SortKerningPairs$b__7_0
// Il2CppName: <SortKerningPairs>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::KerningTable::$$c::*)(TMPro::KerningPair*)>(&TMPro::KerningTable::$$c::$SortKerningPairs$b__7_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("TMPro", "KerningPair")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable::$$c*), "<SortKerningPairs>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::$$c::$SortKerningPairs$b__7_1
// Il2CppName: <SortKerningPairs>b__7_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::KerningTable::$$c::*)(TMPro::KerningPair*)>(&TMPro::KerningTable::$$c::$SortKerningPairs$b__7_1)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("TMPro", "KerningPair")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable::$$c*), "<SortKerningPairs>b__7_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
