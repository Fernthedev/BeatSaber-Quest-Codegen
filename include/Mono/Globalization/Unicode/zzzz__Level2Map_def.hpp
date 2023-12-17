#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Level2Map)
// Forward declare root types
namespace Mono::Globalization::Unicode {
class Level2Map;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::Level2Map);
// Type: Mono.Globalization.Unicode::Level2Map
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2262))
// CS Name: ::Mono.Globalization.Unicode::Level2Map*
class CORDL_TYPE Level2Map : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field Source offset 0x10
 __declspec(property(get=__get_Source, put=__set_Source)) uint8_t  Source;

/// @brief Field Replace offset 0x11
 __declspec(property(get=__get_Replace, put=__set_Replace)) uint8_t  Replace;

constexpr void __set_Source(uint8_t  value) ;

constexpr uint8_t& __get_Source() ;

constexpr uint8_t const& __get_Source() const;

constexpr void __set_Replace(uint8_t  value) ;

constexpr uint8_t& __get_Replace() ;

constexpr uint8_t const& __get_Replace() const;

static inline ::Mono::Globalization::Unicode::Level2Map* New_ctor(uint8_t  source, uint8_t  replace) ;

/// @brief Method .ctor addr 0x24156c4 size 0x30 virtual false final false
inline void _ctor(uint8_t  source, uint8_t  replace) ;

// Ctor Parameters [CppParam { name: "", ty: "Level2Map", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Level2Map(Level2Map && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Level2Map", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Level2Map(Level2Map const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Level2Map()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::Level2Map, 0x18>, "Size mismatch!");

} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::Level2Map);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::Level2Map*, "Mono.Globalization.Unicode", "Level2Map");
