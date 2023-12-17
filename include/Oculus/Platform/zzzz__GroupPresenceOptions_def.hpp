#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupPresenceOptions)
// Forward declare root types
namespace Oculus::Platform {
class GroupPresenceOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::GroupPresenceOptions);
// Type: Oculus.Platform::GroupPresenceOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13245))
// CS Name: ::Oculus.Platform::GroupPresenceOptions*
class CORDL_TYPE GroupPresenceOptions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field Handle offset 0x10
 __declspec(property(get=__get_Handle, put=__set_Handle)) ::cordl_internals::intptr_t  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_Handle() ;

constexpr ::cordl_internals::intptr_t const& __get_Handle() const;

static inline ::Oculus::Platform::GroupPresenceOptions* New_ctor() ;

/// @brief Method .ctor addr 0x26ca1e0 size 0x64 virtual false final false
inline void _ctor() ;

/// @brief Method SetDeeplinkMessageOverride addr 0x26ec80c size 0x68 virtual false final false
inline void SetDeeplinkMessageOverride(::StringW  value) ;

/// @brief Method SetDestinationApiName addr 0x26ca244 size 0x68 virtual false final false
inline void SetDestinationApiName(::StringW  value) ;

/// @brief Method SetIsJoinable addr 0x26ca37c size 0x68 virtual false final false
inline void SetIsJoinable(bool  value) ;

/// @brief Method SetLobbySessionId addr 0x26ca314 size 0x68 virtual false final false
inline void SetLobbySessionId(::StringW  value) ;

/// @brief Method SetMatchSessionId addr 0x26ca2ac size 0x68 virtual false final false
inline void SetMatchSessionId(::StringW  value) ;

/// @brief Method op_Explicit addr 0x26ec874 size 0x58 virtual false final false
static inline ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::Oculus::Platform::GroupPresenceOptions*  options) ;

/// @brief Method Finalize addr 0x26ec8cc size 0xd4 virtual true final false
inline void Finalize() ;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupPresenceOptions(GroupPresenceOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupPresenceOptions(GroupPresenceOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GroupPresenceOptions()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::GroupPresenceOptions, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::GroupPresenceOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::GroupPresenceOptions*, "Oculus.Platform", "GroupPresenceOptions");
