// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.CustomYieldInstruction
#include "UnityEngine/CustomYieldInstruction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WaitUntil
  class WaitUntil : public UnityEngine::CustomYieldInstruction {
    public:
    // private System.Func`1<System.Boolean> m_Predicate
    // Size: 0x8
    // Offset: 0x10
    System::Func_1<bool>* m_Predicate;
    // Field size check
    static_assert(sizeof(System::Func_1<bool>*) == 0x8);
    // Creating value type constructor for type: WaitUntil
    WaitUntil(System::Func_1<bool>* m_Predicate_ = {}) noexcept : m_Predicate{m_Predicate_} {}
    // Creating conversion operator: operator System::Func_1<bool>*
    constexpr operator System::Func_1<bool>*() const noexcept {
      return m_Predicate;
    }
    // public System.Void .ctor(System.Func`1<System.Boolean> predicate)
    // Offset: 0x2325C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitUntil* New_ctor(System::Func_1<bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::WaitUntil::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitUntil*, creationType>(predicate)));
    }
    // public override System.Boolean get_keepWaiting()
    // Offset: 0x2325C28
    // Implemented from: UnityEngine.CustomYieldInstruction
    // Base method: System.Boolean CustomYieldInstruction::get_keepWaiting()
    bool get_keepWaiting();
  }; // UnityEngine.WaitUntil
  #pragma pack(pop)
  static check_size<sizeof(WaitUntil), 16 + sizeof(System::Func_1<bool>*)> __UnityEngine_WaitUntilSizeCheck;
  static_assert(sizeof(WaitUntil) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitUntil*, "UnityEngine", "WaitUntil");
// Writing includes for template specializations
#include "System/Func_1.hpp"
// Writing MetadataGetter for method: UnityEngine::WaitUntil::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::WaitUntil::get_keepWaiting
// Il2CppName: get_keepWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::WaitUntil::*)()>(&UnityEngine::WaitUntil::get_keepWaiting)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WaitUntil*), "get_keepWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
