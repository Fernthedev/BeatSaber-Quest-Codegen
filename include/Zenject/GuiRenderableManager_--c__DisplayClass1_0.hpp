// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.GuiRenderableManager
#include "Zenject/GuiRenderableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IGuiRenderable
  class IGuiRenderable;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GuiRenderableManager/Zenject.<>c__DisplayClass1_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GuiRenderableManager::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public Zenject.IGuiRenderable renderable
    // Size: 0x8
    // Offset: 0x10
    Zenject::IGuiRenderable* renderable;
    // Field size check
    static_assert(sizeof(Zenject::IGuiRenderable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass1_0
    $$c__DisplayClass1_0(Zenject::IGuiRenderable* renderable_ = {}) noexcept : renderable{renderable_} {}
    // Creating conversion operator: operator Zenject::IGuiRenderable*
    constexpr operator Zenject::IGuiRenderable*() const noexcept {
      return renderable;
    }
    // Get instance field reference: public Zenject.IGuiRenderable renderable
    Zenject::IGuiRenderable*& dyn_renderable();
    // System.Boolean <.ctor>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1667D24
    bool $_ctor$b__1(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x1667960
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuiRenderableManager::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GuiRenderableManager::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuiRenderableManager::$$c__DisplayClass1_0*, creationType>()));
    }
  }; // Zenject.GuiRenderableManager/Zenject.<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(GuiRenderableManager::$$c__DisplayClass1_0), 16 + sizeof(Zenject::IGuiRenderable*)> __Zenject_GuiRenderableManager_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(GuiRenderableManager::$$c__DisplayClass1_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager::$$c__DisplayClass1_0*, "Zenject", "GuiRenderableManager/<>c__DisplayClass1_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::$$c__DisplayClass1_0::$_ctor$b__1
// Il2CppName: <.ctor>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::GuiRenderableManager::$$c__DisplayClass1_0::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::GuiRenderableManager::$$c__DisplayClass1_0::$_ctor$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderableManager::$$c__DisplayClass1_0*), "<.ctor>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderableManager::$$c__DisplayClass1_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
