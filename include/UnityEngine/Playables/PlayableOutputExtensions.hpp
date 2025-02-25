// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayableOutput
  class IPlayableOutput;
  // Skipping declaration: IPlayable because it is already included!
  // Forward declaring type: INotification
  class INotification;
  // Forward declaring type: INotificationReceiver
  class INotificationReceiver;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableOutputExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PlayableOutputExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PlayableOutputExtensions
    PlayableOutputExtensions() noexcept {}
    // static public System.Void SetReferenceObject(U output, UnityEngine.Object value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetReferenceObject(U output, UnityEngine::Object* value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableOutputExtensions::SetReferenceObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableOutputExtensions", "SetReferenceObject", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(output), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, output, value);
    }
    // static public System.Void SetUserData(U output, UnityEngine.Object value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetUserData(U output, UnityEngine::Object* value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableOutputExtensions::SetUserData");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableOutputExtensions", "SetUserData", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(output), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, output, value);
    }
    // static public UnityEngine.Playables.Playable GetSourcePlayable(U output)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::Playable GetSourcePlayable(U output) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableOutputExtensions::GetSourcePlayable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableOutputExtensions", "GetSourcePlayable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(output)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::Playable, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, output);
    }
    // static public System.Void SetSourcePlayable(U output, V value, System.Int32 port)
    // Offset: 0xFFFFFFFF
    template<class U, class V>
    static void SetSourcePlayable(U output, V value, int port) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<V>> && is_value_type_v<V>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableOutputExtensions::SetSourcePlayable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableOutputExtensions", "SetSourcePlayable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(output), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(port)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, output, value, port);
    }
    // static public System.Int32 GetSourceOutputPort(U output)
    // Offset: 0xFFFFFFFF
    template<class U>
    static int GetSourceOutputPort(U output) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableOutputExtensions::GetSourceOutputPort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableOutputExtensions", "GetSourceOutputPort", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(output)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, output);
    }
    // static public System.Void SetWeight(U output, System.Single value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetWeight(U output, float value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableOutputExtensions::SetWeight");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableOutputExtensions", "SetWeight", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(output), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, output, value);
    }
    // static public System.Void PushNotification(U output, UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void PushNotification(U output, UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification* notification, ::Il2CppObject* context) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableOutputExtensions::PushNotification");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableOutputExtensions", "PushNotification", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(output), ::il2cpp_utils::ExtractType(origin), ::il2cpp_utils::ExtractType(notification), ::il2cpp_utils::ExtractType(context)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, output, origin, notification, context);
    }
    // static public System.Void AddNotificationReceiver(U output, UnityEngine.Playables.INotificationReceiver receiver)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void AddNotificationReceiver(U output, UnityEngine::Playables::INotificationReceiver* receiver) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableOutputExtensions::AddNotificationReceiver");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableOutputExtensions", "AddNotificationReceiver", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(output), ::il2cpp_utils::ExtractType(receiver)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, output, receiver);
    }
  }; // UnityEngine.Playables.PlayableOutputExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableOutputExtensions*, "UnityEngine.Playables", "PlayableOutputExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputExtensions::SetReferenceObject
// Il2CppName: SetReferenceObject
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputExtensions::SetUserData
// Il2CppName: SetUserData
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputExtensions::GetSourcePlayable
// Il2CppName: GetSourcePlayable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputExtensions::SetSourcePlayable
// Il2CppName: SetSourcePlayable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputExtensions::GetSourceOutputPort
// Il2CppName: GetSourceOutputPort
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputExtensions::SetWeight
// Il2CppName: SetWeight
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputExtensions::PushNotification
// Il2CppName: PushNotification
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputExtensions::AddNotificationReceiver
// Il2CppName: AddNotificationReceiver
// Cannot write MetadataGetter for generic methods!
