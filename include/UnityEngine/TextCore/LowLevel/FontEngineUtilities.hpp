// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.FontEngineUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  struct FontEngineUtilities/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: FontEngineUtilities
    constexpr FontEngineUtilities() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static System.Int32 MaxValue(System.Int32 a, System.Int32 b, System.Int32 c)
    // Offset: 0x23F64BC
    static int MaxValue(int a, int b, int c);
  }; // UnityEngine.TextCore.LowLevel.FontEngineUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::FontEngineUtilities, "UnityEngine.TextCore.LowLevel", "FontEngineUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::FontEngineUtilities::MaxValue
// Il2CppName: MaxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&UnityEngine::TextCore::LowLevel::FontEngineUtilities::MaxValue)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::FontEngineUtilities), "MaxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c});
  }
};
