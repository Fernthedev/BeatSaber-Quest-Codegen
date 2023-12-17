#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSyncMessageCounterManager)
namespace GlobalNamespace {
struct __AvatarSyncMessageCounterManager__MessageType;
}
namespace System {
struct TimeSpan;
}
namespace GlobalNamespace {
class AvatarSyncMessageCounter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AvatarSyncMessageCounterManager__MessageType;
}
namespace GlobalNamespace {
class AvatarSyncMessageCounterManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType);
MARK_REF_PTR_T(::GlobalNamespace::AvatarSyncMessageCounterManager);
// Type: ::MessageType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14935))
// CS Name: ::AvatarSyncMessageCounterManager::MessageType
struct CORDL_TYPE __AvatarSyncMessageCounterManager__MessageType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AvatarSyncMessageCounterManager__MessageType_Unwrapped
enum struct ____AvatarSyncMessageCounterManager__MessageType_Unwrapped : int32_t {
__E_Sync = static_cast<int32_t>(0x0),
__E_Delta = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Sync value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType const Sync;

/// @brief Field Delta value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType const Delta;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AvatarSyncMessageCounterManager__MessageType_Unwrapped () const noexcept {
return std::bit_cast<____AvatarSyncMessageCounterManager__MessageType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AvatarSyncMessageCounterManager__MessageType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AvatarSyncMessageCounterManager__MessageType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AvatarSyncMessageCounterManager__MessageType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AvatarSyncMessageCounterManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14936))
// CS Name: ::AvatarSyncMessageCounterManager*
class CORDL_TYPE AvatarSyncMessageCounterManager : public ::System::Object {
public:
// Declarations
using MessageType = ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field userMessageCounters offset 0x10
 __declspec(property(get=__get_userMessageCounters, put=__set_userMessageCounters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*  userMessageCounters;

/// @brief Field messageTypePeriods offset 0x18
 __declspec(property(get=__get_messageTypePeriods, put=__set_messageTypePeriods)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*  messageTypePeriods;

static inline void setStaticF__instance(::GlobalNamespace::AvatarSyncMessageCounterManager*  value) ;

static inline ::GlobalNamespace::AvatarSyncMessageCounterManager* getStaticF__instance() ;

constexpr void __set_userMessageCounters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>* __get_userMessageCounters() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*> __get_userMessageCounters() const;

constexpr void __set_messageTypePeriods(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>* __get_messageTypePeriods() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*> __get_messageTypePeriods() const;

/// @brief Method get_Instance addr 0x263570c size 0x7c virtual false final false
static inline ::GlobalNamespace::AvatarSyncMessageCounterManager* get_Instance() ;

static inline ::GlobalNamespace::AvatarSyncMessageCounterManager* New_ctor() ;

/// @brief Method .ctor addr 0x2635788 size 0x14c virtual false final false
inline void _ctor() ;

/// @brief Method SetMessageTypePeriod addr 0x26358d4 size 0x68 virtual false final false
inline void SetMessageTypePeriod(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  messageType, ::System::TimeSpan  period) ;

/// @brief Method GetMessageTypePeriod addr 0x263593c size 0x18c virtual false final false
inline ::StringW GetMessageTypePeriod(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  messageType) ;

/// @brief Method MessageReceived addr 0x2635ac8 size 0x214 virtual false final false
inline void MessageReceived(::StringW  userId, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  messageType) ;

/// @brief Method GetPlayerMessageCount addr 0x2635cdc size 0x10c virtual false final false
inline int32_t GetPlayerMessageCount(::StringW  userId, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  messageType) ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSyncMessageCounterManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarSyncMessageCounterManager(AvatarSyncMessageCounterManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSyncMessageCounterManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarSyncMessageCounterManager(AvatarSyncMessageCounterManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarSyncMessageCounterManager()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarSyncMessageCounterManager, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, "", "AvatarSyncMessageCounterManager/MessageType");
NEED_NO_BOX(::GlobalNamespace::AvatarSyncMessageCounterManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSyncMessageCounterManager*, "", "AvatarSyncMessageCounterManager");
