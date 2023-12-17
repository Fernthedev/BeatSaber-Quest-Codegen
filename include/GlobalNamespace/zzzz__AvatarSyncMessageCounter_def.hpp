#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSyncMessageCounter)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarSyncMessageCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarSyncMessageCounter);
// Type: ::AvatarSyncMessageCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14934))
// CS Name: ::AvatarSyncMessageCounter*
class CORDL_TYPE AvatarSyncMessageCounter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field messageTimestamps offset 0x10
 __declspec(property(get=__get_messageTimestamps, put=__set_messageTimestamps)) ::System::Collections::Generic::Queue_1<::System::DateTime>*  messageTimestamps;

/// @brief Field period offset 0x18
 __declspec(property(get=__get_period, put=__set_period)) ::System::TimeSpan  period;

constexpr void __set_messageTimestamps(::System::Collections::Generic::Queue_1<::System::DateTime>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::System::DateTime>* __get_messageTimestamps() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::DateTime>*> __get_messageTimestamps() const;

constexpr void __set_period(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_period() ;

constexpr ::System::TimeSpan const& __get_period() const;

static inline ::GlobalNamespace::AvatarSyncMessageCounter* New_ctor(::System::TimeSpan  period) ;

/// @brief Method .ctor addr 0x2635468 size 0x90 virtual false final false
inline void _ctor(::System::TimeSpan  period) ;

/// @brief Method MessageReceived addr 0x26354f8 size 0x8c virtual false final false
inline void MessageReceived() ;

/// @brief Method CurrentMessages addr 0x26356bc size 0x50 virtual false final false
inline int32_t CurrentMessages() ;

/// @brief Method CleanOldMessages addr 0x2635584 size 0x138 virtual false final false
inline void CleanOldMessages() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSyncMessageCounter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarSyncMessageCounter(AvatarSyncMessageCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSyncMessageCounter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarSyncMessageCounter(AvatarSyncMessageCounter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarSyncMessageCounter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarSyncMessageCounter, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarSyncMessageCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSyncMessageCounter*, "", "AvatarSyncMessageCounter");
