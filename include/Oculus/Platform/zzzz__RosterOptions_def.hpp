#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RosterOptions)
// Forward declare root types
namespace Oculus::Platform {
class RosterOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::RosterOptions);
// Type: Oculus.Platform::RosterOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13384))
// CS Name: ::Oculus.Platform::RosterOptions*
class CORDL_TYPE RosterOptions : public ::System::Object {
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

static inline ::Oculus::Platform::RosterOptions* New_ctor() ;

/// @brief Method .ctor addr 0x26cad68 size 0x64 virtual false final false
inline void _ctor() ;

/// @brief Method AddSuggestedUser addr 0x26cadcc size 0x68 virtual false final false
inline void AddSuggestedUser(uint64_t  userID) ;

/// @brief Method ClearSuggestedUsers addr 0x2700e58 size 0x58 virtual false final false
inline void ClearSuggestedUsers() ;

/// @brief Method op_Explicit addr 0x26fd304 size 0x58 virtual false final false
static inline ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::Oculus::Platform::RosterOptions*  options) ;

/// @brief Method Finalize addr 0x2700eb0 size 0xd4 virtual true final false
inline void Finalize() ;

// Ctor Parameters [CppParam { name: "", ty: "RosterOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RosterOptions(RosterOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RosterOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RosterOptions(RosterOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RosterOptions()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RosterOptions, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::RosterOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RosterOptions*, "Oculus.Platform", "RosterOptions");
