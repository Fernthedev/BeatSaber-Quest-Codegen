#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSystemCollection)
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace BeatSaber::AvatarCore {
struct __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystem;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace BeatSaber::AvatarCore {
class __AvatarSystemCollection____c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class __AvatarSystemCollection____c;
}
namespace BeatSaber::AvatarCore {
struct __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarSystemCollection);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::__AvatarSystemCollection____c);
MARK_VAL_T(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16);
// Type: ::<>c
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15180))
// CS Name: ::AvatarSystemCollection::<>c*
class CORDL_TYPE __AvatarSystemCollection____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::BeatSaber::AvatarCore::__AvatarSystemCollection____c*  value) ;

static inline ::BeatSaber::AvatarCore::__AvatarSystemCollection____c* getStaticF___9() ;

static inline void setStaticF___9__14_0(::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*,::System::Threading::Tasks::Task_1<bool>*>*  value) ;

static inline ::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*,::System::Threading::Tasks::Task_1<bool>*>* getStaticF___9__14_0() ;

static inline ::BeatSaber::AvatarCore::__AvatarSystemCollection____c* New_ctor() ;

/// @brief Method .ctor addr 0xe0ddf0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <get_anyAvatarCreated>b__14_0 addr 0xe0ddf8 size 0xa0 virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* _get_anyAvatarCreated_b__14_0(::BeatSaber::AvatarCore::IAvatarSystem*  avatarSystem) ;

// Ctor Parameters [CppParam { name: "", ty: "__AvatarSystemCollection____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AvatarSystemCollection____c(__AvatarSystemCollection____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AvatarSystemCollection____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AvatarSystemCollection____c(__AvatarSystemCollection____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AvatarSystemCollection____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__14_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarSystemCollection____c, 0x10>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
// Type: ::<GetMultiplayerAvatarsData>d__16
namespace BeatSaber::AvatarCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15181))
// CS Name: ::AvatarSystemCollection::<GetMultiplayerAvatarsData>d__16
struct CORDL_TYPE __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::BeatSaber::AvatarCore::AvatarSystemCollection*  __4__this;

/// @brief Field selectedAvatarTypeIdentifier offset 0x28
 __declspec(property(get=__get_selectedAvatarTypeIdentifier, put=__set_selectedAvatarTypeIdentifier)) ::StringW  selectedAvatarTypeIdentifier;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> const& __get___t__builder() const;

constexpr void __set___4__this(::BeatSaber::AvatarCore::AvatarSystemCollection*  value) ;

constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> __get___4__this() const;

constexpr void __set_selectedAvatarTypeIdentifier(::StringW  value) ;

constexpr ::StringW& __get_selectedAvatarTypeIdentifier() ;

constexpr ::StringW const& __get_selectedAvatarTypeIdentifier() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>> const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe0de98 size 0x89c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe0e734 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers: "", def_value: None }, CppParam { name: "selectedAvatarTypeIdentifier", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>", modifiers: "", def_value: None }]
constexpr __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>  __t__builder, ::BeatSaber::AvatarCore::AvatarSystemCollection*  __4__this, ::StringW  selectedAvatarTypeIdentifier, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, 0x38>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::AvatarSystemCollection
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15182))
// CS Name: ::BeatSaber.AvatarCore::AvatarSystemCollection*
class CORDL_TYPE AvatarSystemCollection : public ::System::Object {
public:
// Declarations
using _GetMultiplayerAvatarsData_d__16 = ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16;

using __c = ::BeatSaber::AvatarCore::__AvatarSystemCollection____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _availableAvatarSystems offset 0x10
 __declspec(property(get=__get__availableAvatarSystems, put=__set__availableAvatarSystems)) ::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*  _availableAvatarSystems;

/// @brief Field _availableUserSelectableAvatarSystems offset 0x18
 __declspec(property(get=__get__availableUserSelectableAvatarSystems, put=__set__availableUserSelectableAvatarSystems)) ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  _availableUserSelectableAvatarSystems;

/// @brief Field _supportedOptionalAvatarDataTypes offset 0x20
 __declspec(property(get=__get__supportedOptionalAvatarDataTypes, put=__set__supportedOptionalAvatarDataTypes)) ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*  _supportedOptionalAvatarDataTypes;

/// @brief Field _fallbackAvatarSystem offset 0x28
 __declspec(property(get=__get__fallbackAvatarSystem, put=__set__fallbackAvatarSystem)) ::BeatSaber::AvatarCore::IAvatarSystem*  _fallbackAvatarSystem;

/// @brief Field _availableAvatarSystemList offset 0x30
 __declspec(property(get=__get__availableAvatarSystemList, put=__set__availableAvatarSystemList)) ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  _availableAvatarSystemList;

 __declspec(property(get=get_selectableAvatarSystems)) ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  selectableAvatarSystems;

 __declspec(property(get=get_availableAvatarSystems)) ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  availableAvatarSystems;

 __declspec(property(get=get_supportedOptionalAvatarDataType)) ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*  supportedOptionalAvatarDataType;

 __declspec(property(get=get_anyAvatarCreated)) ::System::Threading::Tasks::Task_1<bool>*  anyAvatarCreated;

constexpr void __set__availableAvatarSystems(::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>* __get__availableAvatarSystems() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*> __get__availableAvatarSystems() const;

constexpr void __set__availableUserSelectableAvatarSystems(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* __get__availableUserSelectableAvatarSystems() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*> __get__availableUserSelectableAvatarSystems() const;

constexpr void __set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* __get__supportedOptionalAvatarDataTypes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*> __get__supportedOptionalAvatarDataTypes() const;

constexpr void __set__fallbackAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystem*  value) ;

constexpr ::BeatSaber::AvatarCore::IAvatarSystem* __get__fallbackAvatarSystem() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystem*> __get__fallbackAvatarSystem() const;

constexpr void __set__availableAvatarSystemList(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* __get__availableAvatarSystemList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*> __get__availableAvatarSystemList() const;

/// @brief Method get_selectableAvatarSystems addr 0xe0cbe8 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* get_selectableAvatarSystems() ;

/// @brief Method get_availableAvatarSystems addr 0xe0cbf0 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* get_availableAvatarSystems() ;

/// @brief Method get_supportedOptionalAvatarDataType addr 0xe0cbf8 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* get_supportedOptionalAvatarDataType() ;

static inline ::BeatSaber::AvatarCore::AvatarSystemCollection* New_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  boundAvatarSystems) ;

/// @brief Method .ctor addr 0xe0cc00 size 0xae8 virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  boundAvatarSystems) ;

/// @brief Method AvatarSystemBySelectionSortOrder addr 0xe0d6e8 size 0x128 virtual false final false
static inline int32_t AvatarSystemBySelectionSortOrder(::BeatSaber::AvatarCore::IAvatarSystem*  system1, ::BeatSaber::AvatarCore::IAvatarSystem*  system2) ;

/// @brief Method get_anyAvatarCreated addr 0xe0d810 size 0x120 virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* get_anyAvatarCreated() ;

/// @brief Method HasAvatarSystem addr 0xe0b40c size 0x58 virtual false final false
inline bool HasAvatarSystem(uint32_t  avatarTypeIdentifierHash) ;

/// @brief Method GetMultiplayerAvatarsData addr 0xe0d930 size 0x104 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* GetMultiplayerAvatarsData(::StringW  selectedAvatarTypeIdentifier) ;

/// @brief Method GetMultiplayerAvatarOptionalDataProvider addr 0xe0da34 size 0xbc virtual false final false
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* GetMultiplayerAvatarOptionalDataProvider(::StringW  selectedAvatarTypeIdentifier) ;

/// @brief Method CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar addr 0xe0db20 size 0x1b4 virtual false final false
inline void CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar() ;

/// @brief Method GetAvatarSystem addr 0xe0dcd4 size 0xa8 virtual false final false
inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystemMetadata) ;

/// @brief Method GetAvatarSystem addr 0xe0dd7c size 0x8 virtual false final false
inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::BeatSaber::AvatarCore::AvatarSystemIdentifier  avatarSystemIdentifier) ;

/// @brief Method GetAvatarSystem addr 0xe0daf0 size 0x30 virtual false final false
inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::StringW  avatarTypeIdentifier) ;

/// @brief Method GetAvatarSystem addr 0xe0b464 size 0x128 virtual false final false
inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(uint32_t  avatarTypeIdentifierHash) ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSystemCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarSystemCollection(AvatarSystemCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSystemCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarSystemCollection(AvatarSystemCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarSystemCollection()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSystemCollection, 0x38>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarSystemCollection);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSystemCollection*, "BeatSaber.AvatarCore", "AvatarSystemCollection");
NEED_NO_BOX(::BeatSaber::AvatarCore::__AvatarSystemCollection____c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarSystemCollection____c*, "BeatSaber.AvatarCore", "AvatarSystemCollection/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, "BeatSaber.AvatarCore", "AvatarSystemCollection/<GetMultiplayerAvatarsData>d__16");
