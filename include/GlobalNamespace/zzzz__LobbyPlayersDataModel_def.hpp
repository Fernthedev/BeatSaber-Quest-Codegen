#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyPlayersDataModel)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class __LobbyPlayersDataModel___GetEnumerator_d__60;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
struct __LobbyPlayersDataModel___SetOwnedSongPacks_d__43;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace GlobalNamespace {
class __LobbyPlayersDataModel____c;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class LobbyPlayerData;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct __Dictionary_2__Enumerator;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyPlayersDataModel;
}
namespace GlobalNamespace {
class __LobbyPlayersDataModel___GetEnumerator_d__60;
}
namespace GlobalNamespace {
class __LobbyPlayersDataModel____c;
}
namespace GlobalNamespace {
struct __LobbyPlayersDataModel___SetOwnedSongPacks_d__43;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyPlayersDataModel);
MARK_REF_PTR_T(::GlobalNamespace::__LobbyPlayersDataModel___GetEnumerator_d__60);
MARK_REF_PTR_T(::GlobalNamespace::__LobbyPlayersDataModel____c);
MARK_VAL_T(::GlobalNamespace::__LobbyPlayersDataModel___SetOwnedSongPacks_d__43);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4506))
// CS Name: ::LobbyPlayersDataModel::<>c*
class CORDL_TYPE __LobbyPlayersDataModel____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__LobbyPlayersDataModel____c*  value) ;

static inline ::GlobalNamespace::__LobbyPlayersDataModel____c* getStaticF___9() ;

static inline void setStaticF___9__43_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::StringW>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::StringW>* getStaticF___9__43_0() ;

static inline ::GlobalNamespace::__LobbyPlayersDataModel____c* New_ctor() ;

/// @brief Method .ctor addr 0x235f854 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SetOwnedSongPacks>b__43_0 addr 0x235f85c size 0x9c virtual false final false
inline ::StringW _SetOwnedSongPacks_b__43_0(::GlobalNamespace::IBeatmapLevelPack*  pack) ;

// Ctor Parameters [CppParam { name: "", ty: "__LobbyPlayersDataModel____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LobbyPlayersDataModel____c(__LobbyPlayersDataModel____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LobbyPlayersDataModel____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LobbyPlayersDataModel____c(__LobbyPlayersDataModel____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LobbyPlayersDataModel____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__43_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LobbyPlayersDataModel____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<SetOwnedSongPacks>d__43
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4507))
// CS Name: ::LobbyPlayersDataModel::<SetOwnedSongPacks>d__43
struct CORDL_TYPE __LobbyPlayersDataModel___SetOwnedSongPacks_d__43 : public ::bs_hook::ValueTypeWrapper<0x70> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LobbyPlayersDataModel*  __4__this;

/// @brief Field <songPackMask>5__2 offset 0x30
 __declspec(property(get=__get__songPackMask_5__2, put=__set__songPackMask_5__2)) ::GlobalNamespace::SongPackMask  _songPackMask_5__2;

/// @brief Field <>7__wrap2 offset 0x50
 __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2)) ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  __7__wrap2;

/// @brief Field <>7__wrap3 offset 0x58
 __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3)) int32_t  __7__wrap3;

/// @brief Field <dlcSongPack>5__5 offset 0x60
 __declspec(property(get=__get__dlcSongPack_5__5, put=__set__dlcSongPack_5__5)) ::GlobalNamespace::IBeatmapLevelPack*  _dlcSongPack_5__5;

/// @brief Field <>u__1 offset 0x68
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::LobbyPlayersDataModel*  value) ;

constexpr ::GlobalNamespace::LobbyPlayersDataModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayersDataModel*> __get___4__this() const;

constexpr void __set__songPackMask_5__2(::GlobalNamespace::SongPackMask  value) ;

constexpr ::GlobalNamespace::SongPackMask& __get__songPackMask_5__2() ;

constexpr ::GlobalNamespace::SongPackMask const& __get__songPackMask_5__2() const;

constexpr void __set___7__wrap2(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get___7__wrap2() ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get___7__wrap2() const;

constexpr void __set___7__wrap3(int32_t  value) ;

constexpr int32_t& __get___7__wrap3() ;

constexpr int32_t const& __get___7__wrap3() const;

constexpr void __set__dlcSongPack_5__5(::GlobalNamespace::IBeatmapLevelPack*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPack* __get__dlcSongPack_5__5() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> __get__dlcSongPack_5__5() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x235f8f8 size 0x730 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2360028 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LobbyPlayersDataModel*", modifiers: "", def_value: None }, CppParam { name: "_songPackMask_5__2", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_dlcSongPack_5__5", ty: "::GlobalNamespace::IBeatmapLevelPack*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
constexpr __LobbyPlayersDataModel___SetOwnedSongPacks_d__43(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::LobbyPlayersDataModel*  __4__this, ::GlobalNamespace::SongPackMask  _songPackMask_5__2, ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  __7__wrap2, int32_t  __7__wrap3, ::GlobalNamespace::IBeatmapLevelPack*  _dlcSongPack_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LobbyPlayersDataModel___SetOwnedSongPacks_d__43(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x70>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LobbyPlayersDataModel___SetOwnedSongPacks_d__43()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LobbyPlayersDataModel___SetOwnedSongPacks_d__43, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetEnumerator>d__60
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4508))
// CS Name: ::LobbyPlayersDataModel::<GetEnumerator>d__60*
class CORDL_TYPE __LobbyPlayersDataModel___GetEnumerator_d__60 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>  __2__current;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LobbyPlayersDataModel*  __4__this;

/// @brief Field <>7__wrap1 offset 0x30
 __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1)) ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW,::GlobalNamespace::LobbyPlayerData*>  __7__wrap1;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>  value) ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>& __get___2__current() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*> const& __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::LobbyPlayersDataModel*  value) ;

constexpr ::GlobalNamespace::LobbyPlayersDataModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayersDataModel*> __get___4__this() const;

constexpr void __set___7__wrap1(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW,::GlobalNamespace::LobbyPlayerData*>  value) ;

constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW,::GlobalNamespace::LobbyPlayerData*>& __get___7__wrap1() ;

constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW,::GlobalNamespace::LobbyPlayerData*> const& __get___7__wrap1() const;

static inline ::GlobalNamespace::__LobbyPlayersDataModel___GetEnumerator_d__60* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x235f504 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2360034 size 0x1c virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2360050 size 0x1e4 virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2360234 size 0x50 virtual false final false
inline void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,ILobbyPlayerData>>.get_Current addr 0x2360284 size 0xc virtual true final true
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2360290 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23602d0 size 0x5c virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__LobbyPlayersDataModel___GetEnumerator_d__60", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LobbyPlayersDataModel___GetEnumerator_d__60(__LobbyPlayersDataModel___GetEnumerator_d__60 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LobbyPlayersDataModel___GetEnumerator_d__60", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LobbyPlayersDataModel___GetEnumerator_d__60(__LobbyPlayersDataModel___GetEnumerator_d__60 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LobbyPlayersDataModel___GetEnumerator_d__60()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LobbyPlayersDataModel___GetEnumerator_d__60, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LobbyPlayersDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4509))
// CS Name: ::LobbyPlayersDataModel*
class CORDL_TYPE LobbyPlayersDataModel : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__60 = ::GlobalNamespace::__LobbyPlayersDataModel___GetEnumerator_d__60;

using _SetOwnedSongPacks_d__43 = ::GlobalNamespace::__LobbyPlayersDataModel___SetOwnedSongPacks_d__43;

using __c = ::GlobalNamespace::__LobbyPlayersDataModel____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field _menuRpcManager offset 0x10
 __declspec(property(get=__get__menuRpcManager, put=__set__menuRpcManager)) ::GlobalNamespace::IMenuRpcManager*  _menuRpcManager;

/// @brief Field _multiplayerSessionManager offset 0x18
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _beatmapLevelsModel offset 0x20
 __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel*  _beatmapLevelsModel;

/// @brief Field _beatmapCharacteristicCollection offset 0x28
 __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection*  _beatmapCharacteristicCollection;

/// @brief Field _additionalContentModel offset 0x30
 __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel*  _additionalContentModel;

/// @brief Field _lobbyPlayerPermissionsModel offset 0x38
 __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel)) ::GlobalNamespace::LobbyPlayerPermissionsModel*  _lobbyPlayerPermissionsModel;

/// @brief Field _emptyLobbyPlayerData offset 0x40
 __declspec(property(get=__get__emptyLobbyPlayerData, put=__set__emptyLobbyPlayerData)) ::GlobalNamespace::LobbyPlayerData*  _emptyLobbyPlayerData;

/// @brief Field _playersData offset 0x48
 __declspec(property(get=__get__playersData, put=__set__playersData)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LobbyPlayerData*>*  _playersData;

/// @brief Field _cancellationTokenSource offset 0x50
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field <partyOwnerId>k__BackingField offset 0x58
 __declspec(property(get=__get__partyOwnerId_k__BackingField, put=__set__partyOwnerId_k__BackingField)) ::StringW  _partyOwnerId_k__BackingField;

/// @brief Field didChangeEvent offset 0x60
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action_1<::StringW>*  didChangeEvent;

 __declspec(property(get=get_localUserId)) ::StringW  localUserId;

 __declspec(property(get=get_partyOwnerId, put=set_partyOwnerId)) ::StringW  partyOwnerId;

 __declspec(property(get=get_Item)) ::GlobalNamespace::ILobbyPlayerData*  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILobbyPlayerData*>*  Values;

/// @brief Convert operator to "::GlobalNamespace::ILobbyPlayersDataModel"
constexpr operator  ::GlobalNamespace::ILobbyPlayersDataModel*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>"
constexpr operator  ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__menuRpcManager(::GlobalNamespace::IMenuRpcManager*  value) ;

constexpr ::GlobalNamespace::IMenuRpcManager* __get__menuRpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> __get__menuRpcManager() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel* __get__beatmapLevelsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> __get__beatmapLevelsModel() const;

constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* __get__beatmapCharacteristicCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> __get__beatmapCharacteristicCollection() const;

constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get__additionalContentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get__additionalContentModel() const;

constexpr void __set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel*  value) ;

constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* __get__lobbyPlayerPermissionsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> __get__lobbyPlayerPermissionsModel() const;

constexpr void __set__emptyLobbyPlayerData(::GlobalNamespace::LobbyPlayerData*  value) ;

constexpr ::GlobalNamespace::LobbyPlayerData* __get__emptyLobbyPlayerData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerData*> __get__emptyLobbyPlayerData() const;

constexpr void __set__playersData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LobbyPlayerData*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LobbyPlayerData*>* __get__playersData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LobbyPlayerData*>*> __get__playersData() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

constexpr void __set__partyOwnerId_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__partyOwnerId_k__BackingField() ;

constexpr ::StringW const& __get__partyOwnerId_k__BackingField() const;

constexpr void __set_didChangeEvent(::System::Action_1<::StringW>*  value) ;

constexpr ::System::Action_1<::StringW>* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> __get_didChangeEvent() const;

/// @brief Method get_localUserId addr 0x235bd00 size 0x140 virtual true final true
inline ::StringW get_localUserId() ;

/// @brief Method get_partyOwnerId addr 0x235be40 size 0x8 virtual true final true
inline ::StringW get_partyOwnerId() ;

/// @brief Method set_partyOwnerId addr 0x235be48 size 0x8 virtual false final false
inline void set_partyOwnerId(::StringW  value) ;

/// @brief Method add_didChangeEvent addr 0x235be50 size 0xb0 virtual true final true
inline void add_didChangeEvent(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_didChangeEvent addr 0x235bf00 size 0xb0 virtual true final true
inline void remove_didChangeEvent(::System::Action_1<::StringW>*  value) ;

/// @brief Method get_Item addr 0x235bfb0 size 0x80 virtual true final true
inline ::GlobalNamespace::ILobbyPlayerData* get_Item(::StringW  userId) ;

/// @brief Method GetOrCreateLobbyPlayerDataModel addr 0x235c030 size 0xdc virtual false final false
inline ::GlobalNamespace::LobbyPlayerData* GetOrCreateLobbyPlayerDataModel(::StringW  userId, ByRef<bool>  alreadyExists) ;

/// @brief Method SetPlayerBeatmapLevel addr 0x235c10c size 0x84 virtual false final false
inline void SetPlayerBeatmapLevel(::StringW  userId, ::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel) ;

/// @brief Method SetPlayerGameplayModifiers addr 0x235c1ac size 0x7c virtual false final false
inline void SetPlayerGameplayModifiers(::StringW  userId, ::GlobalNamespace::GameplayModifiers*  modifiers) ;

/// @brief Method SetPlayerIsActive addr 0x235c228 size 0x8c virtual false final false
inline void SetPlayerIsActive(::StringW  userId, bool  isActive, bool  notifyChange) ;

/// @brief Method SetPlayerIsReady addr 0x235c2b4 size 0x8c virtual false final false
inline void SetPlayerIsReady(::StringW  userId, bool  isReady, bool  notifyChange) ;

/// @brief Method SetPlayerIsInLobby addr 0x235c340 size 0x8c virtual false final false
inline void SetPlayerIsInLobby(::StringW  userId, bool  isInLobby, bool  notifyChange) ;

/// @brief Method SetPlayerIsPartyOwner addr 0x235c3cc size 0x94 virtual false final false
inline void SetPlayerIsPartyOwner(::StringW  userId, bool  isPartyOwner, bool  notifyChange) ;

/// @brief Method SetLocalPlayerBeatmapLevel addr 0x235c460 size 0x154 virtual true final true
inline void SetLocalPlayerBeatmapLevel(::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel) ;

/// @brief Method ClearLocalPlayerBeatmapLevel addr 0x235c5b4 size 0xbc virtual true final true
inline void ClearLocalPlayerBeatmapLevel() ;

/// @brief Method SetLocalPlayerGameplayModifiers addr 0x235c670 size 0x11c virtual true final true
inline void SetLocalPlayerGameplayModifiers(::GlobalNamespace::GameplayModifiers*  modifiers) ;

/// @brief Method ClearLocalPlayerGameplayModifiers addr 0x235c78c size 0xbc virtual true final true
inline void ClearLocalPlayerGameplayModifiers() ;

/// @brief Method SetLocalPlayerIsActive addr 0x235c848 size 0xc virtual true final true
inline void SetLocalPlayerIsActive(bool  isActive) ;

/// @brief Method SetLocalPlayerIsActive addr 0x235c854 size 0xf4 virtual false final false
inline void SetLocalPlayerIsActive(bool  isActive, bool  notifyChange) ;

/// @brief Method SetLocalPlayerIsReady addr 0x235c948 size 0xc virtual true final true
inline void SetLocalPlayerIsReady(bool  isReady) ;

/// @brief Method SetLocalPlayerIsReady addr 0x235c954 size 0xd8 virtual false final false
inline void SetLocalPlayerIsReady(bool  isReady, bool  notifyChange) ;

/// @brief Method SetLocalPlayerIsInLobby addr 0x235ca2c size 0xc virtual true final true
inline void SetLocalPlayerIsInLobby(bool  isInLobby) ;

/// @brief Method SetLocalPlayerIsInLobby addr 0x235ca38 size 0xd8 virtual false final false
inline void SetLocalPlayerIsInLobby(bool  isInLobby, bool  notifyChange) ;

/// @brief Method RequestKickPlayer addr 0x235cb10 size 0xc8 virtual true final true
inline void RequestKickPlayer(::StringW  userId) ;

/// @brief Method ClearData addr 0x235cbd8 size 0x80 virtual true final true
inline void ClearData() ;

/// @brief Method ClearRecommendations addr 0x235cc58 size 0x158 virtual true final true
inline void ClearRecommendations() ;

/// @brief Method Activate addr 0x235cdb0 size 0x106c virtual true final true
inline void Activate() ;

/// @brief Method Deactivate addr 0x235deb4 size 0xa18 virtual true final true
inline void Deactivate() ;

/// @brief Method Dispose addr 0x235e8cc size 0x4 virtual true final true
inline void Dispose() ;

/// @brief Method SetOwnedSongPacks addr 0x235de1c size 0x98 virtual false final false
inline void SetOwnedSongPacks() ;

/// @brief Method HandleMenuRpcManagerGetRecommendedBeatmap addr 0x235e8d0 size 0x198 virtual false final false
inline void HandleMenuRpcManagerGetRecommendedBeatmap(::StringW  userId) ;

/// @brief Method HandleMenuRpcManagerGetRecommendedGameplayModifiers addr 0x235ea68 size 0x194 virtual false final false
inline void HandleMenuRpcManagerGetRecommendedGameplayModifiers(::StringW  userId) ;

/// @brief Method HandleMenuRpcManagerGetIsInLobby addr 0x235ebfc size 0x138 virtual false final false
inline void HandleMenuRpcManagerGetIsInLobby(::StringW  userId) ;

/// @brief Method HandleMenuRpcManagerGetIsReady addr 0x235ed34 size 0x138 virtual false final false
inline void HandleMenuRpcManagerGetIsReady(::StringW  userId) ;

/// @brief Method HandleMenuRpcManagerRecommendBeatmap addr 0x235ee6c size 0x40 virtual false final false
inline void HandleMenuRpcManagerRecommendBeatmap(::StringW  userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable*  beatmapId) ;

/// @brief Method HandleMenuRpcManagerRecommendGameplayModifiers addr 0x235eeac size 0x4 virtual false final false
inline void HandleMenuRpcManagerRecommendGameplayModifiers(::StringW  userId, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers) ;

/// @brief Method HandleMenuRpcManagerClearRecommendedGameplayModifiers addr 0x235eeb0 size 0x8 virtual false final false
inline void HandleMenuRpcManagerClearRecommendedGameplayModifiers(::StringW  userId) ;

/// @brief Method HandleMenuRpcManagerClearBeatmap addr 0x235eeb8 size 0x8 virtual false final false
inline void HandleMenuRpcManagerClearBeatmap(::StringW  userId) ;

/// @brief Method HandleMenuRpcManagerSetIsReady addr 0x235eec0 size 0xc virtual false final false
inline void HandleMenuRpcManagerSetIsReady(::StringW  userId, bool  isReady) ;

/// @brief Method HandleMenuRpcManagerSetIsInLobby addr 0x235eecc size 0xc virtual false final false
inline void HandleMenuRpcManagerSetIsInLobby(::StringW  userId, bool  isInLobby) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerStateChanged addr 0x235eed8 size 0xc8 virtual false final false
inline void HandleMultiplayerSessionManagerPlayerStateChanged(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerConnected addr 0x235efa0 size 0x238 virtual false final false
inline void HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerDisconnected addr 0x235f1d8 size 0x160 virtual false final false
inline void HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method NotifyModelChange addr 0x235c190 size 0x1c virtual false final false
inline void NotifyModelChange(::StringW  userId) ;

/// @brief Method HandleMenuRpcManagerGetOwnedSongPacks addr 0x235f338 size 0x4 virtual false final false
inline void HandleMenuRpcManagerGetOwnedSongPacks(::StringW  userId) ;

/// @brief Method HandleMenuRpcManagerSetPlayersPermissionConfiguration addr 0x235f33c size 0x160 virtual false final false
inline void HandleMenuRpcManagerSetPlayersPermissionConfiguration(::StringW  userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*  playersLobbyPermissionConfiguration) ;

/// @brief Method GetEnumerator addr 0x235f49c size 0x68 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x235f52c size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Count addr 0x235f530 size 0x50 virtual true final true
inline int32_t get_Count() ;

/// @brief Method ContainsKey addr 0x235f580 size 0x58 virtual true final true
inline bool ContainsKey(::StringW  key) ;

/// @brief Method TryGetValue addr 0x235f5d8 size 0x7c virtual true final true
inline bool TryGetValue(::StringW  key, ByRef<::GlobalNamespace::ILobbyPlayerData*>  value) ;

/// @brief Method get_Keys addr 0x235f654 size 0x50 virtual true final true
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_Keys() ;

/// @brief Method get_Values addr 0x235f6a4 size 0x50 virtual true final true
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILobbyPlayerData*>* get_Values() ;

static inline ::GlobalNamespace::LobbyPlayersDataModel* New_ctor() ;

/// @brief Method .ctor addr 0x235f6f4 size 0xfc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyPlayersDataModel(LobbyPlayersDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyPlayersDataModel(LobbyPlayersDataModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LobbyPlayersDataModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayersDataModel, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayersDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayersDataModel*, "", "LobbyPlayersDataModel");
NEED_NO_BOX(::GlobalNamespace::__LobbyPlayersDataModel___GetEnumerator_d__60);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LobbyPlayersDataModel___GetEnumerator_d__60*, "", "LobbyPlayersDataModel/<GetEnumerator>d__60");
NEED_NO_BOX(::GlobalNamespace::__LobbyPlayersDataModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LobbyPlayersDataModel____c*, "", "LobbyPlayersDataModel/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LobbyPlayersDataModel___SetOwnedSongPacks_d__43, "", "LobbyPlayersDataModel/<SetOwnedSongPacks>d__43");
