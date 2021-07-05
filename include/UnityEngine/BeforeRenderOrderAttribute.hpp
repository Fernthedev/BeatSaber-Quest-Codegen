// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.BeforeRenderOrderAttribute
  // [AttributeUsageAttribute] Offset: D8E5A0
  class BeforeRenderOrderAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD930BC
    // [DebuggerBrowsableAttribute] Offset: 0xD930BC
    // private System.Int32 <order>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeforeRenderOrderAttribute
    BeforeRenderOrderAttribute(int order_ = {}) noexcept : order{order_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return order;
    }
    // public System.Int32 get_order()
    // Offset: 0x1B8BEC0
    int get_order();
  }; // UnityEngine.BeforeRenderOrderAttribute
  #pragma pack(pop)
  static check_size<sizeof(BeforeRenderOrderAttribute), 16 + sizeof(int)> __UnityEngine_BeforeRenderOrderAttributeSizeCheck;
  static_assert(sizeof(BeforeRenderOrderAttribute) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BeforeRenderOrderAttribute*, "UnityEngine", "BeforeRenderOrderAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BeforeRenderOrderAttribute::get_order
// Il2CppName: get_order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BeforeRenderOrderAttribute::*)()>(&UnityEngine::BeforeRenderOrderAttribute::get_order)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BeforeRenderOrderAttribute*), "get_order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
