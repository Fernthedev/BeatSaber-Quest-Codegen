// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TickableManager
#include "Zenject/TickableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TickableManager/<>c
  // [CompilerGeneratedAttribute] Offset: DDE6AC
  class TickableManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.TickableManager/<>c <>9
    static Zenject::TickableManager::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.TickableManager/<>c <>9
    static void _set_$$9(Zenject::TickableManager::$$c* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> <>9__17_0
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, System::Type*>* _get_$$9__17_0();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> <>9__17_0
    static void _set_$$9__17_0(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, System::Type*>* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__17_2
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* _get_$$9__17_2();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__17_2
    static void _set_$$9__17_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> <>9__18_0
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, System::Type*>* _get_$$9__18_0();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> <>9__18_0
    static void _set_$$9__18_0(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, System::Type*>* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__18_2
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* _get_$$9__18_2();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__18_2
    static void _set_$$9__18_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> <>9__19_0
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, System::Type*>* _get_$$9__19_0();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> <>9__19_0
    static void _set_$$9__19_0(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, System::Type*>* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__19_2
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* _get_$$9__19_2();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__19_2
    static void _set_$$9__19_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x16ED1E8
    static void _cctor();
    // System.Type <InitFixedTickables>b__17_0(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x16ED254
    System::Type* $InitFixedTickables$b__17_0(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // System.Int32 <InitFixedTickables>b__17_2(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x16ED26C
    int $InitFixedTickables$b__17_2(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // System.Type <InitTickables>b__18_0(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x16ED284
    System::Type* $InitTickables$b__18_0(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // System.Int32 <InitTickables>b__18_2(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x16ED29C
    int $InitTickables$b__18_2(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // System.Type <InitLateTickables>b__19_0(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x16ED2B4
    System::Type* $InitLateTickables$b__19_0(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // System.Int32 <InitLateTickables>b__19_2(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x16ED2CC
    int $InitLateTickables$b__19_2(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x16ED24C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickableManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TickableManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickableManager::$$c*, creationType>()));
    }
  }; // Zenject.TickableManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickableManager::$$c*, "Zenject", "TickableManager/<>c");
// Writing includes for template specializations
#include "ModestTree/Util/ValuePair_2.hpp"
// Writing MetadataGetter for method: Zenject::TickableManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::TickableManager::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c::$InitFixedTickables$b__17_0
// Il2CppName: <InitFixedTickables>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::TickableManager::$$c::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::TickableManager::$$c::$InitFixedTickables$b__17_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c*), "<InitFixedTickables>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ModestTree::Util::ValuePair_2<System::Type*, int>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c::$InitFixedTickables$b__17_2
// Il2CppName: <InitFixedTickables>b__17_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::TickableManager::$$c::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::TickableManager::$$c::$InitFixedTickables$b__17_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c*), "<InitFixedTickables>b__17_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ModestTree::Util::ValuePair_2<System::Type*, int>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c::$InitTickables$b__18_0
// Il2CppName: <InitTickables>b__18_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::TickableManager::$$c::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::TickableManager::$$c::$InitTickables$b__18_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c*), "<InitTickables>b__18_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ModestTree::Util::ValuePair_2<System::Type*, int>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c::$InitTickables$b__18_2
// Il2CppName: <InitTickables>b__18_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::TickableManager::$$c::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::TickableManager::$$c::$InitTickables$b__18_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c*), "<InitTickables>b__18_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ModestTree::Util::ValuePair_2<System::Type*, int>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c::$InitLateTickables$b__19_0
// Il2CppName: <InitLateTickables>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::TickableManager::$$c::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::TickableManager::$$c::$InitLateTickables$b__19_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c*), "<InitLateTickables>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ModestTree::Util::ValuePair_2<System::Type*, int>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c::$InitLateTickables$b__19_2
// Il2CppName: <InitLateTickables>b__19_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::TickableManager::$$c::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::TickableManager::$$c::$InitLateTickables$b__19_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c*), "<InitLateTickables>b__19_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ModestTree::Util::ValuePair_2<System::Type*, int>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
