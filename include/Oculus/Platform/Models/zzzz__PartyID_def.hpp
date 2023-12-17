#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PartyID)
// Forward declare root types
namespace Oculus::Platform::Models {
class PartyID;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PartyID);
// Type: Oculus.Platform.Models::PartyID
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13467))
// CS Name: ::Oculus.Platform.Models::PartyID*
class CORDL_TYPE PartyID : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field ID offset 0x10
 __declspec(property(get=__get__cordl_ID, put=__set__cordl_ID)) uint64_t  _cordl_ID;

constexpr void __set__cordl_ID(uint64_t  value) ;

constexpr uint64_t& __get__cordl_ID() ;

constexpr uint64_t const& __get__cordl_ID() const;

static inline ::Oculus::Platform::Models::PartyID* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2707f30 size 0x78 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "PartyID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PartyID(PartyID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartyID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartyID(PartyID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PartyID()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PartyID, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PartyID);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PartyID*, "Oculus.Platform.Models", "PartyID");
