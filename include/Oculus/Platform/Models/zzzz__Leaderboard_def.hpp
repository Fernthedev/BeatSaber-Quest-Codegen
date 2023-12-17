#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Leaderboard)
namespace Oculus::Platform::Models {
class Destination;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Leaderboard;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Leaderboard);
// Type: Oculus.Platform.Models::Leaderboard
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13447))
// CS Name: ::Oculus.Platform.Models::Leaderboard*
class CORDL_TYPE Leaderboard : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field ApiName offset 0x10
 __declspec(property(get=__get_ApiName, put=__set_ApiName)) ::StringW  ApiName;

/// @brief Field DestinationOptional offset 0x18
 __declspec(property(get=__get_DestinationOptional, put=__set_DestinationOptional)) ::Oculus::Platform::Models::Destination*  DestinationOptional;

/// @brief Field Destination offset 0x20
 __declspec(property(get=__get_Destination, put=__set_Destination)) ::Oculus::Platform::Models::Destination*  Destination;

/// @brief Field ID offset 0x28
 __declspec(property(get=__get__cordl_ID, put=__set__cordl_ID)) uint64_t  _cordl_ID;

constexpr void __set_ApiName(::StringW  value) ;

constexpr ::StringW& __get_ApiName() ;

constexpr ::StringW const& __get_ApiName() const;

constexpr void __set_DestinationOptional(::Oculus::Platform::Models::Destination*  value) ;

constexpr ::Oculus::Platform::Models::Destination* __get_DestinationOptional() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> __get_DestinationOptional() const;

constexpr void __set_Destination(::Oculus::Platform::Models::Destination*  value) ;

constexpr ::Oculus::Platform::Models::Destination* __get_Destination() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> __get_Destination() const;

constexpr void __set__cordl_ID(uint64_t  value) ;

constexpr uint64_t& __get__cordl_ID() ;

constexpr uint64_t const& __get__cordl_ID() const;

static inline ::Oculus::Platform::Models::Leaderboard* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2705434 size 0x128 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Leaderboard(Leaderboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Leaderboard(Leaderboard const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Leaderboard()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Leaderboard, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Leaderboard);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Leaderboard*, "Oculus.Platform.Models", "Leaderboard");
