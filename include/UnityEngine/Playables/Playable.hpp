// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.Playable
  // [RequiredByNativeCodeAttribute] Offset: D92158
  struct Playable/*, public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Playables::Playable>*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: Playable
    constexpr Playable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Playables::Playable>
    operator System::IEquatable_1<UnityEngine::Playables::Playable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Playables::Playable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Playables.Playable m_NullPlayable
    static UnityEngine::Playables::Playable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Playables.Playable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Playables::Playable value);
    // static public UnityEngine.Playables.Playable get_Null()
    // Offset: 0x1C1E764
    static UnityEngine::Playables::Playable get_Null();
    // static public UnityEngine.Playables.Playable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x1C1E7CC
    static UnityEngine::Playables::Playable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xF082D4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Playable(UnityEngine::Playables::PlayableHandle handle)
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xF082DC
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean IsPlayableOfType()
    // Offset: 0xFFFFFFFF
    template<class T>
    bool IsPlayableOfType() {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<T>> && is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::Playable::IsPlayableOfType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "IsPlayableOfType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___generic__method);
    }
    // public System.Type GetPlayableType()
    // Offset: 0xF082E8
    System::Type* GetPlayableType();
    // public System.Boolean Equals(UnityEngine.Playables.Playable other)
    // Offset: 0xF08310
    bool Equals(UnityEngine::Playables::Playable other);
    // static private System.Void .cctor()
    // Offset: 0x1C1EA80
    static void _cctor();
  }; // UnityEngine.Playables.Playable
  #pragma pack(pop)
  static check_size<sizeof(Playable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Playables_PlayableSizeCheck;
  static_assert(sizeof(Playable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::Playable, "UnityEngine.Playables", "Playable");
// Writing includes for template specializations
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::get_Null
// Il2CppName: get_Null
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (*)()>(&UnityEngine::Playables::Playable::get_Null)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "get_Null", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (*)(UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Playables::Playable::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::PlayableGraph>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::Playable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Playables::Playable::*)()>(&UnityEngine::Playables::Playable::GetHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::IsPlayableOfType
// Il2CppName: IsPlayableOfType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::GetPlayableType
// Il2CppName: GetPlayableType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (UnityEngine::Playables::Playable::*)()>(&UnityEngine::Playables::Playable::GetPlayableType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "GetPlayableType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::Playable::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Playables::Playable::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::Playable>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Playables::Playable::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
