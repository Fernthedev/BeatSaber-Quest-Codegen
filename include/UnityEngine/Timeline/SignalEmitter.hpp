// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.Marker
#include "UnityEngine/Timeline/Marker.hpp"
// Including type: UnityEngine.Playables.INotification
#include "UnityEngine/Playables/INotification.hpp"
// Including type: UnityEngine.Timeline.INotificationOptionProvider
#include "UnityEngine/Timeline/INotificationOptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalAsset
  class SignalAsset;
  // Forward declaring type: NotificationFlags
  struct NotificationFlags;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalEmitter
  class SignalEmitter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::SignalEmitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalEmitter*, "UnityEngine.Timeline", "SignalEmitter");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.SignalEmitter
  // [TokenAttribute] Offset: FFFFFFFF
  // [CustomStyleAttribute] Offset: 10A3684
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class SignalEmitter : public ::UnityEngine::Timeline::Marker/*, public ::UnityEngine::Playables::INotification, public ::UnityEngine::Timeline::INotificationOptionProvider*/ {
    public:
    public:
    // private System.Boolean m_Retroactive
    // Size: 0x1
    // Offset: 0x28
    bool m_Retroactive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_EmitOnce
    // Size: 0x1
    // Offset: 0x29
    bool m_EmitOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_EmitOnce and: m_Asset
    char __padding1[0x6] = {};
    // private UnityEngine.Timeline.SignalAsset m_Asset
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Timeline::SignalAsset* m_Asset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::SignalAsset*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Playables::INotification
    operator ::UnityEngine::Playables::INotification() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::INotification*>(this);
    }
    // Creating interface conversion operator: i_INotification
    inline ::UnityEngine::Playables::INotification* i_INotification() noexcept {
      return reinterpret_cast<::UnityEngine::Playables::INotification*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Timeline::INotificationOptionProvider
    operator ::UnityEngine::Timeline::INotificationOptionProvider() noexcept {
      return *reinterpret_cast<::UnityEngine::Timeline::INotificationOptionProvider*>(this);
    }
    // Creating interface conversion operator: i_INotificationOptionProvider
    inline ::UnityEngine::Timeline::INotificationOptionProvider* i_INotificationOptionProvider() noexcept {
      return reinterpret_cast<::UnityEngine::Timeline::INotificationOptionProvider*>(this);
    }
    // Get instance field reference: private System.Boolean m_Retroactive
    [[deprecated("Use field access instead!")]] bool& dyn_m_Retroactive();
    // Get instance field reference: private System.Boolean m_EmitOnce
    [[deprecated("Use field access instead!")]] bool& dyn_m_EmitOnce();
    // Get instance field reference: private UnityEngine.Timeline.SignalAsset m_Asset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Timeline::SignalAsset*& dyn_m_Asset();
    // public System.Boolean get_retroactive()
    // Offset: 0x1DB2A04
    bool get_retroactive();
    // public System.Void set_retroactive(System.Boolean value)
    // Offset: 0x1DB2A0C
    void set_retroactive(bool value);
    // public System.Boolean get_emitOnce()
    // Offset: 0x1DB2A18
    bool get_emitOnce();
    // public System.Void set_emitOnce(System.Boolean value)
    // Offset: 0x1DB2A20
    void set_emitOnce(bool value);
    // public UnityEngine.Timeline.SignalAsset get_asset()
    // Offset: 0x1DB2A2C
    ::UnityEngine::Timeline::SignalAsset* get_asset();
    // public System.Void set_asset(UnityEngine.Timeline.SignalAsset value)
    // Offset: 0x1DB2A34
    void set_asset(::UnityEngine::Timeline::SignalAsset* value);
    // private UnityEngine.PropertyName UnityEngine.Playables.INotification.get_id()
    // Offset: 0x1DB2A3C
    ::UnityEngine::PropertyName UnityEngine_Playables_INotification_get_id();
    // private UnityEngine.Timeline.NotificationFlags UnityEngine.Timeline.INotificationOptionProvider.get_flags()
    // Offset: 0x1DB2B00
    ::UnityEngine::Timeline::NotificationFlags UnityEngine_Timeline_INotificationOptionProvider_get_flags();
    // public System.Void .ctor()
    // Offset: 0x1DB2B28
    // Implemented from: UnityEngine.Timeline.Marker
    // Base method: System.Void Marker::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalEmitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::SignalEmitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalEmitter*, creationType>()));
    }
  }; // UnityEngine.Timeline.SignalEmitter
  #pragma pack(pop)
  static check_size<sizeof(SignalEmitter), 48 + sizeof(::UnityEngine::Timeline::SignalAsset*)> __UnityEngine_Timeline_SignalEmitterSizeCheck;
  static_assert(sizeof(SignalEmitter) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::get_retroactive
// Il2CppName: get_retroactive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::SignalEmitter::*)()>(&UnityEngine::Timeline::SignalEmitter::get_retroactive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalEmitter*), "get_retroactive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::set_retroactive
// Il2CppName: set_retroactive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalEmitter::*)(bool)>(&UnityEngine::Timeline::SignalEmitter::set_retroactive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalEmitter*), "set_retroactive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::get_emitOnce
// Il2CppName: get_emitOnce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::SignalEmitter::*)()>(&UnityEngine::Timeline::SignalEmitter::get_emitOnce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalEmitter*), "get_emitOnce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::set_emitOnce
// Il2CppName: set_emitOnce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalEmitter::*)(bool)>(&UnityEngine::Timeline::SignalEmitter::set_emitOnce)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalEmitter*), "set_emitOnce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::get_asset
// Il2CppName: get_asset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::SignalAsset* (UnityEngine::Timeline::SignalEmitter::*)()>(&UnityEngine::Timeline::SignalEmitter::get_asset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalEmitter*), "get_asset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::set_asset
// Il2CppName: set_asset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalEmitter::*)(::UnityEngine::Timeline::SignalAsset*)>(&UnityEngine::Timeline::SignalEmitter::set_asset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "SignalAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalEmitter*), "set_asset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::UnityEngine_Playables_INotification_get_id
// Il2CppName: UnityEngine.Playables.INotification.get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (UnityEngine::Timeline::SignalEmitter::*)()>(&UnityEngine::Timeline::SignalEmitter::UnityEngine_Playables_INotification_get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalEmitter*), "UnityEngine.Playables.INotification.get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::UnityEngine_Timeline_INotificationOptionProvider_get_flags
// Il2CppName: UnityEngine.Timeline.INotificationOptionProvider.get_flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::NotificationFlags (UnityEngine::Timeline::SignalEmitter::*)()>(&UnityEngine::Timeline::SignalEmitter::UnityEngine_Timeline_INotificationOptionProvider_get_flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalEmitter*), "UnityEngine.Timeline.INotificationOptionProvider.get_flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
