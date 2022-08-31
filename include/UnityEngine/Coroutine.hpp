// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.YieldInstruction
#include "UnityEngine/YieldInstruction.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Coroutine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Coroutine*, "UnityEngine", "Coroutine");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Coroutine
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10582FC
  // [RequiredByNativeCodeAttribute] Offset: 10582FC
  class Coroutine : public ::UnityEngine::YieldInstruction {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // static private System.Void ReleaseCoroutine(System.IntPtr ptr)
    // Offset: 0x1FAEA10
    static void ReleaseCoroutine(::System::IntPtr ptr);
    // private System.Void .ctor()
    // Offset: 0x1FAE96C
    // Implemented from: UnityEngine.YieldInstruction
    // Base method: System.Void YieldInstruction::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Coroutine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Coroutine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Coroutine*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1FAE974
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Coroutine
  #pragma pack(pop)
  static check_size<sizeof(Coroutine), 16 + sizeof(::System::IntPtr)> __UnityEngine_CoroutineSizeCheck;
  static_assert(sizeof(Coroutine) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Coroutine::ReleaseCoroutine
// Il2CppName: ReleaseCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::Coroutine::ReleaseCoroutine)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Coroutine*), "ReleaseCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Coroutine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Coroutine::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Coroutine::*)()>(&UnityEngine::Coroutine::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Coroutine*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
