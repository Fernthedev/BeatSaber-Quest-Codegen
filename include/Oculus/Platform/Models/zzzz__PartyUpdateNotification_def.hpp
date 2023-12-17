#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PartyUpdateNotification)
namespace Oculus::Platform {
struct PartyUpdateAction;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PartyUpdateNotification);
// Type: Oculus.Platform.Models::PartyUpdateNotification
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13468))
// CS Name: ::Oculus.Platform.Models::PartyUpdateNotification*
class CORDL_TYPE PartyUpdateNotification : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Action offset 0x10
 __declspec(property(get=__get_Action, put=__set_Action)) ::Oculus::Platform::PartyUpdateAction  Action;

/// @brief Field PartyId offset 0x18
 __declspec(property(get=__get_PartyId, put=__set_PartyId)) uint64_t  PartyId;

/// @brief Field SenderId offset 0x20
 __declspec(property(get=__get_SenderId, put=__set_SenderId)) uint64_t  SenderId;

/// @brief Field UpdateTimestamp offset 0x28
 __declspec(property(get=__get_UpdateTimestamp, put=__set_UpdateTimestamp)) ::StringW  UpdateTimestamp;

/// @brief Field UserAlias offset 0x30
 __declspec(property(get=__get_UserAlias, put=__set_UserAlias)) ::StringW  UserAlias;

/// @brief Field UserId offset 0x38
 __declspec(property(get=__get_UserId, put=__set_UserId)) uint64_t  UserId;

/// @brief Field UserName offset 0x40
 __declspec(property(get=__get_UserName, put=__set_UserName)) ::StringW  UserName;

constexpr void __set_Action(::Oculus::Platform::PartyUpdateAction  value) ;

constexpr ::Oculus::Platform::PartyUpdateAction& __get_Action() ;

constexpr ::Oculus::Platform::PartyUpdateAction const& __get_Action() const;

constexpr void __set_PartyId(uint64_t  value) ;

constexpr uint64_t& __get_PartyId() ;

constexpr uint64_t const& __get_PartyId() const;

constexpr void __set_SenderId(uint64_t  value) ;

constexpr uint64_t& __get_SenderId() ;

constexpr uint64_t const& __get_SenderId() const;

constexpr void __set_UpdateTimestamp(::StringW  value) ;

constexpr ::StringW& __get_UpdateTimestamp() ;

constexpr ::StringW const& __get_UpdateTimestamp() const;

constexpr void __set_UserAlias(::StringW  value) ;

constexpr ::StringW& __get_UserAlias() ;

constexpr ::StringW const& __get_UserAlias() const;

constexpr void __set_UserId(uint64_t  value) ;

constexpr uint64_t& __get_UserId() ;

constexpr uint64_t const& __get_UserId() const;

constexpr void __set_UserName(::StringW  value) ;

constexpr ::StringW& __get_UserName() ;

constexpr ::StringW const& __get_UserName() const;

static inline ::Oculus::Platform::Models::PartyUpdateNotification* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2707fa8 size 0xd8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "PartyUpdateNotification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PartyUpdateNotification(PartyUpdateNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartyUpdateNotification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartyUpdateNotification(PartyUpdateNotification const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PartyUpdateNotification()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PartyUpdateNotification, 0x48>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PartyUpdateNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PartyUpdateNotification*, "Oculus.Platform.Models", "PartyUpdateNotification");
