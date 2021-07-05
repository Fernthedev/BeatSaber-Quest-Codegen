// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.GuiRenderableManager
#include "Zenject/GuiRenderableManager.hpp"
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
  // Autogenerated type: Zenject.GuiRenderableManager/<>c
  // [CompilerGeneratedAttribute] Offset: DDE60C
  class GuiRenderableManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.GuiRenderableManager/<>c <>9
    static Zenject::GuiRenderableManager::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.GuiRenderableManager/<>c <>9
    static void _set_$$9(Zenject::GuiRenderableManager::$$c* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__1_2
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* _get_$$9__1_2();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__1_2
    static void _set_$$9__1_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* value);
    // Get static field: static public System.Func`2<Zenject.GuiRenderableManager/RenderableInfo,System.Int32> <>9__1_0
    static System::Func_2<Zenject::GuiRenderableManager::RenderableInfo*, int>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<Zenject.GuiRenderableManager/RenderableInfo,System.Int32> <>9__1_0
    static void _set_$$9__1_0(System::Func_2<Zenject::GuiRenderableManager::RenderableInfo*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x163E728
    static void _cctor();
    // System.Int32 <.ctor>b__1_2(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x163E794
    int $_ctor$b__1_2(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // System.Int32 <.ctor>b__1_0(Zenject.GuiRenderableManager/RenderableInfo x)
    // Offset: 0x163E7AC
    int $_ctor$b__1_0(Zenject::GuiRenderableManager::RenderableInfo* x);
    // public System.Void .ctor()
    // Offset: 0x163E78C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuiRenderableManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GuiRenderableManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuiRenderableManager::$$c*, creationType>()));
    }
  }; // Zenject.GuiRenderableManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager::$$c*, "Zenject", "GuiRenderableManager/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::GuiRenderableManager::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::$$c::$_ctor$b__1_2
// Il2CppName: <.ctor>b__1_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::GuiRenderableManager::$$c::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::GuiRenderableManager::$$c::$_ctor$b__1_2)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager::$$c*), "<.ctor>b__1_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::$$c::$_ctor$b__1_0
// Il2CppName: <.ctor>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::GuiRenderableManager::$$c::*)(Zenject::GuiRenderableManager::RenderableInfo*)>(&Zenject::GuiRenderableManager::$$c::$_ctor$b__1_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "GuiRenderableManager/RenderableInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager::$$c*), "<.ctor>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
