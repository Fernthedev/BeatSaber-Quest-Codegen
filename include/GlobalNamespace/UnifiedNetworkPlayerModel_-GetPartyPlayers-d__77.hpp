// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/<GetPartyPlayers>d__77
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private INetworkPlayer <>2__current
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::INetworkPlayer* $$2__current;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnifiedNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x30
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $GetPartyPlayers$d__77
    $GetPartyPlayers$d__77(int $$1__state_ = {}, GlobalNamespace::INetworkPlayer* $$2__current_ = {}, int $$l__initialThreadId_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this_ = {}, int $i$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $i$5__2{$i$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: private INetworkPlayer <>2__current
    GlobalNamespace::INetworkPlayer* _get_$$2__current();
    // Set instance field: private INetworkPlayer <>2__current
    void _set_$$2__current(GlobalNamespace::INetworkPlayer* value);
    // Get instance field: private System.Int32 <>l__initialThreadId
    int _get_$$l__initialThreadId();
    // Set instance field: private System.Int32 <>l__initialThreadId
    void _set_$$l__initialThreadId(int value);
    // Get instance field: public UnifiedNetworkPlayerModel <>4__this
    GlobalNamespace::UnifiedNetworkPlayerModel* _get_$$4__this();
    // Set instance field: public UnifiedNetworkPlayerModel <>4__this
    void _set_$$4__this(GlobalNamespace::UnifiedNetworkPlayerModel* value);
    // Get instance field: private System.Int32 <i>5__2
    int _get_$i$5__2();
    // Set instance field: private System.Int32 <i>5__2
    void _set_$i$5__2(int value);
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0x1357228
    GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1357290
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1354CA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1357100
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1357104
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1357230
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0x1357298
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1357344
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnifiedNetworkPlayerModel/<GetPartyPlayers>d__77
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77), 48 + sizeof(int)> __GlobalNamespace_UnifiedNetworkPlayerModel_$GetPartyPlayers$d__77SizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*, "", "UnifiedNetworkPlayerModel/<GetPartyPlayers>d__77");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayer* (GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*), "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* (GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*), "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__77*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
